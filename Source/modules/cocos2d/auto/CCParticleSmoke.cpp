// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSmoke.h"

namespace blink {

    bool CCParticleSmoke::init() {

        bool ret_impl = ((cocos2d::CCParticleSmoke*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleSmoke::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleSmoke*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSmoke::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleSmoke* ret_impl = cocos2d::CCParticleSmoke::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSmoke)
        
    }

    ScriptValue CCParticleSmoke::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSmoke* ret_impl = cocos2d::CCParticleSmoke::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSmoke)
        
    }
    cocos2d::CCParticleSmoke* CCParticleSmoke::getCocos2dImpl() {
        return (cocos2d::CCParticleSmoke*)m_cocos2d_impl;
    }


    CCParticleSmoke::CCParticleSmoke() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSmoke> CCParticleSmoke::create()
    {
        RefPtrWillBeRawPtr<CCParticleSmoke> ret = adoptRefWillBeNoop(new CCParticleSmoke());
        cocos2d::CCParticleSmoke* impl = new cocos2d::CCParticleSmoke();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleSmoke::~CCParticleSmoke() {
    }
} // namespace blink
