// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlStepper.h"

namespace blink {

    void CCControlStepper::setMinusSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setMinusSprite( _arg0);
    }

    ScriptValue CCControlStepper::getMinusLabel(ScriptState* scriptState) {

        cocos2d::CCLabelTTF* ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->getMinusLabel();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }

    void CCControlStepper::setWraps(bool arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setWraps((bool)(arg0));
    }

    bool CCControlStepper::isContinuous() {

        bool ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->isContinuous();
        
        
        return ret_impl;
    }

    ScriptValue CCControlStepper::getMinusSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->getMinusSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCControlStepper::updateLayoutUsingTouchLocation(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->updateLayoutUsingTouchLocation( *_arg0);
    }

    void CCControlStepper::setValueWithSendingEvent(double arg0, bool arg1) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setValueWithSendingEvent((double)(arg0), (bool)(arg1));
    }

    ScriptValue CCControlStepper::getPlusLabel(ScriptState* scriptState) {

        cocos2d::CCLabelTTF* ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->getPlusLabel();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLabelTTF)
        
    }

    void CCControlStepper::stopAutorepeat() {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->stopAutorepeat();
    }

    void CCControlStepper::setMaximumValue(double arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setMaximumValue((double)(arg0));
    }

    void CCControlStepper::setPlusSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setPlusSprite( _arg0);
    }

    void CCControlStepper::setMinusLabel(CCLabelTTF* arg0) {
        cocos2d::CCLabelTTF* _arg0 = (cocos2d::CCLabelTTF*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setMinusLabel( _arg0);
    }

    void CCControlStepper::setValue(double arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setValue((double)(arg0));
    }

    void CCControlStepper::setStepValue(double arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setStepValue((double)(arg0));
    }

    ScriptValue CCControlStepper::getPlusSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->getPlusSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCControlStepper::update(float arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCControlStepper::setMinimumValue(double arg0) {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setMinimumValue((double)(arg0));
    }

    void CCControlStepper::startAutorepeat() {

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->startAutorepeat();
    }

    bool CCControlStepper::initWithMinusSpriteAndPlusSprite(CCSprite* arg0, CCSprite* arg1) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->initWithMinusSpriteAndPlusSprite( _arg0,  _arg1);
        
        
        return ret_impl;
    }

    double CCControlStepper::getValue() {

        double ret_impl = ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->getValue();
        
        
        return ret_impl;
    }

    void CCControlStepper::setPlusLabel(CCLabelTTF* arg0) {
        cocos2d::CCLabelTTF* _arg0 = (cocos2d::CCLabelTTF*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlStepper*)m_cocos2d_impl)->setPlusLabel( _arg0);
    }

    ScriptValue CCControlStepper::createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCControlStepper* ret_impl = cocos2d::extension::CCControlStepper::create( _arg0,  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlStepper)
        
    }
    cocos2d::extension::CCControlStepper* CCControlStepper::getCocos2dImpl() {
        return (cocos2d::extension::CCControlStepper*)m_cocos2d_impl;
    }


    CCControlStepper::CCControlStepper() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlStepper> CCControlStepper::create()
    {
        RefPtrWillBeRawPtr<CCControlStepper> ret = adoptRefWillBeNoop(new CCControlStepper());
        cocos2d::extension::CCControlStepper* impl = new cocos2d::extension::CCControlStepper();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlStepper::~CCControlStepper() {
    }
} // namespace blink
