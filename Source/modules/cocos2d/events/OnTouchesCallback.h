// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnTouchesCallback_h
#define OnTouchesCallback_h

#include "platform/heap/Handle.h"

namespace blink {

class CCTouch;
typedef WillBeHeapVector<RefPtrWillBeMember<CCTouch> > TouchHeapVector;

class OnTouchesCallback : public GarbageCollectedFinalized<OnTouchesCallback> {
public:
    virtual ~OnTouchesCallback() { }
    virtual void trace(Visitor*) { }
    virtual bool handleEvent(const TouchHeapVector&) = 0;
};

} // namespace

#endif // OnTouchesCallback_h
