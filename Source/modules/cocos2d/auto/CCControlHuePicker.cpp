// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlHuePicker.h"

namespace blink {

    void CCControlHuePicker::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    bool CCControlHuePicker::initWithTargetAndPos(CCNode* arg0, CCPoint* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->initWithTargetAndPos( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    void CCControlHuePicker::setHue(float arg0) {

        ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->setHue((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControlHuePicker::getStartPos() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->getStartPos();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCControlHuePicker::getHue() {

        float ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->getHue();
        
        
        return ret_impl;
    }

    ScriptValue CCControlHuePicker::getSlider(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->getSlider();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCControlHuePicker::setBackground(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->setBackground( _arg0);
    }

    void CCControlHuePicker::setHuePercentage(float arg0) {

        ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->setHuePercentage((float)(arg0));
    }

    ScriptValue CCControlHuePicker::getBackground(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->getBackground();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    float CCControlHuePicker::getHuePercentage() {

        float ret_impl = ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->getHuePercentage();
        
        
        return ret_impl;
    }

    void CCControlHuePicker::setSlider(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl)->setSlider( _arg0);
    }

    ScriptValue CCControlHuePicker::createInternal(ScriptState* scriptState, CCNode* arg0, CCPoint* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCControlHuePicker* ret_impl = cocos2d::extension::CCControlHuePicker::create( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlHuePicker)
        
    }
    cocos2d::extension::CCControlHuePicker* CCControlHuePicker::getCocos2dImpl() {
        return (cocos2d::extension::CCControlHuePicker*)m_cocos2d_impl;
    }


    CCControlHuePicker::CCControlHuePicker() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlHuePicker> CCControlHuePicker::create()
    {
        RefPtrWillBeRawPtr<CCControlHuePicker> ret = adoptRefWillBeNoop(new CCControlHuePicker());
        cocos2d::extension::CCControlHuePicker* impl = new cocos2d::extension::CCControlHuePicker();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlHuePicker::~CCControlHuePicker() {
    }
} // namespace blink
