// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleMeteor.h"

namespace blink {

    bool CCParticleMeteor::init() {

        bool ret_impl = ((cocos2d::CCParticleMeteor*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCParticleMeteor::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleMeteor*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCParticleMeteor::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleMeteor* ret_impl = cocos2d::CCParticleMeteor::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleMeteor)
        
    }

    ScriptValue CCParticleMeteor::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleMeteor* ret_impl = cocos2d::CCParticleMeteor::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleMeteor)
        
    }
    cocos2d::CCParticleMeteor* CCParticleMeteor::getCocos2dImpl() {
        return (cocos2d::CCParticleMeteor*)m_cocos2d_impl;
    }


    CCParticleMeteor::CCParticleMeteor() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleMeteor> CCParticleMeteor::create()
    {
        RefPtrWillBeRawPtr<CCParticleMeteor> ret = adoptRefWillBeNoop(new CCParticleMeteor());
        cocos2d::CCParticleMeteor* impl = new cocos2d::CCParticleMeteor();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleMeteor::~CCParticleMeteor() {
    }
} // namespace blink
