// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ArrayForEachCallback_h
#define ArrayForEachCallback_h

namespace blink {
class ScriptValue;

class ArrayForEachCallback : public GarbageCollectedFinalized<ArrayForEachCallback> {
public:
    virtual ~ArrayForEachCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent(ScriptValue value) = 0;

};

}

#endif // OnEnterEventCallback_h

