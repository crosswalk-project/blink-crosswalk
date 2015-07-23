// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFlipX3D.h"

namespace blink {

    bool CCFlipX3D::initWithSize(CCSize* arg0, float arg1) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCFlipX3D*)m_cocos2d_impl)->initWithSize( *_arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    bool CCFlipX3D::initWithDuration(float arg0) {

        bool ret_impl = ((cocos2d::CCFlipX3D*)m_cocos2d_impl)->initWithDuration((float)(arg0));
        
        
        return ret_impl;
    }

    void CCFlipX3D::update(float arg0) {

        ((cocos2d::CCFlipX3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFlipX3D::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCFlipX3D* ret_impl = cocos2d::CCFlipX3D::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFlipX3D)
        
    }
    cocos2d::CCFlipX3D* CCFlipX3D::getCocos2dImpl() {
        return (cocos2d::CCFlipX3D*)m_cocos2d_impl;
    }


    CCFlipX3D::CCFlipX3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFlipX3D> CCFlipX3D::create()
    {
        RefPtrWillBeRawPtr<CCFlipX3D> ret = adoptRefWillBeNoop(new CCFlipX3D());
        cocos2d::CCFlipX3D* impl = new cocos2d::CCFlipX3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFlipX3D::~CCFlipX3D() {
    }
} // namespace blink
