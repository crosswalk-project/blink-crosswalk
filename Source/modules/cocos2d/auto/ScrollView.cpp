// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ScrollView.h"

namespace blink {

    void ScrollView::addChild(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void ScrollView::addChild(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->addChild( _arg0);
    }

    void ScrollView::addChild(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void ScrollView::scrollToTop(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToTop((float)(arg0), (bool)(arg1));
    }

    void ScrollView::scrollToPercentHorizontal(float arg0, float arg1, bool arg2) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToPercentHorizontal((float)(arg0), (float)(arg1), (bool)(arg2));
    }

    String ScrollView::getDescription() {

        String ret_impl = String(((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void ScrollView::removeAllChildren() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->removeAllChildren();
    }

    void ScrollView::scrollToPercentBothDirection(CCPoint* arg0, float arg1, bool arg2) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToPercentBothDirection( *_arg0, (float)(arg1), (bool)(arg2));
    }

    ScriptValue ScrollView::getChildren(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getChildren();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    int ScrollView::getDirection() {

        int ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getDirection();
        
        
        return ret_impl;
    }

    ScriptValue ScrollView::getChildByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getChildByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void ScrollView::scrollToBottomLeft(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToBottomLeft((float)(arg0), (bool)(arg1));
    }

    ScriptValue ScrollView::getInnerContainer(ScriptState* scriptState) {

        cocos2d::gui::Layout* ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getInnerContainer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Layout)
        
    }

    void ScrollView::jumpToBottom() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToBottom();
    }

    ScriptValue ScrollView::getChildByName(ScriptState* scriptState, String arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getChildByName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    void ScrollView::setDirection(int arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->setDirection((cocos2d::gui::SCROLLVIEW_DIR)(arg0));
    }

    void ScrollView::scrollToTopLeft(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToTopLeft((float)(arg0), (bool)(arg1));
    }

    void ScrollView::jumpToTopRight() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToTopRight();
    }

    void ScrollView::jumpToBottomLeft() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToBottomLeft();
    }

    void ScrollView::setInnerContainerSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->setInnerContainerSize( *_arg0);
    }

    bool ScrollView::isInertiaScrollEnabled() {

        bool ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->isInertiaScrollEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> ScrollView::getInnerContainerSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getInnerContainerSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool ScrollView::isBounceEnabled() {

        bool ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->isBounceEnabled();
        
        
        return ret_impl;
    }

    void ScrollView::jumpToPercentVertical(float arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToPercentVertical((float)(arg0));
    }

    void ScrollView::setInertiaScrollEnabled(bool arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->setInertiaScrollEnabled((bool)(arg0));
    }

    void ScrollView::jumpToTopLeft() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToTopLeft();
    }

    void ScrollView::jumpToPercentHorizontal(float arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToPercentHorizontal((float)(arg0));
    }

    void ScrollView::jumpToBottomRight() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToBottomRight();
    }

    void ScrollView::update(float arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->update((float)(arg0));
    }

    int ScrollView::getLayoutType() {

        int ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getLayoutType();
        
        
        return ret_impl;
    }

    void ScrollView::removeAllChildrenWithCleanup(bool arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void ScrollView::setBounceEnabled(bool arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->setBounceEnabled((bool)(arg0));
    }

    void ScrollView::jumpToTop() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToTop();
    }

    void ScrollView::scrollToLeft(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToLeft((float)(arg0), (bool)(arg1));
    }

    void ScrollView::jumpToPercentBothDirection(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToPercentBothDirection( *_arg0);
    }

    void ScrollView::scrollToPercentVertical(float arg0, float arg1, bool arg2) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToPercentVertical((float)(arg0), (float)(arg1), (bool)(arg2));
    }

    void ScrollView::scrollToBottom(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToBottom((float)(arg0), (bool)(arg1));
    }

    void ScrollView::scrollToBottomRight(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToBottomRight((float)(arg0), (bool)(arg1));
    }

    void ScrollView::jumpToLeft() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToLeft();
    }

    void ScrollView::scrollToRight(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToRight((float)(arg0), (bool)(arg1));
    }

    void ScrollView::removeChild(CCNode* arg0, bool arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    void ScrollView::setLayoutType(int arg0) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->setLayoutType((cocos2d::gui::LayoutType)(arg0));
    }

    void ScrollView::jumpToRight() {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->jumpToRight();
    }

    unsigned int ScrollView::getChildrenCount() {

        unsigned int ret_impl = ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->getChildrenCount();
        
        
        return ret_impl;
    }

    void ScrollView::scrollToTopRight(float arg0, bool arg1) {

        ((cocos2d::gui::ScrollView*)m_cocos2d_impl)->scrollToTopRight((float)(arg0), (bool)(arg1));
    }

    ScriptValue ScrollView::createInternal(ScriptState* scriptState) {

        cocos2d::gui::ScrollView* ret_impl = cocos2d::gui::ScrollView::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ScrollView)
        
    }
    cocos2d::gui::ScrollView* ScrollView::getCocos2dImpl() {
        return (cocos2d::gui::ScrollView*)m_cocos2d_impl;
    }


    ScrollView::ScrollView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ScrollView> ScrollView::create()
    {
        RefPtrWillBeRawPtr<ScrollView> ret = adoptRefWillBeNoop(new ScrollView());
        cocos2d::gui::ScrollView* impl = new cocos2d::gui::ScrollView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    ScrollView::~ScrollView() {
    }
} // namespace blink
