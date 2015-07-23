// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCScrollView.h"
#include "modules/cocos2d/events/ScrollViewCallback.h"
#include "core/cocos2d/extensions/GUI/CCScrollView/JSScrollViewDelegate.h"

namespace blink {

    bool CCScrollView::isClippingToBounds() {

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->isClippingToBounds();
        
        
        return ret_impl;
    }

    void CCScrollView::setContainer(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setContainer( _arg0);
    }

    void CCScrollView::setContentOffsetInDuration(CCPoint* arg0, float arg1) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setContentOffsetInDuration( *_arg0, (float)(arg1));
    }

    void CCScrollView::setZoomScaleInDuration(float arg0, float arg1) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setZoomScaleInDuration((float)(arg0), (float)(arg1));
    }

    void CCScrollView::addChild(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCScrollView::addChild(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void CCScrollView::addChild(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->addChild( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCNode> CCScrollView::getContainer() {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getContainer();
        if (ret_impl == NULL) { return nullptr; }
        RefPtr<CCNode> ret = adoptRefWillBeNoop(new CCNode());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCScrollView::getDirection() {

        int ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getDirection();
        
        
        return ret_impl;
    }

    float CCScrollView::getZoomScale() {

        float ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getZoomScale();
        
        
        return ret_impl;
    }

    void CCScrollView::updateInset() {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->updateInset();
    }

    bool CCScrollView::initWithViewSize(CCSize* arg0, CCNode* arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCNode* _arg1 = (cocos2d::CCNode*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->initWithViewSize( *_arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCScrollView::pause(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->pause( _arg0);
    }

    void CCScrollView::setDirection(int arg0) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setDirection((cocos2d::extension::CCScrollViewDirection)(arg0));
    }

    void CCScrollView::setBounceable(bool arg0) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setBounceable((bool)(arg0));
    }

    void CCScrollView::setContentOffset(CCPoint* arg0, bool arg1) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setContentOffset( *_arg0, (bool)(arg1));
    }

    bool CCScrollView::isDragging() {

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->isDragging();
        
        
        return ret_impl;
    }

    bool CCScrollView::init() {

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCScrollView::isBounceable() {

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->isBounceable();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCScrollView::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCScrollView::setTouchEnabled(bool arg0) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setTouchEnabled((bool)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCScrollView::getContentOffset() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getContentOffset();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCScrollView::resume(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->resume( _arg0);
    }

    void CCScrollView::setClippingToBounds(bool arg0) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setClippingToBounds((bool)(arg0));
    }

    void CCScrollView::setViewSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setViewSize( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> CCScrollView::getViewSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->getViewSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCScrollView::maxContainerOffset() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->maxContainerOffset();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCScrollView::isTouchMoved() {

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->isTouchMoved();
        
        
        return ret_impl;
    }

    bool CCScrollView::isNodeVisible(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->isNodeVisible( _arg0);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCScrollView::minContainerOffset() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->minContainerOffset();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCScrollView::registerWithTouchDispatcher() {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->registerWithTouchDispatcher();
    }

    void CCScrollView::setZoomScale(float arg0, bool arg1) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setZoomScale((float)(arg0), (bool)(arg1));
    }

    void CCScrollView::setZoomScale(float arg0) {

        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setZoomScale((float)(arg0));
    }
    PassRefPtrWillBeRawPtr<CCScrollView> CCScrollView::createInternal() {

        cocos2d::extension::CCScrollView* ret_impl = cocos2d::extension::CCScrollView::create();
        if (ret_impl == nullptr) { return nullptr; }
        RefPtr<CCScrollView> ret = adoptRefWillBeNoop(new CCScrollView());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    PassRefPtrWillBeRawPtr<CCScrollView> CCScrollView::createInternal(CCSize* arg0, CCNode* arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCNode* _arg1 = (cocos2d::CCNode*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCScrollView* ret_impl = cocos2d::extension::CCScrollView::create( *_arg0,  _arg1);
        if (ret_impl == nullptr) { return nullptr; }
        RefPtr<CCScrollView> ret = adoptRefWillBeNoop(new CCScrollView());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    cocos2d::extension::CCScrollView* CCScrollView::getCocos2dImpl() {
        return (cocos2d::extension::CCScrollView*)m_cocos2d_impl;
    }

    CCScrollView::CCScrollView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCScrollView> CCScrollView::create()
    {
        RefPtrWillBeRawPtr<CCScrollView> ret = adoptRefWillBeNoop(new CCScrollView());
        cocos2d::extension::CCScrollView* impl = new cocos2d::extension::CCScrollView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCScrollView::~CCScrollView() {
        m_scrollview_did_scroll_callback = nullptr;
        m_scrollview_did_zoom_callback = nullptr;
    }

    void CCScrollView::trace(Visitor* visitor) {
        visitor->trace(m_scrollview_did_scroll_callback);
        visitor->trace(m_scrollview_did_zoom_callback);
    }

    void CCScrollView::executeDidScrollEvent() {
        if (m_scrollview_did_scroll_callback)
            m_scrollview_did_scroll_callback->handleEvent();
    }

    void CCScrollView::executeDidZoomEvent() {
        if (m_scrollview_did_zoom_callback)
            m_scrollview_did_zoom_callback->handleEvent();
    }

    void CCScrollView::setDelegateInternal(ScrollViewCallback* didScrollCallback, ScrollViewCallback* didZoomCallback) {
        m_scrollview_did_scroll_callback = didScrollCallback;
        m_scrollview_did_zoom_callback = didZoomCallback;
        cocos2d::extension::JSScrollViewDelegate* nativeDelegate = new cocos2d::extension::JSScrollViewDelegate();
        nativeDelegate->setJSDelegate(m_cocos2d_impl);
        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setUserObject(nativeDelegate);
        ((cocos2d::extension::CCScrollView*)m_cocos2d_impl)->setDelegate(nativeDelegate);
        nativeDelegate->release();
    }

} // namespace blink
