// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLiquid.h"

namespace blink {

    bool CCLiquid::initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLiquid*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3));
        
        
        return ret_impl;
    }

    void CCLiquid::update(float arg0) {

        ((cocos2d::CCLiquid*)m_cocos2d_impl)->update((float)(arg0));
    }

    float CCLiquid::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCLiquid*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCLiquid::setAmplitude(float arg0) {

        ((cocos2d::CCLiquid*)m_cocos2d_impl)->setAmplitude((float)(arg0));
    }

    float CCLiquid::getAmplitude() {

        float ret_impl = ((cocos2d::CCLiquid*)m_cocos2d_impl)->getAmplitude();
        
        
        return ret_impl;
    }

    void CCLiquid::setAmplitudeRate(float arg0) {

        ((cocos2d::CCLiquid*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    ScriptValue CCLiquid::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCLiquid* ret_impl = cocos2d::CCLiquid::create((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLiquid)
        
    }
    cocos2d::CCLiquid* CCLiquid::getCocos2dImpl() {
        return (cocos2d::CCLiquid*)m_cocos2d_impl;
    }


    CCLiquid::CCLiquid() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLiquid> CCLiquid::create()
    {
        RefPtrWillBeRawPtr<CCLiquid> ret = adoptRefWillBeNoop(new CCLiquid());
        cocos2d::CCLiquid* impl = new cocos2d::CCLiquid();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCLiquid::~CCLiquid() {
    }
} // namespace blink
