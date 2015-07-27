// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTween.h"

namespace blink {

    void CCTween::play(PassRefPtr<Uint8Array> arg0, int arg1, int arg2, int arg3, int arg4) {

        ((cocos2d::extension::CCTween*)m_cocos2d_impl)->play((cocos2d::extension::CCMovementBoneData*)(arg0.get()->data()), (int)(arg1), (int)(arg2), (int)(arg3), (int)(arg4));
    }

    void CCTween::gotoAndPause(int arg0) {

        ((cocos2d::extension::CCTween*)m_cocos2d_impl)->gotoAndPause((int)(arg0));
    }

    ScriptValue CCTween::getAnimation(ScriptState* scriptState) {

        cocos2d::extension::CCArmatureAnimation* ret_impl = ((cocos2d::extension::CCTween*)m_cocos2d_impl)->getAnimation();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmatureAnimation)
        
    }

    void CCTween::gotoAndPlay(int arg0) {

        ((cocos2d::extension::CCTween*)m_cocos2d_impl)->gotoAndPlay((int)(arg0));
    }

    bool CCTween::init(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCTween*)m_cocos2d_impl)->init( _arg0);
        
        
        return ret_impl;
    }

    void CCTween::setAnimation(CCArmatureAnimation* arg0) {
        cocos2d::extension::CCArmatureAnimation* _arg0 = (cocos2d::extension::CCArmatureAnimation*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCTween*)m_cocos2d_impl)->setAnimation( _arg0);
    }

    ScriptValue CCTween::createInternal(ScriptState* scriptState, CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCTween* ret_impl = cocos2d::extension::CCTween::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTween)
        
    }
    cocos2d::extension::CCTween* CCTween::getCocos2dImpl() {
        return (cocos2d::extension::CCTween*)m_cocos2d_impl;
    }


    CCTween::CCTween() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTween> CCTween::create()
    {
        RefPtrWillBeRawPtr<CCTween> ret = adoptRefWillBeNoop(new CCTween());
        cocos2d::extension::CCTween* impl = new cocos2d::extension::CCTween();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTween::~CCTween() {
    }
} // namespace blink
