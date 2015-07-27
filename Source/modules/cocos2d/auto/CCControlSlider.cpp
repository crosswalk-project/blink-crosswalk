// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlSlider.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCPoint> CCControlSlider::locationFromTouch(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->locationFromTouch( _arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCControlSlider::setProgressSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setProgressSprite( _arg0);
    }

    float CCControlSlider::getMaximumAllowedValue() {

        float ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getMaximumAllowedValue();
        
        
        return ret_impl;
    }

    float CCControlSlider::getMinimumAllowedValue() {

        float ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getMinimumAllowedValue();
        
        
        return ret_impl;
    }

    float CCControlSlider::getMinimumValue() {

        float ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getMinimumValue();
        
        
        return ret_impl;
    }

    void CCControlSlider::setThumbSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setThumbSprite( _arg0);
    }

    void CCControlSlider::setMinimumValue(float arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setMinimumValue((float)(arg0));
    }

    void CCControlSlider::setMinimumAllowedValue(float arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setMinimumAllowedValue((float)(arg0));
    }

    void CCControlSlider::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCControlSlider::setValue(float arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setValue((float)(arg0));
    }

    void CCControlSlider::setMaximumValue(float arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setMaximumValue((float)(arg0));
    }

    void CCControlSlider::needsLayout() {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->needsLayout();
    }

    ScriptValue CCControlSlider::getBackgroundSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getBackgroundSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    bool CCControlSlider::initWithSprites(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->initWithSprites( _arg0,  _arg1,  _arg2);
        
        
        return ret_impl;
    }

    float CCControlSlider::getMaximumValue() {

        float ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getMaximumValue();
        
        
        return ret_impl;
    }

    bool CCControlSlider::isTouchInside(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->isTouchInside( _arg0);
        
        
        return ret_impl;
    }

    float CCControlSlider::getValue() {

        float ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getValue();
        
        
        return ret_impl;
    }

    ScriptValue CCControlSlider::getThumbSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getThumbSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCControlSlider::getProgressSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->getProgressSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCControlSlider::setBackgroundSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setBackgroundSprite( _arg0);
    }

    void CCControlSlider::setMaximumAllowedValue(float arg0) {

        ((cocos2d::extension::CCControlSlider*)m_cocos2d_impl)->setMaximumAllowedValue((float)(arg0));
    }
    ScriptValue CCControlSlider::createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());

        cocos2d::extension::CCControlSlider* ret_impl = cocos2d::extension::CCControlSlider::create( _arg0,  _arg1,  _arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSlider)
        
    }
    ScriptValue CCControlSlider::createInternal(ScriptState* scriptState, String arg0, String arg1, String arg2) {

        cocos2d::extension::CCControlSlider* ret_impl = cocos2d::extension::CCControlSlider::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSlider)
        
    }
    cocos2d::extension::CCControlSlider* CCControlSlider::getCocos2dImpl() {
        return (cocos2d::extension::CCControlSlider*)m_cocos2d_impl;
    }


    CCControlSlider::CCControlSlider() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlSlider> CCControlSlider::create()
    {
        RefPtrWillBeRawPtr<CCControlSlider> ret = adoptRefWillBeNoop(new CCControlSlider());
        cocos2d::extension::CCControlSlider* impl = new cocos2d::extension::CCControlSlider();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlSlider::~CCControlSlider() {
    }
} // namespace blink
