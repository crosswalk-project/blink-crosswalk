// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/PageView.h"

namespace blink {

    int PageView::getLayoutType() {

        int ret_impl = ((cocos2d::gui::PageView*)m_cocos2d_impl)->getLayoutType();
        
        
        return ret_impl;
    }

    int PageView::getCurPageIndex() {

        int ret_impl = ((cocos2d::gui::PageView*)m_cocos2d_impl)->getCurPageIndex();
        
        
        return ret_impl;
    }

    void PageView::addWidgetToPage(Widget* arg0, int arg1, bool arg2) {
        cocos2d::gui::Widget* _arg0 = (cocos2d::gui::Widget*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->addWidgetToPage( _arg0, (int)(arg1), (bool)(arg2));
    }

    ScriptValue PageView::getPage(ScriptState* scriptState, int arg0) {

        cocos2d::gui::Layout* ret_impl = ((cocos2d::gui::PageView*)m_cocos2d_impl)->getPage((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Layout)
        
    }

    void PageView::removePage(Layout* arg0) {
        cocos2d::gui::Layout* _arg0 = (cocos2d::gui::Layout*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->removePage( _arg0);
    }

    String PageView::getDescription() {

        String ret_impl = String(((cocos2d::gui::PageView*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void PageView::insertPage(Layout* arg0, int arg1) {
        cocos2d::gui::Layout* _arg0 = (cocos2d::gui::Layout*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->insertPage( _arg0, (int)(arg1));
    }

    void PageView::setLayoutType(int arg0) {

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->setLayoutType((cocos2d::gui::LayoutType)(arg0));
    }

    void PageView::scrollToPage(int arg0) {

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->scrollToPage((int)(arg0));
    }

    void PageView::update(float arg0) {

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->update((float)(arg0));
    }

    void PageView::removePageAtIndex(int arg0) {

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->removePageAtIndex((int)(arg0));
    }

    ScriptValue PageView::getPages(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::gui::PageView*)m_cocos2d_impl)->getPages();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void PageView::removeAllPages() {

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->removeAllPages();
    }

    void PageView::addPage(Layout* arg0) {
        cocos2d::gui::Layout* _arg0 = (cocos2d::gui::Layout*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::PageView*)m_cocos2d_impl)->addPage( _arg0);
    }

    ScriptValue PageView::createInternal(ScriptState* scriptState) {

        cocos2d::gui::PageView* ret_impl = cocos2d::gui::PageView::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, PageView)
        
    }
    cocos2d::gui::PageView* PageView::getCocos2dImpl() {
        return (cocos2d::gui::PageView*)m_cocos2d_impl;
    }


    PageView::PageView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<PageView> PageView::create()
    {
        RefPtrWillBeRawPtr<PageView> ret = adoptRefWillBeNoop(new PageView());
        cocos2d::gui::PageView* impl = new cocos2d::gui::PageView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    PageView::~PageView() {
    }
} // namespace blink
