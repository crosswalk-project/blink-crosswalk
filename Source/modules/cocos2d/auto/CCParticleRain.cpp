// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleRain.h"

namespace blink {

    bool CCParticleRain::init() {

        bool ret_impl = ((cocos2d::CCParticleRain*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleRain::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleRain*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleRain::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleRain* ret_impl = cocos2d::CCParticleRain::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleRain)
        
    }

    ScriptValue CCParticleRain::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleRain* ret_impl = cocos2d::CCParticleRain::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleRain)
        
    }
    cocos2d::CCParticleRain* CCParticleRain::getCocos2dImpl() {
        return (cocos2d::CCParticleRain*)m_cocos2d_impl;
    }


    CCParticleRain::CCParticleRain() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleRain> CCParticleRain::create()
    {
        RefPtrWillBeRawPtr<CCParticleRain> ret = adoptRefWillBeNoop(new CCParticleRain());
        cocos2d::CCParticleRain* impl = new cocos2d::CCParticleRain();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleRain::~CCParticleRain() {
    }
} // namespace blink
