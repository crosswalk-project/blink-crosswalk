// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCProgressTimer.h"

namespace blink {

    void CCProgressTimer::setReverseProgress(bool arg0) {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setReverseProgress((bool)(arg0));
    }

    void CCProgressTimer::draw() {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->draw();
    }

    bool CCProgressTimer::isReverseDirection() {

        bool ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->isReverseDirection();
        
        
        return ret_impl;
    }

    void CCProgressTimer::setBarChangeRate(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setBarChangeRate( *_arg0);
    }

    void CCProgressTimer::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setColor( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCProgressTimer::getBarChangeRate() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getBarChangeRate();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCProgressTimer::getPercentage() {

        float ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getPercentage();
        
        
        return ret_impl;
    }

    void CCProgressTimer::setSprite(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setSprite( _arg0);
    }

    int CCProgressTimer::getType() {

        int ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getType();
        
        
        return ret_impl;
    }

    void CCProgressTimer::setOpacity(unsigned char arg0) {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    ScriptValue CCProgressTimer::getSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCProgressTimer::setMidpoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setMidpoint( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCProgressTimer::getMidpoint() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getMidpoint();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCProgressTimer::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned char CCProgressTimer::getOpacity() {

        unsigned char ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    void CCProgressTimer::setReverseDirection(bool arg0) {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setReverseDirection((bool)(arg0));
    }

    bool CCProgressTimer::initWithSprite(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->initWithSprite( _arg0);
        
        
        return ret_impl;
    }

    void CCProgressTimer::setPercentage(float arg0) {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setPercentage((float)(arg0));
    }

    void CCProgressTimer::setType(int arg0) {

        ((cocos2d::CCProgressTimer*)m_cocos2d_impl)->setType((cocos2d::CCProgressTimerType)(arg0));
    }

    ScriptValue CCProgressTimer::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        cocos2d::CCProgressTimer* ret_impl = cocos2d::CCProgressTimer::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCProgressTimer)
        
    }
    cocos2d::CCProgressTimer* CCProgressTimer::getCocos2dImpl() {
        return (cocos2d::CCProgressTimer*)m_cocos2d_impl;
    }


    CCProgressTimer::CCProgressTimer() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCProgressTimer> CCProgressTimer::create()
    {
        RefPtrWillBeRawPtr<CCProgressTimer> ret = adoptRefWillBeNoop(new CCProgressTimer());
        cocos2d::CCProgressTimer* impl = new cocos2d::CCProgressTimer();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCProgressTimer::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCProgressTimer::~CCProgressTimer() {
    }
} // namespace blink
