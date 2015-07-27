// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CallFuncCallback_h
#define CallFuncCallback_h

namespace blink {
class CCNode;

class CallFuncCallback : public GarbageCollectedFinalized<CallFuncCallback> {
public:
    virtual ~CallFuncCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent(CCNode*) = 0;
};

} // namespace

#endif // CallFuncCallback_h
