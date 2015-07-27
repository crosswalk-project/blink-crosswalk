// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnScheduleUnscheduleCallback_h
#define OnScheduleUnscheduleCallback_h

namespace blink {

class CCNode;

class OnScheduleUnscheduleCallback : public GarbageCollectedFinalized<OnScheduleUnscheduleCallback> {
public:
    virtual ~OnScheduleUnscheduleCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent(CCNode*) = 0;

};

}

#endif // OnScheduleUnscheduleCallback_h

