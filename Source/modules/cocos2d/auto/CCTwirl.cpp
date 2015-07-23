// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTwirl.h"

namespace blink {

    void CCTwirl::setAmplitudeRate(float arg0) {

        ((cocos2d::CCTwirl*)m_cocos2d_impl)->setAmplitudeRate((float)(arg0));
    }

    bool CCTwirl::initWithDuration(float arg0, CCSize* arg1, CCPoint* arg2, unsigned int arg3, float arg4) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTwirl*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1,  *_arg2, (unsigned int)(arg3), (float)(arg4));
        
        
        return ret_impl;
    }

    void CCTwirl::update(float arg0) {

        ((cocos2d::CCTwirl*)m_cocos2d_impl)->update((float)(arg0));
    }

    float CCTwirl::getAmplitudeRate() {

        float ret_impl = ((cocos2d::CCTwirl*)m_cocos2d_impl)->getAmplitudeRate();
        
        
        return ret_impl;
    }

    void CCTwirl::setAmplitude(float arg0) {

        ((cocos2d::CCTwirl*)m_cocos2d_impl)->setAmplitude((float)(arg0));
    }

    void CCTwirl::setPositionInternal(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTwirl*)m_cocos2d_impl)->setPosition( *_arg0);
    }

    float CCTwirl::getAmplitude() {

        float ret_impl = ((cocos2d::CCTwirl*)m_cocos2d_impl)->getAmplitude();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTwirl::getPosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCTwirl*)m_cocos2d_impl)->getPosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCTwirl::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, CCPoint* arg2, unsigned int arg3, float arg4) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        cocos2d::CCTwirl* ret_impl = cocos2d::CCTwirl::create((float)(arg0),  *_arg1,  *_arg2, (unsigned int)(arg3), (float)(arg4));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTwirl)
        
    }
    cocos2d::CCTwirl* CCTwirl::getCocos2dImpl() {
        return (cocos2d::CCTwirl*)m_cocos2d_impl;
    }


    CCTwirl::CCTwirl() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTwirl> CCTwirl::create()
    {
        RefPtrWillBeRawPtr<CCTwirl> ret = adoptRefWillBeNoop(new CCTwirl());
        cocos2d::CCTwirl* impl = new cocos2d::CCTwirl();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTwirl::~CCTwirl() {
    }
} // namespace blink
