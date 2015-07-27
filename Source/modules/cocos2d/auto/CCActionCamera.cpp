// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionCamera.h"

namespace blink {

    void CCActionCamera::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionCamera*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCActionCamera::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCActionCamera*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }
    cocos2d::CCActionCamera* CCActionCamera::getCocos2dImpl() {
        return (cocos2d::CCActionCamera*)m_cocos2d_impl;
    }


    CCActionCamera::CCActionCamera() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionCamera> CCActionCamera::create()
    {
        RefPtrWillBeRawPtr<CCActionCamera> ret = adoptRefWillBeNoop(new CCActionCamera());
        cocos2d::CCActionCamera* impl = new cocos2d::CCActionCamera();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionCamera::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionCamera::~CCActionCamera() {
    }
} // namespace blink
