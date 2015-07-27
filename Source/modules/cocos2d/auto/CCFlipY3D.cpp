// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFlipY3D.h"

namespace blink {

    void CCFlipY3D::update(float arg0) {

        ((cocos2d::CCFlipY3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFlipY3D::createInternal(ScriptState* scriptState, float arg0) {

        cocos2d::CCFlipY3D* ret_impl = cocos2d::CCFlipY3D::create((float)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFlipY3D)
        
    }
    cocos2d::CCFlipY3D* CCFlipY3D::getCocos2dImpl() {
        return (cocos2d::CCFlipY3D*)m_cocos2d_impl;
    }


    CCFlipY3D::CCFlipY3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFlipY3D> CCFlipY3D::create()
    {
        RefPtrWillBeRawPtr<CCFlipY3D> ret = adoptRefWillBeNoop(new CCFlipY3D());
        cocos2d::CCFlipY3D* impl = new cocos2d::CCFlipY3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFlipY3D::~CCFlipY3D() {
    }
} // namespace blink
