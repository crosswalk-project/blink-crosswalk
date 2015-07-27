// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleGalaxy.h"

namespace blink {

    bool CCParticleGalaxy::init() {

        bool ret_impl = ((cocos2d::CCParticleGalaxy*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleGalaxy::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleGalaxy*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleGalaxy::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleGalaxy* ret_impl = cocos2d::CCParticleGalaxy::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleGalaxy)
        
    }

    ScriptValue CCParticleGalaxy::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleGalaxy* ret_impl = cocos2d::CCParticleGalaxy::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleGalaxy)
        
    }
    cocos2d::CCParticleGalaxy* CCParticleGalaxy::getCocos2dImpl() {
        return (cocos2d::CCParticleGalaxy*)m_cocos2d_impl;
    }


    CCParticleGalaxy::CCParticleGalaxy() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleGalaxy> CCParticleGalaxy::create()
    {
        RefPtrWillBeRawPtr<CCParticleGalaxy> ret = adoptRefWillBeNoop(new CCParticleGalaxy());
        cocos2d::CCParticleGalaxy* impl = new cocos2d::CCParticleGalaxy();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleGalaxy::~CCParticleGalaxy() {
    }
} // namespace blink
