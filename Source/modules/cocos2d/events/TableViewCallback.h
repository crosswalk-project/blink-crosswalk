// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef TableViewCallback_h
#define TableViewCallback_h

namespace blink {
class CCTableViewCell;

class TableViewCallback : public GarbageCollectedFinalized<TableViewCallback> {
public:
    virtual ~TableViewCallback() { }
    virtual void trace(Visitor*) { }
    virtual void handleEvent(CCTableViewCell* cell) = 0;
};

} // namespace

#endif // TableViewCallback_h
