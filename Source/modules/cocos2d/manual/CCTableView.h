// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTableView_h__
#define __CCTableView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCTableView;
    }
}

namespace blink {
class TableViewCallback;
class ScrollViewCallback;
class TableCellSizeForIndexCallback;
class TableNumberOfCellsCallback;
class TableCellAtIndexCallback;

class CCTableView 
		:public CCScrollView
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*);
    static PassRefPtrWillBeRawPtr<CCTableView> create();
    
    void setVerticalFillOrder(int arg0);
    
    void scrollViewDidScroll(CCScrollView* arg0);
    
    void updateCellAtIndex(unsigned int arg0);
    
    bool initWithViewSize(CCSize* arg0, ScriptValue& arg0_wrapper);
    
    void removeCellAtIndex(unsigned int arg0);
    
    void reloadData();
    
    PassRefPtrWillBeRawPtr<CCTableViewCell> dequeueCell();
    
    int getVerticalFillOrder();
    
    void scrollViewDidZoom(CCScrollView* arg0);
    
    void insertCellAtIndex(unsigned int arg0);
    
    PassRefPtrWillBeRawPtr<CCTableViewCell> cellAtIndex(unsigned int arg0);
    
    void updateContentSize();
    cocos2d::extension::CCTableView* getCocos2dImpl();
    ~CCTableView();
public:
    CCTableView ();

public:
    void setDelegateInternal(ScrollViewCallback* didScrollCallback,
        ScrollViewCallback* didZoomCallback,
        TableViewCallback* touchedCallback,
        TableViewCallback* highlightCallback,
        TableViewCallback* unhighlightCallback,
        TableViewCallback* willrecycleCallback
        );
    void executeTableCellTouched(CCTableViewCell* cell);
    void executeTableCellHighlight(CCTableViewCell* cell);
    void executeTableCellUnhighlight(CCTableViewCell* cell);
    void executeTableCellWillRecycle(CCTableViewCell* cell);

    void setDataSourceInternal(TableCellSizeForIndexCallback* sizeForIndex,
        TableNumberOfCellsCallback* numberOfCells,
        TableCellAtIndexCallback* cellAtIndex);
    cocos2d::CCSize executeTableCellSizeForIndex(unsigned int idx);
    cocos2d::extension::CCTableViewCell* executeTableCellAtIndex(unsigned int idx);
    unsigned int executeNumberOfCellsInTableView();

    void setCellSizeInternal(CCSize* size);
    void setNumberOfCellsInternal(long size);
    void setCurrentCellInternal(ScriptValue& arg0);

private:
    Persistent<TableViewCallback> m_table_cell_touched_callback;
    Persistent<TableViewCallback> m_table_cell_highlight_callback;
    Persistent<TableViewCallback> m_table_cell_unhighlight_callback;
    Persistent<TableViewCallback> m_table_cell_willrecycle_callback;

    Persistent<TableCellSizeForIndexCallback> m_table_cell_size_for_index_callback;
    Persistent<TableNumberOfCellsCallback> m_table_number_of_cells_callback;
    Persistent<TableCellAtIndexCallback> m_table_cell_at_index_callback;

    cocos2d::CCSize* m_cellSize;
    int m_numberOfCells;
    cocos2d::extension::CCTableViewCell* m_tableViewCell;
};

DEFINE_TYPE_CASTS(CCTableView, CCScrollView, pCCTableView, true, true);

} // namespace blink

#endif
