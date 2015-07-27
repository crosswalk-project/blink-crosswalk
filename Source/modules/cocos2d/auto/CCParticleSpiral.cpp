// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSpiral.h"

namespace blink {

    bool CCParticleSpiral::init() {

        bool ret_impl = ((cocos2d::CCParticleSpiral*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleSpiral::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleSpiral*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSpiral::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleSpiral* ret_impl = cocos2d::CCParticleSpiral::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSpiral)
        
    }

    ScriptValue CCParticleSpiral::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSpiral* ret_impl = cocos2d::CCParticleSpiral::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSpiral)
        
    }
    cocos2d::CCParticleSpiral* CCParticleSpiral::getCocos2dImpl() {
        return (cocos2d::CCParticleSpiral*)m_cocos2d_impl;
    }


    CCParticleSpiral::CCParticleSpiral() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSpiral> CCParticleSpiral::create()
    {
        RefPtrWillBeRawPtr<CCParticleSpiral> ret = adoptRefWillBeNoop(new CCParticleSpiral());
        cocos2d::CCParticleSpiral* impl = new cocos2d::CCParticleSpiral();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleSpiral::~CCParticleSpiral() {
    }
} // namespace blink
