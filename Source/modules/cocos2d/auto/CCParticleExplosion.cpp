// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleExplosion.h"

namespace blink {

    bool CCParticleExplosion::init() {

        bool ret_impl = ((cocos2d::CCParticleExplosion*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleExplosion::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleExplosion*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleExplosion::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleExplosion* ret_impl = cocos2d::CCParticleExplosion::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleExplosion)
        
    }

    ScriptValue CCParticleExplosion::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleExplosion* ret_impl = cocos2d::CCParticleExplosion::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleExplosion)
        
    }
    cocos2d::CCParticleExplosion* CCParticleExplosion::getCocos2dImpl() {
        return (cocos2d::CCParticleExplosion*)m_cocos2d_impl;
    }


    CCParticleExplosion::CCParticleExplosion() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleExplosion> CCParticleExplosion::create()
    {
        RefPtrWillBeRawPtr<CCParticleExplosion> ret = adoptRefWillBeNoop(new CCParticleExplosion());
        cocos2d::CCParticleExplosion* impl = new cocos2d::CCParticleExplosion();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleExplosion::~CCParticleExplosion() {
    }
} // namespace blink
