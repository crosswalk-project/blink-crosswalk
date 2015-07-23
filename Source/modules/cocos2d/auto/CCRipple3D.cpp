// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCRipple3D.h"

namespace blink {

    void CCRipple3D::setAmplitudeRate(float arg0) {

        ((cocos2d::CCRipple3D*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    bool CCRipple3D::initWithDuration(float arg0, CCSize* arg1, CCPoint* arg2, float arg3, unsigned int arg4, float arg5) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCRipple3D*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1,  *_arg2, (float)(arg3), (unsigned int)(arg4), (float)(arg5));
        
        
        return ret_impl;
    }

    void CCRipple3D::update(float arg0) {

        ((cocos2d::CCRipple3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    float CCRipple3D::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCRipple3D*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCRipple3D::setAmplitude(float arg0) {

        ((cocos2d::CCRipple3D*)m_cocos2d_impl)->setAmplitude((float)(arg0));
    }

    void CCRipple3D::setPositionInternal(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRipple3D*)m_cocos2d_impl)->setPosition( *_arg0);
    }

    float CCRipple3D::getAmplitude() {

        float ret_impl = ((cocos2d::CCRipple3D*)m_cocos2d_impl)->getAmplitude();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCRipple3D::getPosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCRipple3D*)m_cocos2d_impl)->getPosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCRipple3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, CCPoint* arg2, float arg3, unsigned int arg4, float arg5) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        cocos2d::CCRipple3D* ret_impl = cocos2d::CCRipple3D::create((float)(arg0),  *_arg1,  *_arg2, (float)(arg3), (unsigned int)(arg4), (float)(arg5));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRipple3D)
        
    }
    cocos2d::CCRipple3D* CCRipple3D::getCocos2dImpl() {
        return (cocos2d::CCRipple3D*)m_cocos2d_impl;
    }


    CCRipple3D::CCRipple3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCRipple3D> CCRipple3D::create()
    {
        RefPtrWillBeRawPtr<CCRipple3D> ret = adoptRefWillBeNoop(new CCRipple3D());
        cocos2d::CCRipple3D* impl = new cocos2d::CCRipple3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCRipple3D::~CCRipple3D() {
    }
} // namespace blink
