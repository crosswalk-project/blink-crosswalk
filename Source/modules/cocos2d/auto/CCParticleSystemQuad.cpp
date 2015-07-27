// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSystemQuad.h"

namespace blink {

    void CCParticleSystemQuad::initTexCoordsWithRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystemQuad*)m_cocos2d_impl)->initTexCoordsWithRect( *_arg0);
    }

    void CCParticleSystemQuad::setTextureWithRect(CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        ((cocos2d::CCParticleSystemQuad*)m_cocos2d_impl)->setTextureWithRect( _arg0,  *_arg1);
    }

    void CCParticleSystemQuad::initIndices() {

        ((cocos2d::CCParticleSystemQuad*)m_cocos2d_impl)->initIndices();
    }

    void CCParticleSystemQuad::setDisplayFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystemQuad*)m_cocos2d_impl)->setDisplayFrame( _arg0);
    }
    ScriptValue CCParticleSystemQuad::createInternal(ScriptState* scriptState) {

        cocos2d::CCParticleSystemQuad* ret_impl = cocos2d::CCParticleSystemQuad::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSystemQuad)
        
    }
    ScriptValue CCParticleSystemQuad::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::CCParticleSystemQuad* ret_impl = cocos2d::CCParticleSystemQuad::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSystemQuad)
        
    }

    ScriptValue CCParticleSystemQuad::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSystemQuad* ret_impl = cocos2d::CCParticleSystemQuad::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSystemQuad)
        
    }
    cocos2d::CCParticleSystemQuad* CCParticleSystemQuad::getCocos2dImpl() {
        return (cocos2d::CCParticleSystemQuad*)m_cocos2d_impl;
    }


    CCParticleSystemQuad::CCParticleSystemQuad() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSystemQuad> CCParticleSystemQuad::create()
    {
        RefPtrWillBeRawPtr<CCParticleSystemQuad> ret = adoptRefWillBeNoop(new CCParticleSystemQuad());
        cocos2d::CCParticleSystemQuad* impl = new cocos2d::CCParticleSystemQuad();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCParticleSystemQuad::~CCParticleSystemQuad() {
    }
} // namespace blink
