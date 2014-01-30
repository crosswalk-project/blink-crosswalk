/*
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WTF_PartitionAlloc_h
#define WTF_PartitionAlloc_h

// DESCRIPTION
// partitionAlloc() and partitionFree() are approximately analagous
// to malloc() and free().
//
// The main difference is that a PartitionRoot object must be supplied to
// these functions, representing a specific "heap partition" that will
// be used to satisfy the allocation. Different partitions are guaranteed to
// exist in separate address spaces, including being separate from the main
// system heap. If the contained objects are all freed, physical memory is
// returned to the system but the address space remains reserved.
//
// THE ONLY LEGITIMATE WAY TO OBTAIN A PartitionRoot IS THROUGH THE
// PartitionAllocator TEMPLATED CLASS. To minimize the instruction count
// to the fullest extent possible, the PartitonRoot is really just a
// header adjacent to other data areas provided by the PartitionAllocator
// class.
//
// Allocations and frees against a single partition must be single threaded.
// Allocations must not exceed a max size, typically 4088 bytes at this time.
// Allocation sizes must be aligned to the system pointer size.
// The separate APIs partitionAllocGeneric and partitionFreeGeneric are
// provided, and they do not have the above three restrictions. In return, you
// take a small performance hit.
//
// This allocator is designed to be extremely fast, thanks to the following
// properties and design:
// - Just a single (reasonably predicatable) branch in the hot / fast path for
// both allocating and (significantly) freeing.
// - A minimal number of operations in the hot / fast path, with the slow paths
// in separate functions, leading to the possibility of inlining.
// - Each partition page (which is usually multiple physical pages) has a header
// structure which allows fast mapping of free() address to an underlying
// bucket.
// - Supports a lock-free API for fast performance in single-threaded cases.
// - The freelist for a given bucket is split across a number of partition
// pages, enabling various simple tricks to try and minimize fragmentation.
// - Fine-grained bucket sizes leading to less waste and better packing.
//
// The following security properties are provided at this time:
// - Linear overflows cannot corrupt into the partition.
// - Linear overflows cannot corrupt out of the partition.
// - Freed pages will only be re-used within the partition.
// - Freed pages will only hold same-sized objects when re-used.
// - Dereference of freelist pointer should fault.
// - Linear overflow into page header should be trapped, as long as ASLR has
// not been bypassed.
// - Partial pointer overwrite of freelist pointer should fault.
// - Rudimentary double-free detection.
//
// The following security properties could be investigated in the future:
// - Per-object bucketing (instead of per-size) is mostly available at the API,
// but not used yet.
// - No randomness of freelist entries or bucket position.
// - Check alignment of pointers in free in Release builds.
// - Better freelist masking function to guarantee fault on 32-bit.

#include "wtf/Assertions.h"
#include "wtf/ByteSwap.h"
#include "wtf/CPU.h"
#include "wtf/FastMalloc.h"
#include "wtf/PageAllocator.h"
#include "wtf/QuantizedAllocation.h"
#include "wtf/SpinLock.h"

#if defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
#include <stdlib.h>
#endif

#ifndef NDEBUG
#include <string.h>
#endif

namespace WTF {

// Maximum size of a partition's mappings. 1GB. Note that the total amount of
// bytes allocatable at the API will be smaller. This is because things like
// guard pages, metadata, page headers and wasted space come out of the total.
// The 1GB is not necessarily contiguous in virtual address space.
static const size_t kMaxPartitionSize = 1024 * 1024 * 1024;
// Allocation granularity of sizeof(void*) bytes.
static const size_t kAllocationGranularity = sizeof(void*);
static const size_t kAllocationGranularityMask = kAllocationGranularity - 1;
static const size_t kBucketShift = (kAllocationGranularity == 8) ? 3 : 2;
// Underlying partition storage pages are a power-of-two size. It is typical
// for a partition page to be based on multiple system pages. We rarely deal
// with system pages. Most references to "page" refer to partition pages. We
// do also have the concept of "super pages" -- these are the underlying
// system allocations we make. Super pages can typically fit multiple
// partition pages inside them. See PageAllocator.h for more details on
// super pages.
static const size_t kPartitionPageSize = 1 << 14; // 16KB
static const size_t kPartitionPageOffsetMask = kPartitionPageSize - 1;
static const size_t kPartitionPageBaseMask = ~kPartitionPageOffsetMask;
// This is set to a typical modern cacheline size, to minimize effects of
// partitionAlloc() cacheline bouncing, or more accurately, to behave similarly
// to other bucketing allocators such as tcmalloc.
static const size_t kPartitionPageHeaderSize = 64;
// To avoid fragmentation via never-used freelist entries, we hand out partition
// freelist sections gradually, in units that resemble the dominant system page
// size.
// What we're actually doing is avoiding filling the full partition page
// (typically 16KB) will freelist pointers right away. Writing freelist
// pointers will fault and dirty a private page, which is very wasteful if we
// never actually store objects there.
static const size_t kSubPartitionPageSize = 1 << 12; // 4KB
static const size_t kSubPartitionPageMask = kSubPartitionPageSize - 1;
static const size_t kNumSubPagesPerPartitionPage = kPartitionPageSize / kSubPartitionPageSize;
// Special bucket id for internal metadata.
static const size_t kInternalMetadataBucket = 0;

#ifndef NDEBUG
// These two byte values match tcmalloc.
static const unsigned char kUninitializedByte = 0xAB;
static const unsigned char kFreedByte = 0xCD;
#if CPU(64BIT)
static const uintptr_t kCookieValue = 0xDEADBEEFDEADBEEFul;
#else
static const uintptr_t kCookieValue = 0xDEADBEEFu;
#endif
#endif

struct PartitionRoot;
struct PartitionBucket;

struct PartitionFreelistEntry {
    PartitionFreelistEntry* next;
};

struct PartitionPageHeader {
    uintptr_t* guard; // Points to self, used as a fast type of canary.
    PartitionFreelistEntry* freelistHead;
    int numAllocatedSlots; // Deliberately signed.
    unsigned numUnprovisionedSlots;
    PartitionBucket* bucket;
    PartitionPageHeader* next;
    PartitionPageHeader* prev;
};

struct PartitionFreepagelistEntry {
    PartitionPageHeader* page;
    PartitionFreepagelistEntry* next;
};

struct PartitionBucket {
    PartitionRoot* root;
    PartitionPageHeader* currPage;
    PartitionFreepagelistEntry* freePages;
    unsigned numFullPages;
    unsigned pageSize;
};

struct PartitionSuperPageExtentEntry {
    char* superPageBase;
    char* superPagesEnd;
    PartitionSuperPageExtentEntry* next;
};

// Never instantiate a PartitionRoot directly, instead use PartitionAlloc.
struct PartitionRoot {
    int lock;
    size_t totalSizeOfSuperPages;
    unsigned numBuckets;
    unsigned maxAllocation;
    bool initialized;
    char* nextSuperPage;
    char* nextPartitionPage;
    char* nextPartitionPageEnd;
    PartitionSuperPageExtentEntry* currentExtent;
    PartitionSuperPageExtentEntry firstExtent;
    PartitionPageHeader seedPage;
    PartitionBucket seedBucket;

    // The PartitionAlloc templated class ensures the following is correct.
    ALWAYS_INLINE PartitionBucket* buckets() { return reinterpret_cast<PartitionBucket*>(this + 1); }
    ALWAYS_INLINE const PartitionBucket* buckets() const { return reinterpret_cast<const PartitionBucket*>(this + 1); }
};

WTF_EXPORT void partitionAllocInit(PartitionRoot*, size_t numBuckets, size_t maxAllocation);
WTF_EXPORT NEVER_INLINE bool partitionAllocShutdown(PartitionRoot*);

WTF_EXPORT NEVER_INLINE void* partitionAllocSlowPath(PartitionBucket*);
WTF_EXPORT NEVER_INLINE void partitionFreeSlowPath(PartitionPageHeader*);
WTF_EXPORT NEVER_INLINE void* partitionReallocGeneric(PartitionRoot*, void*, size_t);

ALWAYS_INLINE PartitionFreelistEntry* partitionFreelistMask(PartitionFreelistEntry* ptr)
{
    // We use bswap on little endian as a fast mask for two reasons:
    // 1) If an object is freed and its vtable used where the attacker doesn't
    // get the chance to run allocations between the free and use, the vtable
    // dereference is likely to fault.
    // 2) If the attacker has a linear buffer overflow and elects to try and
    // corrupt a freelist pointer, partial pointer overwrite attacks are
    // thwarted.
    // For big endian, similar guarantees are arrived at with a negation.
#if CPU(BIG_ENDIAN)
    uintptr_t masked = ~reinterpret_cast<uintptr_t>(ptr);
#else
    uintptr_t masked = bswapuintptrt(reinterpret_cast<uintptr_t>(ptr));
#endif
    return reinterpret_cast<PartitionFreelistEntry*>(masked);
}

ALWAYS_INLINE size_t partitionCookieSizeAdjustAdd(size_t size)
{
#ifndef NDEBUG
    // Add space for cookies.
    size += 2 * sizeof(uintptr_t);
#endif
    return size;
}

ALWAYS_INLINE size_t partitionCookieSizeAdjustSubtract(size_t size)
{
#ifndef NDEBUG
    // Remove space for cookies.
    size -= 2 * sizeof(uintptr_t);
#endif
    return size;
}

ALWAYS_INLINE void* partitionCookieFreePointerAdjust(void* ptr)
{
#ifndef NDEBUG
    // The value given to the application is actually just after the cookie.
    ptr = static_cast<uintptr_t*>(ptr) - 1;
#endif
    return ptr;
}

ALWAYS_INLINE size_t partitionBucketSize(const PartitionBucket* bucket)
{
    PartitionRoot* root = bucket->root;
    size_t index = bucket - &root->buckets()[0];
    size_t size;
    if (UNLIKELY(index == kInternalMetadataBucket))
        size = partitionCookieSizeAdjustAdd(sizeof(PartitionFreepagelistEntry));
    else
        size = index << kBucketShift;
    return size;
}

ALWAYS_INLINE PartitionPageHeader* partitionPointerToPage(void* ptr)
{
    uintptr_t pointerAsUint = reinterpret_cast<uintptr_t>(ptr);
    // Checks that the pointer is after the page header. You can't free the
    // page header!
    ASSERT((pointerAsUint & kPartitionPageOffsetMask) >= kPartitionPageHeaderSize);
    PartitionPageHeader* page = reinterpret_cast<PartitionPageHeader*>(pointerAsUint & kPartitionPageBaseMask);
    // Checks that the pointer is a multiple of bucket size.
    ASSERT(!(((pointerAsUint & kPartitionPageOffsetMask) - kPartitionPageHeaderSize) % partitionBucketSize(page->bucket)));
    return page;
}

ALWAYS_INLINE bool partitionPointerIsValid(PartitionRoot* root, void* ptr)
{
    // On 32-bit systems, we have an optimization where we have a bitmap that
    // can instantly tell us if a pointer is in a super page or not.
    // It is a global bitmap instead of a per-partition bitmap but this is a
    // reasonable space vs. accuracy trade off.
    if (SuperPageBitmap::isAvailable())
        return SuperPageBitmap::isPointerInSuperPage(ptr);

    // On 64-bit systems, we check the list of super page extents. Due to the
    // massive address space, we typically have a single extent.
    // Dominant case: the pointer is in the first extent, which grew without any collision.
    if (LIKELY(ptr >= root->firstExtent.superPageBase) && LIKELY(ptr < root->firstExtent.superPagesEnd))
        return true;

    // Otherwise, scan through the extent list.
    PartitionSuperPageExtentEntry* entry = root->firstExtent.next;
    while (UNLIKELY(entry != 0)) {
        if (ptr >= entry->superPageBase && ptr < entry->superPagesEnd)
            return true;
        entry = entry->next;
    }

    return false;
}

ALWAYS_INLINE void partitionValidatePage(PartitionPageHeader* page)
{
    // Force the read by referencing a volatile version of the guard.
    volatile uintptr_t* guard = page->guard;
    *guard;
    ASSERT(*guard == reinterpret_cast<uintptr_t>(&page->guard));
}

ALWAYS_INLINE void* partitionBucketAlloc(PartitionBucket* bucket)
{
    PartitionPageHeader* page = bucket->currPage;
    partitionValidatePage(page);
    void* ret = page->freelistHead;
    if (LIKELY(ret != 0)) {
        // If these asserts fire, you probably corrupted memory.
        ASSERT(partitionPointerIsValid(bucket->root, ret));
        ASSERT(partitionPointerToPage(ret));
        page->freelistHead = partitionFreelistMask(static_cast<PartitionFreelistEntry*>(ret)->next);
        ASSERT(!page->freelistHead || partitionPointerIsValid(bucket->root, page->freelistHead));
        ASSERT(!page->freelistHead || partitionPointerToPage(page->freelistHead));
        page->numAllocatedSlots++;
    } else {
        ret = partitionAllocSlowPath(bucket);
    }
#ifndef NDEBUG
    // Fill the uninitialized pattern. and write the cookies.
    size_t bucketSize = partitionBucketSize(bucket);
    memset(ret, kUninitializedByte, bucketSize);
    *(static_cast<uintptr_t*>(ret)) = kCookieValue;
    void* retEnd = static_cast<char*>(ret) + bucketSize;
    *(static_cast<uintptr_t*>(retEnd) - 1) = kCookieValue;
    // The value given to the application is actually just after the cookie.
    ret = static_cast<uintptr_t*>(ret) + 1;
#endif
    return ret;
}

ALWAYS_INLINE void* partitionAlloc(PartitionRoot* root, size_t size)
{
#if defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
    void* result = malloc(size);
    RELEASE_ASSERT(result);
    return result;
#else
    size = partitionCookieSizeAdjustAdd(size);
    ASSERT(root->initialized);
    size_t index = size >> kBucketShift;
    ASSERT(index < root->numBuckets);
    ASSERT(size == index << kBucketShift);
    PartitionBucket* bucket = &root->buckets()[index];
    return partitionBucketAlloc(bucket);
#endif // defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
}

ALWAYS_INLINE void partitionFreeWithPage(void* ptr, PartitionPageHeader* page)
{
    // If these asserts fire, you probably corrupted memory.
    partitionValidatePage(page);
#ifndef NDEBUG
    size_t bucketSize = partitionBucketSize(page->bucket);
    void* ptrEnd = static_cast<char*>(ptr) + bucketSize;
    ASSERT(*(static_cast<uintptr_t*>(ptr)) == kCookieValue);
    ASSERT(*(static_cast<uintptr_t*>(ptrEnd) - 1) == kCookieValue);
    memset(ptr, kFreedByte, bucketSize);
#endif
    ASSERT(!page->freelistHead || partitionPointerIsValid(page->bucket->root, page->freelistHead));
    ASSERT(!page->freelistHead || partitionPointerToPage(page->freelistHead));
    RELEASE_ASSERT(ptr != page->freelistHead); // Catches an immediate double free.
    ASSERT(!page->freelistHead || ptr != partitionFreelistMask(page->freelistHead->next)); // Look for double free one level deeper in debug.
    PartitionFreelistEntry* entry = static_cast<PartitionFreelistEntry*>(ptr);
    entry->next = partitionFreelistMask(page->freelistHead);
    page->freelistHead = entry;
    --page->numAllocatedSlots;
    if (UNLIKELY(page->numAllocatedSlots <= 0))
        partitionFreeSlowPath(page);
}

ALWAYS_INLINE void partitionFree(void* ptr)
{
#if defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
    free(ptr);
#else
    ptr = partitionCookieFreePointerAdjust(ptr);
    PartitionPageHeader* page = partitionPointerToPage(ptr);
    ASSERT(partitionPointerIsValid(page->bucket->root, ptr));
    partitionFreeWithPage(ptr, page);
#endif
}

ALWAYS_INLINE void* partitionAllocGeneric(PartitionRoot* root, size_t size)
{
    RELEASE_ASSERT(size <= QuantizedAllocation::kMaxUnquantizedAllocation);
#if defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
    void* result = malloc(size);
    RELEASE_ASSERT(result);
    return result;
#else
    ASSERT(root->initialized);
    size = QuantizedAllocation::quantizedSize(size);
    size_t realSize = partitionCookieSizeAdjustAdd(size);
    if (LIKELY(realSize <= root->maxAllocation)) {
        spinLockLock(&root->lock);
        void* ret = partitionAlloc(root, size);
        spinLockUnlock(&root->lock);
        return ret;
    }
    return WTF::fastMalloc(size);
#endif
}

ALWAYS_INLINE void partitionFreeGeneric(PartitionRoot* root, void* ptr)
{
#if defined(MEMORY_TOOL_REPLACES_ALLOCATOR)
    free(ptr);
#else
    ASSERT(root->initialized);
    if (LIKELY(partitionPointerIsValid(root, ptr))) {
        ptr = partitionCookieFreePointerAdjust(ptr);
        PartitionPageHeader* page = partitionPointerToPage(ptr);
        spinLockLock(&root->lock);
        partitionFreeWithPage(ptr, page);
        spinLockUnlock(&root->lock);
        return;
    }
    return WTF::fastFree(ptr);
#endif
}

// N (or more accurately, N - sizeof(void*)) represents the largest size in
// bytes that will be handled by a PartitionAlloctor.
// Attempts to partitionAlloc() more than this amount will fail. Attempts to
// partitionAllocGeneic() more than this amount will succeed but will be
// transparently serviced by the system allocator.
template <size_t N>
class PartitionAllocator {
public:
    static const size_t kMaxAllocation = N - kAllocationGranularity;
    static const size_t kNumBuckets = N / kAllocationGranularity;
    void init() { partitionAllocInit(&m_partitionRoot, kNumBuckets, kMaxAllocation); }
    bool shutdown() { return partitionAllocShutdown(&m_partitionRoot); }
    ALWAYS_INLINE PartitionRoot* root() { return &m_partitionRoot; }
private:
    PartitionRoot m_partitionRoot;
    PartitionBucket m_actualBuckets[kNumBuckets];
};

} // namespace WTF

using WTF::PartitionAllocator;
using WTF::PartitionRoot;
using WTF::partitionAllocInit;
using WTF::partitionAllocShutdown;
using WTF::partitionAlloc;
using WTF::partitionFree;
using WTF::partitionAllocGeneric;
using WTF::partitionFreeGeneric;
using WTF::partitionReallocGeneric;

#endif // WTF_PartitionAlloc_h
