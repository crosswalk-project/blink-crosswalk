// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCWaves.h"

namespace blink {

    bool CCWaves::initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3, bool arg4, bool arg5) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCWaves*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3), (bool)(arg4), (bool)(arg5));
        
        
        return ret_impl;
    }

    void CCWaves::update(float arg0) {

        ((cocos2d::CCWaves*)m_cocos2d_impl)->update((float)(arg0));
    }

    float CCWaves::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCWaves*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCWaves::setAmplitude(float arg0) {

        ((cocos2d::CCWaves*)m_cocos2d_impl)->setAmplitude((float)(arg0));
    }

    float CCWaves::getAmplitude() {

        float ret_impl = ((cocos2d::CCWaves*)m_cocos2d_impl)->getAmplitude();
        
        
        return ret_impl;
    }

    void CCWaves::setAmplitudeRate(float arg0) {

        ((cocos2d::CCWaves*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    ScriptValue CCWaves::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3, bool arg4, bool arg5) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCWaves* ret_impl = cocos2d::CCWaves::create((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3), (bool)(arg4), (bool)(arg5));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCWaves)
        
    }
    cocos2d::CCWaves* CCWaves::getCocos2dImpl() {
        return (cocos2d::CCWaves*)m_cocos2d_impl;
    }


    CCWaves::CCWaves() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCWaves> CCWaves::create()
    {
        RefPtrWillBeRawPtr<CCWaves> ret = adoptRefWillBeNoop(new CCWaves());
        cocos2d::CCWaves* impl = new cocos2d::CCWaves();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCWaves::~CCWaves() {
    }
} // namespace blink
