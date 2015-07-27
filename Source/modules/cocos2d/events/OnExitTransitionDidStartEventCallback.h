// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnExitTransitionDidStartEventCallback_h
#define OnExitTransitionDidStartEventCallback_h

namespace blink {

class OnExitTransitionDidStartEventCallback : public GarbageCollectedFinalized<OnExitTransitionDidStartEventCallback> {
public:
    virtual ~OnExitTransitionDidStartEventCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent() = 0;

};

}

#endif // OnExitTransitionDidStartEventCallback_h

