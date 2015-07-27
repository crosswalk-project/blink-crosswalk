// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCTableView.h"
#include "modules/cocos2d/events/TableViewCallback.h"
#include "modules/cocos2d/events/ScrollViewCallback.h"
#include "modules/cocos2d/events/TableCellSizeForIndexCallback.h"
#include "modules/cocos2d/events/TableNumberOfCellsCallback.h"
#include "modules/cocos2d/events/TableCellAtIndexCallback.h"
#include "core/cocos2d/extensions/GUI/CCScrollView/JSTableViewDelegate.h"
#include "core/cocos2d/extensions/GUI/CCScrollView/JSTableViewDataSource.h"

#define KEY_TABLEVIEW_DATA_SOURCE  "TableViewDataSource"
#define KEY_TABLEVIEW_DELEGATE     "TableViewDelegate"

namespace blink {

    void CCTableView::setVerticalFillOrder(int arg0) {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->setVerticalFillOrder((cocos2d::extension::CCTableViewVerticalFillOrder)(arg0));
    }

    void CCTableView::scrollViewDidScroll(CCScrollView* arg0) {
        cocos2d::extension::CCScrollView* _arg0 = (cocos2d::extension::CCScrollView*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->scrollViewDidScroll( _arg0);
    }

    void CCTableView::updateCellAtIndex(unsigned int arg0) {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->updateCellAtIndex((unsigned int)(arg0));
    }

    bool CCTableView::initWithViewSize(CCSize* arg0, ScriptValue& arg1_wrapper) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        SCRIPT_VALUE_WRAPPER(CCNode, arg1_wrapper, arg1);
        if (arg1 == NULL) {
            bool ret_impl = ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->initWithViewSize( *_arg0);
            return ret_impl;
        }

        bool ret_impl = ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->initWithViewSize( *_arg0,  arg1->getCocos2dImpl());
        
        
        return ret_impl;
    }

    void CCTableView::removeCellAtIndex(unsigned int arg0) {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->removeCellAtIndex((unsigned int)(arg0));
    }

    void CCTableView::reloadData() {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->reloadData();
    }

    PassRefPtrWillBeRawPtr<CCTableViewCell> CCTableView::dequeueCell() {

        cocos2d::extension::CCTableViewCell* ret_impl = ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->dequeueCell();
        if (ret_impl == NULL) { return nullptr; }
        RefPtr<CCTableViewCell> ret = adoptRefWillBeNoop(new CCTableViewCell());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCTableView::getVerticalFillOrder() {

        int ret_impl = ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->getVerticalFillOrder();
        
        
        return ret_impl;
    }

    void CCTableView::scrollViewDidZoom(CCScrollView* arg0) {
        cocos2d::extension::CCScrollView* _arg0 = (cocos2d::extension::CCScrollView*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->scrollViewDidZoom( _arg0);
    }

    void CCTableView::insertCellAtIndex(unsigned int arg0) {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->insertCellAtIndex((unsigned int)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCTableViewCell> CCTableView::cellAtIndex(unsigned int arg0) {

        cocos2d::extension::CCTableViewCell* ret_impl = ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->cellAtIndex((unsigned int)(arg0));
        if (ret_impl == NULL) { return nullptr; }
        RefPtr<CCTableViewCell> ret = adoptRefWillBeNoop(new CCTableViewCell());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCTableView::updateContentSize() {

        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->_updateContentSize();
    }
    cocos2d::extension::CCTableView* CCTableView::getCocos2dImpl() {
        return (cocos2d::extension::CCTableView*)m_cocos2d_impl;
    }

    CCTableView::CCTableView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTableView> CCTableView::create()
    {
        RefPtrWillBeRawPtr<CCTableView> ret = adoptRefWillBeNoop(new CCTableView());
        cocos2d::extension::CCTableView* impl = new cocos2d::extension::CCTableView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTableView::~CCTableView() {
        m_table_cell_touched_callback = nullptr;
        m_table_cell_highlight_callback = nullptr;
        m_table_cell_unhighlight_callback = nullptr;
        m_table_cell_willrecycle_callback = nullptr;
        m_table_cell_size_for_index_callback = nullptr;
        m_table_number_of_cells_callback = nullptr;
        m_table_cell_at_index_callback = nullptr;
    }

    void CCTableView::trace(Visitor* visitor) {
        visitor->trace(m_scrollview_did_scroll_callback);
        visitor->trace(m_scrollview_did_zoom_callback);
        visitor->trace(m_table_cell_touched_callback);
        visitor->trace(m_table_cell_highlight_callback);
        visitor->trace(m_table_cell_unhighlight_callback);
        visitor->trace(m_table_cell_willrecycle_callback);
        visitor->trace(m_table_cell_highlight_callback);
        visitor->trace(m_table_cell_unhighlight_callback);
        visitor->trace(m_table_cell_willrecycle_callback);
    }

    void CCTableView::setDelegateInternal(ScrollViewCallback* didScrollCallback,
        ScrollViewCallback* didZoomCallback,
        TableViewCallback* touchedCallback,
        TableViewCallback* highlightCallback,
        TableViewCallback* unhighlightCallback,
        TableViewCallback* willrecycleCallback
        ) {
        m_scrollview_did_scroll_callback = didScrollCallback;
        m_scrollview_did_zoom_callback = didZoomCallback;
        m_table_cell_touched_callback = touchedCallback;
        m_table_cell_highlight_callback = highlightCallback;
        m_table_cell_unhighlight_callback = unhighlightCallback;
        m_table_cell_willrecycle_callback = willrecycleCallback;

        cocos2d::extension::JSTableViewDelegate* nativeDelegate = new cocos2d::extension::JSTableViewDelegate();
        nativeDelegate->setJSDelegate(m_cocos2d_impl);
        cocos2d::CCDictionary* userDict = static_cast<cocos2d::CCDictionary*>(((cocos2d::extension::CCTableView*)m_cocos2d_impl)->getUserObject());
        if (NULL == userDict)
        {
            userDict = new cocos2d::CCDictionary();
            ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->setUserObject(userDict);
            userDict->release();
        }
        userDict->setObject(nativeDelegate, KEY_TABLEVIEW_DELEGATE);
        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->setDelegate(nativeDelegate);
        nativeDelegate->release();
    }

    void CCTableView::executeTableCellTouched(CCTableViewCell* cell) {
        if (m_table_cell_touched_callback) {
            m_table_cell_touched_callback->handleEvent(cell);
        }
    }

    void CCTableView::executeTableCellHighlight(CCTableViewCell* cell) {
        if (m_table_cell_highlight_callback) {
            m_table_cell_highlight_callback->handleEvent(cell);
        }
    }

    void CCTableView::executeTableCellUnhighlight(CCTableViewCell* cell) {
        if (m_table_cell_unhighlight_callback) {
            m_table_cell_unhighlight_callback->handleEvent(cell);
        }
    }

    void CCTableView::executeTableCellWillRecycle(CCTableViewCell* cell) {
        if (m_table_cell_willrecycle_callback) {
            m_table_cell_willrecycle_callback->handleEvent(cell);
        }
    }

    cocos2d::CCSize CCTableView::executeTableCellSizeForIndex(unsigned int idx) {
        m_cellSize = NULL;
        if (m_table_cell_size_for_index_callback) {
            m_table_cell_size_for_index_callback->handleEvent(idx);
        }
        return *m_cellSize;
    }

    cocos2d::extension::CCTableViewCell* CCTableView::executeTableCellAtIndex(unsigned int idx) {
        m_tableViewCell = NULL;
        if (m_table_cell_at_index_callback) {
            m_table_cell_at_index_callback->handleEvent(idx);
        }
        return m_tableViewCell;
    }

    unsigned int CCTableView::executeNumberOfCellsInTableView() {
        m_numberOfCells = 0;
        if (m_table_number_of_cells_callback) {
            m_table_number_of_cells_callback->handleEvent();
        }
        return m_numberOfCells;
    }

    void CCTableView::setDataSourceInternal(TableCellSizeForIndexCallback* sizeForIndex,
        TableNumberOfCellsCallback* numberOfCells,
        TableCellAtIndexCallback* cellAtIndex) {
        m_table_cell_size_for_index_callback = sizeForIndex;
        m_table_number_of_cells_callback = numberOfCells;
        m_table_cell_at_index_callback = cellAtIndex;

        cocos2d::extension::JSTableViewDataSource* nativeDataSource = new cocos2d::extension::JSTableViewDataSource();
        nativeDataSource->setTableViewDataSource(m_cocos2d_impl);
        cocos2d::CCDictionary* userDict = static_cast<cocos2d::CCDictionary*>(((cocos2d::extension::CCTableView*)m_cocos2d_impl)->getUserObject());
        if (NULL == userDict)
        {
            userDict = new cocos2d::CCDictionary();
            ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->setUserObject(userDict);
            userDict->release();
        }
        userDict->setObject(nativeDataSource, KEY_TABLEVIEW_DATA_SOURCE);
        ((cocos2d::extension::CCTableView*)m_cocos2d_impl)->setDataSource(nativeDataSource);
        nativeDataSource->release();
    }

    void CCTableView::setCellSizeInternal(CCSize* size) {
        if (size == NULL) {
            m_cellSize = NULL;
            return;
        }
        m_cellSize = size->getCocos2dImpl();
    }

    void CCTableView::setNumberOfCellsInternal(long size) {
        m_numberOfCells = size;
    }

    void CCTableView::setCurrentCellInternal(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCTableViewCell, arg0_wrapper, arg0);
        if (arg0 == NULL) {
            m_tableViewCell = NULL;
            return;
        }
        m_tableViewCell = arg0->getCocos2dImpl();
    }
} // namespace blink
