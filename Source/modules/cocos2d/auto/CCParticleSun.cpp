// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSun.h"

namespace blink {

    bool CCParticleSun::init() {

        bool ret_impl = ((cocos2d::CCParticleSun*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleSun::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleSun*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSun::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleSun* ret_impl = cocos2d::CCParticleSun::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSun)
        
    }

    ScriptValue CCParticleSun::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSun* ret_impl = cocos2d::CCParticleSun::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSun)
        
    }
    cocos2d::CCParticleSun* CCParticleSun::getCocos2dImpl() {
        return (cocos2d::CCParticleSun*)m_cocos2d_impl;
    }


    CCParticleSun::CCParticleSun() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSun> CCParticleSun::create()
    {
        RefPtrWillBeRawPtr<CCParticleSun> ret = adoptRefWillBeNoop(new CCParticleSun());
        cocos2d::CCParticleSun* impl = new cocos2d::CCParticleSun();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleSun::~CCParticleSun() {
    }
} // namespace blink
