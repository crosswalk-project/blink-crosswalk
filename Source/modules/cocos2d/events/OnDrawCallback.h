// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OnDrawCallback_h
#define OnDrawCallback_h

#include "platform/heap/Handle.h"

namespace blink {


class OnDrawCallback : public GarbageCollectedFinalized<OnDrawCallback> {
public:
    virtual ~OnDrawCallback() { }
    virtual void trace(Visitor*) { }
    virtual bool handleEvent() = 0;
};

} // namespace

#endif // OnDrawCallback_h
