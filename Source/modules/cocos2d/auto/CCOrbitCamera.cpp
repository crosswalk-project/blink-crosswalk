// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCOrbitCamera.h"

namespace blink {

    void CCOrbitCamera::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCOrbitCamera*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCOrbitCamera::initWithDuration(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) {

        bool ret_impl = ((cocos2d::CCOrbitCamera*)m_cocos2d_impl)->initWithDuration((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3), (float)(arg4), (float)(arg5), (float)(arg6));
        
        
        return ret_impl;
    }

    void CCOrbitCamera::sphericalRadius(PassRefPtr<Uint8Array> arg0, PassRefPtr<Uint8Array> arg1, PassRefPtr<Uint8Array> arg2) {

        ((cocos2d::CCOrbitCamera*)m_cocos2d_impl)->sphericalRadius((float*)(arg0.get()->data()), (float*)(arg1.get()->data()), (float*)(arg2.get()->data()));
    }

    void CCOrbitCamera::update(float arg0) {

        ((cocos2d::CCOrbitCamera*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCOrbitCamera::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) {

        cocos2d::CCOrbitCamera* ret_impl = cocos2d::CCOrbitCamera::create((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3), (float)(arg4), (float)(arg5), (float)(arg6));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCOrbitCamera)
        
    }
    cocos2d::CCOrbitCamera* CCOrbitCamera::getCocos2dImpl() {
        return (cocos2d::CCOrbitCamera*)m_cocos2d_impl;
    }


    CCOrbitCamera::CCOrbitCamera() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCOrbitCamera> CCOrbitCamera::create()
    {
        RefPtrWillBeRawPtr<CCOrbitCamera> ret = adoptRefWillBeNoop(new CCOrbitCamera());
        cocos2d::CCOrbitCamera* impl = new cocos2d::CCOrbitCamera();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCOrbitCamera::~CCOrbitCamera() {
    }
} // namespace blink
