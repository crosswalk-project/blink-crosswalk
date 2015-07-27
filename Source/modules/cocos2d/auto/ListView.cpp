// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ListView.h"

namespace blink {

    unsigned int ListView::getIndex(Widget* arg0) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        unsigned int ret_impl = ((cocos2d::gui::ListView*)m_cocos2d_impl)->getIndex( _arg0);
        
        
        return ret_impl;
    }

    void ListView::removeAllItems() {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->removeAllItems();
    }

    void ListView::setGravity(int arg0) {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->setGravity((cocos2d::gui::ListViewGravity)(arg0));
    }

    void ListView::pushBackCustomItem(Widget* arg0) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->pushBackCustomItem( _arg0);
    }

    void ListView::setDirection(int arg0) {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->setDirection((cocos2d::gui::SCROLLVIEW_DIR)(arg0));
    }

    ScriptValue ListView::getItems(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::gui::ListView*)m_cocos2d_impl)->getItems();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    String ListView::getDescription() {

        String ret_impl = String(((cocos2d::gui::ListView*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void ListView::removeItem(int arg0) {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->removeItem((int)(arg0));
    }

    int ListView::getCurSelectedIndex() {

        int ret_impl = ((cocos2d::gui::ListView*)m_cocos2d_impl)->getCurSelectedIndex();
        
        
        return ret_impl;
    }

    void ListView::insertDefaultItem(int arg0) {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->insertDefaultItem((int)(arg0));
    }

    void ListView::sortAllChildren() {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->sortAllChildren();
    }

    void ListView::setItemsMargin(float arg0) {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->setItemsMargin((float)(arg0));
    }

    void ListView::removeLastItem() {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->removeLastItem();
    }

    ScriptValue ListView::getItem(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::ListView*)m_cocos2d_impl)->getItem((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    void ListView::setItemModel(Widget* arg0) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->setItemModel( _arg0);
    }

    void ListView::requestRefreshView() {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->requestRefreshView();
    }

    void ListView::pushBackDefaultItem() {

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->pushBackDefaultItem();
    }

    void ListView::insertCustomItem(Widget* arg0, int arg1) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ListView*)m_cocos2d_impl)->insertCustomItem( _arg0, (int)(arg1));
    }

    ScriptValue ListView::createInternal(ScriptState* scriptState) {

        cocos2d::gui::ListView* ret_impl = cocos2d::gui::ListView::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ListView)
        
    }
    cocos2d::gui::ListView* ListView::getCocos2dImpl() {
        return (cocos2d::gui::ListView*)m_cocos2d_impl;
    }


    ListView::ListView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ListView> ListView::create()
    {
        RefPtrWillBeRawPtr<ListView> ret = adoptRefWillBeNoop(new ListView());
        cocos2d::gui::ListView* impl = new cocos2d::gui::ListView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    ListView::~ListView() {
    }
} // namespace blink
