// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTiledGrid3D.h"

namespace blink {

    void CCTiledGrid3D::calculateVertexPoints() {

        ((cocos2d::CCTiledGrid3D*)m_cocos2d_impl)->calculateVertexPoints();
    }

    void CCTiledGrid3D::reuse() {

        ((cocos2d::CCTiledGrid3D*)m_cocos2d_impl)->reuse();
    }

    void CCTiledGrid3D::blit() {

        ((cocos2d::CCTiledGrid3D*)m_cocos2d_impl)->blit();
    }
    ScriptValue CCTiledGrid3D::createInternal(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCTiledGrid3D* ret_impl = cocos2d::CCTiledGrid3D::create( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTiledGrid3D)
        
    }
    ScriptValue CCTiledGrid3D::createInternal(ScriptState* scriptState, CCSize* arg0, CCTexture2D* arg1, bool arg2) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        cocos2d::CCTiledGrid3D* ret_impl = cocos2d::CCTiledGrid3D::create( *_arg0,  _arg1, (bool)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTiledGrid3D)
        
    }
    cocos2d::CCTiledGrid3D* CCTiledGrid3D::getCocos2dImpl() {
        return (cocos2d::CCTiledGrid3D*)m_cocos2d_impl;
    }


    CCTiledGrid3D::CCTiledGrid3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTiledGrid3D> CCTiledGrid3D::create()
    {
        RefPtrWillBeRawPtr<CCTiledGrid3D> ret = adoptRefWillBeNoop(new CCTiledGrid3D());
        cocos2d::CCTiledGrid3D* impl = new cocos2d::CCTiledGrid3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCTiledGrid3D::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCTiledGrid3D::~CCTiledGrid3D() {
    }
} // namespace blink
