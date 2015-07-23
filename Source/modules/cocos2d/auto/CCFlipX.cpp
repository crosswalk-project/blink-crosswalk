// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFlipX.h"

namespace blink {

    bool CCFlipX::initWithFlipX(bool arg0) {

        bool ret_impl = ((cocos2d::CCFlipX*)m_cocos2d_impl)->initWithFlipX((bool)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCFlipX::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCFlipX*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    void CCFlipX::update(float arg0) {

        ((cocos2d::CCFlipX*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCFlipX::createInternal(ScriptState* scriptState, bool arg0) {

        cocos2d::CCFlipX* ret_impl = cocos2d::CCFlipX::create((bool)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFlipX)
        
    }
    cocos2d::CCFlipX* CCFlipX::getCocos2dImpl() {
        return (cocos2d::CCFlipX*)m_cocos2d_impl;
    }


    CCFlipX::CCFlipX() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFlipX> CCFlipX::create()
    {
        RefPtrWillBeRawPtr<CCFlipX> ret = adoptRefWillBeNoop(new CCFlipX());
        cocos2d::CCFlipX* impl = new cocos2d::CCFlipX();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCFlipX::~CCFlipX() {
    }
} // namespace blink
