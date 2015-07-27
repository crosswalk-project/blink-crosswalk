// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCGrid3D.h"

namespace blink {

    void CCGrid3D::calculateVertexPoints() {

        ((cocos2d::CCGrid3D*)m_cocos2d_impl)->calculateVertexPoints();
    }

    void CCGrid3D::reuse() {

        ((cocos2d::CCGrid3D*)m_cocos2d_impl)->reuse();
    }

    void CCGrid3D::blit() {

        ((cocos2d::CCGrid3D*)m_cocos2d_impl)->blit();
    }
    ScriptValue CCGrid3D::createInternal(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCGrid3D* ret_impl = cocos2d::CCGrid3D::create( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGrid3D)
        
    }
    ScriptValue CCGrid3D::createInternal(ScriptState* scriptState, CCSize* arg0, CCTexture2D* arg1, bool arg2) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        cocos2d::CCGrid3D* ret_impl = cocos2d::CCGrid3D::create( *_arg0,  _arg1, (bool)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGrid3D)
        
    }
    cocos2d::CCGrid3D* CCGrid3D::getCocos2dImpl() {
        return (cocos2d::CCGrid3D*)m_cocos2d_impl;
    }


    CCGrid3D::CCGrid3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCGrid3D> CCGrid3D::create()
    {
        RefPtrWillBeRawPtr<CCGrid3D> ret = adoptRefWillBeNoop(new CCGrid3D());
        cocos2d::CCGrid3D* impl = new cocos2d::CCGrid3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCGrid3D::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCGrid3D::~CCGrid3D() {
    }
} // namespace blink
