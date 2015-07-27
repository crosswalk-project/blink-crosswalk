// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleFlower.h"

namespace blink {

    bool CCParticleFlower::init() {

        bool ret_impl = ((cocos2d::CCParticleFlower*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleFlower::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleFlower*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleFlower::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleFlower* ret_impl = cocos2d::CCParticleFlower::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleFlower)
        
    }

    ScriptValue CCParticleFlower::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleFlower* ret_impl = cocos2d::CCParticleFlower::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleFlower)
        
    }
    cocos2d::CCParticleFlower* CCParticleFlower::getCocos2dImpl() {
        return (cocos2d::CCParticleFlower*)m_cocos2d_impl;
    }


    CCParticleFlower::CCParticleFlower() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleFlower> CCParticleFlower::create()
    {
        RefPtrWillBeRawPtr<CCParticleFlower> ret = adoptRefWillBeNoop(new CCParticleFlower());
        cocos2d::CCParticleFlower* impl = new cocos2d::CCParticleFlower();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleFlower::~CCParticleFlower() {
    }
} // namespace blink
