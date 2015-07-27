// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MenuItemCallback_h
#define MenuItemCallback_h

namespace blink {
class CCNode;

class MenuItemCallback : public GarbageCollectedFinalized<MenuItemCallback> {
public:
    virtual ~MenuItemCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent() = 0;
};

} // namespace

#endif // MenuItemCallback_h
