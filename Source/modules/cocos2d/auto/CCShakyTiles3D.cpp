// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCShakyTiles3D.h"

namespace blink {

    bool CCShakyTiles3D::initWithDuration(float arg0, CCSize* arg1, int arg2, bool arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCShakyTiles3D*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (int)(arg2), (bool)(arg3));
        
        
        return ret_impl;
    }

    void CCShakyTiles3D::update(float arg0) {

        ((cocos2d::CCShakyTiles3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCShakyTiles3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, int arg2, bool arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCShakyTiles3D* ret_impl = cocos2d::CCShakyTiles3D::create((float)(arg0),  *_arg1, (int)(arg2), (bool)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCShakyTiles3D)
        
    }
    cocos2d::CCShakyTiles3D* CCShakyTiles3D::getCocos2dImpl() {
        return (cocos2d::CCShakyTiles3D*)m_cocos2d_impl;
    }


    CCShakyTiles3D::CCShakyTiles3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCShakyTiles3D> CCShakyTiles3D::create()
    {
        RefPtrWillBeRawPtr<CCShakyTiles3D> ret = adoptRefWillBeNoop(new CCShakyTiles3D());
        cocos2d::CCShakyTiles3D* impl = new cocos2d::CCShakyTiles3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCShakyTiles3D::~CCShakyTiles3D() {
    }
} // namespace blink
