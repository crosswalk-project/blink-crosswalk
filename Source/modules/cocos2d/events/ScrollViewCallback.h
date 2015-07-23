// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ScrollViewCallback_h
#define ScrollViewCallback_h

namespace blink {
class CCScrollView;

class ScrollViewCallback : public GarbageCollectedFinalized<ScrollViewCallback> {
public:
    virtual ~ScrollViewCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent() = 0;
};

} // namespace

#endif // ScrollViewCallback_h
