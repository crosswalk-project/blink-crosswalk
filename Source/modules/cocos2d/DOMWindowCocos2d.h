// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DOMWindowCocos2d_h
#define DOMWindowCocos2d_h

#include "core/frame/DOMWindowProperty.h"
#include "platform/Supplementable.h"
#include "platform/heap/Handle.h"

namespace blink {

class Cocos2d;
class LocalDOMWindow;

class DOMWindowCocos2d FINAL : public NoBaseWillBeGarbageCollectedFinalized<DOMWindowCocos2d>, public WillBeHeapSupplement<LocalDOMWindow>, public DOMWindowProperty {
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(DOMWindowCocos2d);
public:
    virtual ~DOMWindowCocos2d();
    static DOMWindowCocos2d& from(LocalDOMWindow&);
    static Cocos2d* crosswalk(LocalDOMWindow&);
    Cocos2d* crosswalk() const;

private:
    explicit DOMWindowCocos2d(LocalDOMWindow&);
    static const char* supplementName();

    mutable PersistentWillBeMember<Cocos2d> m_cocos2d;
};

} // namespace blink

#endif // DOMWindowCocos2d_h
