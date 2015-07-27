// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnEnterEventCallback_h
#define OnEnterEventCallback_h

namespace blink {

class OnEnterEventCallback : public GarbageCollectedFinalized<OnEnterEventCallback> {
public:
    virtual ~OnEnterEventCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent() = 0;

};

}

#endif // OnEnterEventCallback_h

