// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleFireworks.h"

namespace blink {

    bool CCParticleFireworks::init() {

        bool ret_impl = ((cocos2d::CCParticleFireworks*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleFireworks::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleFireworks*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleFireworks::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleFireworks* ret_impl = cocos2d::CCParticleFireworks::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleFireworks)
        
    }

    ScriptValue CCParticleFireworks::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleFireworks* ret_impl = cocos2d::CCParticleFireworks::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleFireworks)
        
    }
    cocos2d::CCParticleFireworks* CCParticleFireworks::getCocos2dImpl() {
        return (cocos2d::CCParticleFireworks*)m_cocos2d_impl;
    }


    CCParticleFireworks::CCParticleFireworks() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleFireworks> CCParticleFireworks::create()
    {
        RefPtrWillBeRawPtr<CCParticleFireworks> ret = adoptRefWillBeNoop(new CCParticleFireworks());
        cocos2d::CCParticleFireworks* impl = new cocos2d::CCParticleFireworks();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleFireworks::~CCParticleFireworks() {
    }
} // namespace blink
