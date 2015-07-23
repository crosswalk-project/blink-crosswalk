// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef TableCellAtIndexCallback_h
#define TableCellAtIndexCallback_h

namespace blink {
class CCTableViewCell;

class TableCellAtIndexCallback : public GarbageCollectedFinalized<TableCellAtIndexCallback> {
public:
    virtual ~TableCellAtIndexCallback() { }
    virtual void trace(Visitor*) { }
    virtual bool handleEvent(int index) = 0;
};

} // namespace

#endif // TableCellAtIndexCallback_h
