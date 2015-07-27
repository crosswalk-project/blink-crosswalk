// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSnow.h"

namespace blink {

    bool CCParticleSnow::init() {

        bool ret_impl = ((cocos2d::CCParticleSnow*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleSnow::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleSnow*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSnow::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleSnow* ret_impl = cocos2d::CCParticleSnow::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSnow)
        
    }

    ScriptValue CCParticleSnow::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSnow* ret_impl = cocos2d::CCParticleSnow::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSnow)
        
    }
    cocos2d::CCParticleSnow* CCParticleSnow::getCocos2dImpl() {
        return (cocos2d::CCParticleSnow*)m_cocos2d_impl;
    }


    CCParticleSnow::CCParticleSnow() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSnow> CCParticleSnow::create()
    {
        RefPtrWillBeRawPtr<CCParticleSnow> ret = adoptRefWillBeNoop(new CCParticleSnow());
        cocos2d::CCParticleSnow* impl = new cocos2d::CCParticleSnow();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleSnow::~CCParticleSnow() {
    }
} // namespace blink
