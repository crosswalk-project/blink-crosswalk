// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef TableNumberOfCellsCallback_h
#define TableNumberOfCellsCallback_h

namespace blink {

class TableNumberOfCellsCallback : public GarbageCollectedFinalized<TableNumberOfCellsCallback> {
public:
    virtual ~TableNumberOfCellsCallback() { }
    virtual void trace(Visitor*) { }
    virtual bool handleEvent() = 0;
};

} // namespace

#endif // TableCellAtIndexCallback_h
