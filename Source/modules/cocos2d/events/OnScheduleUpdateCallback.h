// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnScheduleUpdateCallback_h
#define OnScheduleUpdateCallback_h

namespace blink {

class OnScheduleUpdateCallback : public GarbageCollectedFinalized<OnScheduleUpdateCallback> {
public:
    virtual ~OnScheduleUpdateCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent(double dt) = 0;

};

}

#endif // OnScheduleUpdateCallback_h

