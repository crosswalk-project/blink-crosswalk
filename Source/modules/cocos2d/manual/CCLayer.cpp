// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCLayer.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCLayer.h"

namespace blink {

    void CCLayer::unregisterScriptTouchHandler() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->unregisterScriptTouchHandler();
    }

    void CCLayer::keyBackClicked() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->keyBackClicked();
    }

    bool CCLayer::ccTouchBegan(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchBegan( _arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCLayer::setAccelerometerInterval(double arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->setAccelerometerInterval((double)(arg0));
    }

    void CCLayer::ccTouchesCancelled(CCSet* arg0, CCEvent* arg1) {
        cocos2d::CCSet* _arg0 = (cocos2d::CCSet*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchesCancelled( _arg0,  _arg1);
    }

    void CCLayer::unregisterScriptAccelerateHandler() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->unregisterScriptAccelerateHandler();
    }

    void CCLayer::ccTouchesMoved(CCSet* arg0, CCEvent* arg1) {
        cocos2d::CCSet* _arg0 = (cocos2d::CCSet*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchesMoved( _arg0,  _arg1);
    }

    void CCLayer::registerScriptAccelerateHandler(int arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->registerScriptAccelerateHandler((int)(arg0));
    }

    int CCLayer::getTouchMode() {

        int ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->getTouchMode();
        
        
        return ret_impl;
    }

    void CCLayer::setAccelerometerEnabled(bool arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->setAccelerometerEnabled((bool)(arg0));
    }

    bool CCLayer::init() {

        bool ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCLayer::isTouchEnabled() {

        bool ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->isTouchEnabled();
        
        
        return ret_impl;
    }

    void CCLayer::ccTouchMoved(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchMoved( _arg0,  _arg1);
    }

    void CCLayer::setTouchEnabled(bool arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->setTouchEnabled((bool)(arg0));
    }

    void CCLayer::unregisterScriptKeypadHandler() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->unregisterScriptKeypadHandler();
    }

    bool CCLayer::isKeypadEnabled() {

        bool ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->isKeypadEnabled();
        
        
        return ret_impl;
    }

    void CCLayer::ccTouchesEnded(CCSet* arg0, CCEvent* arg1) {
        cocos2d::CCSet* _arg0 = (cocos2d::CCSet*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchesEnded( _arg0,  _arg1);
    }

    bool CCLayer::isAccelerometerEnabled() {

        bool ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->isAccelerometerEnabled();
        
        
        return ret_impl;
    }

    void CCLayer::ccTouchEnded(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchEnded( _arg0,  _arg1);
    }

    void CCLayer::registerScriptTouchHandler(int arg0, bool arg1, int arg2, bool arg3) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->registerScriptTouchHandler((int)(arg0), (bool)(arg1), (int)(arg2), (bool)(arg3));
    }

    void CCLayer::ccTouchCancelled(CCTouch* arg0, CCEvent* arg1) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchCancelled( _arg0,  _arg1);
    }

    void CCLayer::ccTouchesBegan(CCSet* arg0, CCEvent* arg1) {
        cocos2d::CCSet* _arg0 = (cocos2d::CCSet*)(arg0->getCocos2dImpl());
        cocos2d::CCEvent* _arg1 = (cocos2d::CCEvent*)(arg1->getCocos2dImpl());

        ((cocos2d::CCLayer*)m_cocos2d_impl)->ccTouchesBegan( _arg0,  _arg1);
    }

    void CCLayer::setTouchPriority(int arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->setTouchPriority((int)(arg0));
    }

    int CCLayer::getTouchPriority() {

        int ret_impl = ((cocos2d::CCLayer*)m_cocos2d_impl)->getTouchPriority();
        
        
        return ret_impl;
    }

    void CCLayer::setKeypadEnabled(bool arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->setKeypadEnabled((bool)(arg0));
    }

    void CCLayer::registerWithTouchDispatcher() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->registerWithTouchDispatcher();
    }

    void CCLayer::registerTargetedWithTouchDispatcher(int priority, bool swallowsTouches) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->registerWithTargetedTouchDispatcher(priority, swallowsTouches);
    }

    void CCLayer::keyMenuClicked() {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->keyMenuClicked();
    }

    void CCLayer::registerScriptKeypadHandler(int arg0) {

        ((cocos2d::CCLayer*)m_cocos2d_impl)->registerScriptKeypadHandler((int)(arg0));
    }

    ScriptValue CCLayer::createInternal(ScriptState* scriptState) {

        cocos2d::CCLayer* ret_impl = cocos2d::CCLayer::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayer)
        
    }
    cocos2d::CCLayer* CCLayer::getCocos2dImpl() {
        return (cocos2d::CCLayer*)m_cocos2d_impl;
    }


    CCLayer::CCLayer() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLayer> CCLayer::create()
    {
        RefPtrWillBeRawPtr<CCLayer> ret = adoptRefWillBeNoop(new CCLayer());
        cocos2d::CCLayer* impl = new cocos2d::CCLayer();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLayer::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLayer::~CCLayer() {
    }

    void CCLayer::setTouchMode(int mode) {
        ((cocos2d::CCLayer*)m_cocos2d_impl)->setTouchMode(cocos2d::ccTouchesMode(mode));
    }
} // namespace blink
