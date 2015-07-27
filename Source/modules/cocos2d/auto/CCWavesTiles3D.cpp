// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCWavesTiles3D.h"

namespace blink {

    bool CCWavesTiles3D::initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3));
        
        
        return ret_impl;
    }

    void CCWavesTiles3D::update(float arg0) {

        ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    float CCWavesTiles3D::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCWavesTiles3D::setAmplitude(float arg0) {

        ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->setAmplitude((float)(arg0));
    }

    float CCWavesTiles3D::getAmplitude() {

        float ret_impl = ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->getAmplitude();
        
        
        return ret_impl;
    }

    void CCWavesTiles3D::setAmplitudeRate(float arg0) {

        ((cocos2d::CCWavesTiles3D*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    ScriptValue CCWavesTiles3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCWavesTiles3D* ret_impl = cocos2d::CCWavesTiles3D::create((float)(arg0),  *_arg1, (unsigned int)(arg2), (float)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCWavesTiles3D)
        
    }
    cocos2d::CCWavesTiles3D* CCWavesTiles3D::getCocos2dImpl() {
        return (cocos2d::CCWavesTiles3D*)m_cocos2d_impl;
    }


    CCWavesTiles3D::CCWavesTiles3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCWavesTiles3D> CCWavesTiles3D::create()
    {
        RefPtrWillBeRawPtr<CCWavesTiles3D> ret = adoptRefWillBeNoop(new CCWavesTiles3D());
        cocos2d::CCWavesTiles3D* impl = new cocos2d::CCWavesTiles3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCWavesTiles3D::~CCWavesTiles3D() {
    }
} // namespace blink
