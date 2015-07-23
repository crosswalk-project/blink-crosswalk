// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlSaturationBrightnessPicker.h"

namespace blink {

    ScriptValue CCControlSaturationBrightnessPicker::getShadow(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getShadow();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    bool CCControlSaturationBrightnessPicker::initWithTargetAndPos(CCNode* arg0, CCPoint* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->initWithTargetAndPos( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControlSaturationBrightnessPicker::getStartPos() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getStartPos();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCControlSaturationBrightnessPicker::getOverlay(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getOverlay();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    void CCControlSaturationBrightnessPicker::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    ScriptValue CCControlSaturationBrightnessPicker::getSlider(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getSlider();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    ScriptValue CCControlSaturationBrightnessPicker::getBackground(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getBackground();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    float CCControlSaturationBrightnessPicker::getSaturation() {

        float ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getSaturation();
        
        
        return ret_impl;
    }

    float CCControlSaturationBrightnessPicker::getBrightness() {

        float ret_impl = ((cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl)->getBrightness();
        
        
        return ret_impl;
    }

    ScriptValue CCControlSaturationBrightnessPicker::createInternal(ScriptState* scriptState, CCNode* arg0, CCPoint* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCControlSaturationBrightnessPicker* ret_impl = cocos2d::extension::CCControlSaturationBrightnessPicker::create( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSaturationBrightnessPicker)
        
    }
    cocos2d::extension::CCControlSaturationBrightnessPicker* CCControlSaturationBrightnessPicker::getCocos2dImpl() {
        return (cocos2d::extension::CCControlSaturationBrightnessPicker*)m_cocos2d_impl;
    }


    CCControlSaturationBrightnessPicker::CCControlSaturationBrightnessPicker() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlSaturationBrightnessPicker> CCControlSaturationBrightnessPicker::create()
    {
        RefPtrWillBeRawPtr<CCControlSaturationBrightnessPicker> ret = adoptRefWillBeNoop(new CCControlSaturationBrightnessPicker());
        cocos2d::extension::CCControlSaturationBrightnessPicker* impl = new cocos2d::extension::CCControlSaturationBrightnessPicker();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlSaturationBrightnessPicker::~CCControlSaturationBrightnessPicker() {
    }
} // namespace blink
