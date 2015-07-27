// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlColourPicker.h"

namespace blink {

    void CCControlColourPicker::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    ScriptValue CCControlColourPicker::getHuePicker(ScriptState* scriptState) {

        cocos2d::extension::CCControlHuePicker* ret_impl = ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->getHuePicker();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlHuePicker)
        
    }

    void CCControlColourPicker::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void CCControlColourPicker::hueSliderValueChanged(CCObject* arg0, unsigned int arg1) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->hueSliderValueChanged( _arg0, (unsigned int)(arg1));
    }

    ScriptValue CCControlColourPicker::getcolourPicker(ScriptState* scriptState) {

        cocos2d::extension::CCControlSaturationBrightnessPicker* ret_impl = ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->getcolourPicker();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSaturationBrightnessPicker)
        
    }

    void CCControlColourPicker::setBackground(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->setBackground( _arg0);
    }

    bool CCControlColourPicker::init() {

        bool ret_impl = ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCControlColourPicker::setcolourPicker(CCControlSaturationBrightnessPicker* arg0) {
        cocos2d::extension::CCControlSaturationBrightnessPicker* _arg0 = (cocos2d::extension::CCControlSaturationBrightnessPicker*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->setcolourPicker( _arg0);
    }

    void CCControlColourPicker::colourSliderValueChanged(CCObject* arg0, unsigned int arg1) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->colourSliderValueChanged( _arg0, (unsigned int)(arg1));
    }

    void CCControlColourPicker::setHuePicker(CCControlHuePicker* arg0) {
        cocos2d::extension::CCControlHuePicker* _arg0 = (cocos2d::extension::CCControlHuePicker*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->setHuePicker( _arg0);
    }

    ScriptValue CCControlColourPicker::getBackground(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl)->getBackground();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCControlColourPicker::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCControlColourPicker* ret_impl = cocos2d::extension::CCControlColourPicker::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlColourPicker)
        
    }
    cocos2d::extension::CCControlColourPicker* CCControlColourPicker::getCocos2dImpl() {
        return (cocos2d::extension::CCControlColourPicker*)m_cocos2d_impl;
    }


    CCControlColourPicker::CCControlColourPicker() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlColourPicker> CCControlColourPicker::create()
    {
        RefPtrWillBeRawPtr<CCControlColourPicker> ret = adoptRefWillBeNoop(new CCControlColourPicker());
        cocos2d::extension::CCControlColourPicker* impl = new cocos2d::extension::CCControlColourPicker();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlColourPicker::~CCControlColourPicker() {
    }
} // namespace blink
