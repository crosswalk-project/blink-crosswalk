// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnTouchCallback_h
#define OnTouchCallback_h

#include "platform/heap/Handle.h"

namespace blink {

class CCTouch;

class OnTouchCallback : public GarbageCollectedFinalized<OnTouchCallback> {
public:
    virtual ~OnTouchCallback() { }
    virtual void trace(Visitor*) { }
    virtual bool handleEvent(CCTouch*) = 0;
};

} // namespace

#endif // OnTouchCallback_h
