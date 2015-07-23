// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCArmatureAnimation.h"

namespace blink {

    float CCArmatureAnimation::getSpeedScale() {

        float ret_impl = ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->getSpeedScale();
        
        
        return ret_impl;
    }

    void CCArmatureAnimation::pause() {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->pause();
    }

    void CCArmatureAnimation::setSpeedScale(float arg0) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->setSpeedScale((float)(arg0));
    }

    bool CCArmatureAnimation::init(CCArmature* arg0) {
        cocos2d::extension::CCArmature* _arg0 = (cocos2d::extension::CCArmature*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->init( _arg0);
        
        
        return ret_impl;
    }

    void CCArmatureAnimation::play(String arg0, int arg1, int arg2, int arg3, int arg4) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->play((char*)(arg0.utf8().data()), (int)(arg1), (int)(arg2), (int)(arg3), (int)(arg4));
    }

    void CCArmatureAnimation::gotoAndPause(int arg0) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->gotoAndPause((int)(arg0));
    }

    void CCArmatureAnimation::resume() {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->resume();
    }

    void CCArmatureAnimation::stop() {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->stop();
    }

    void CCArmatureAnimation::update(float arg0) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCArmatureAnimation::playWithArray(CCArray* arg0, int arg1, bool arg2) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->playWithArray( _arg0, (int)(arg1), (bool)(arg2));
    }

    void CCArmatureAnimation::playWithIndexArray(CCArray* arg0, int arg1, bool arg2) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->playWithIndexArray( _arg0, (int)(arg1), (bool)(arg2));
    }

    void CCArmatureAnimation::playWithIndex(int arg0, int arg1, int arg2, int arg3, int arg4) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->playWithIndex((int)(arg0), (int)(arg1), (int)(arg2), (int)(arg3), (int)(arg4));
    }

    String CCArmatureAnimation::getCurrentMovementID() {

        String ret_impl = String(((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->getCurrentMovementID().c_str());
        
        
        return ret_impl;
    }

    void CCArmatureAnimation::gotoAndPlay(int arg0) {

        ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->gotoAndPlay((int)(arg0));
    }

    int CCArmatureAnimation::getMovementCount() {

        int ret_impl = ((cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl)->getMovementCount();
        
        
        return ret_impl;
    }

    ScriptValue CCArmatureAnimation::createInternal(ScriptState* scriptState, CCArmature* arg0) {
        cocos2d::extension::CCArmature* _arg0 = (cocos2d::extension::CCArmature*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCArmatureAnimation* ret_impl = cocos2d::extension::CCArmatureAnimation::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArmatureAnimation)
        
    }
    cocos2d::extension::CCArmatureAnimation* CCArmatureAnimation::getCocos2dImpl() {
        return (cocos2d::extension::CCArmatureAnimation*)m_cocos2d_impl;
    }


    CCArmatureAnimation::CCArmatureAnimation() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCArmatureAnimation> CCArmatureAnimation::create()
    {
        RefPtrWillBeRawPtr<CCArmatureAnimation> ret = adoptRefWillBeNoop(new CCArmatureAnimation());
        cocos2d::extension::CCArmatureAnimation* impl = new cocos2d::extension::CCArmatureAnimation();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCArmatureAnimation::~CCArmatureAnimation() {
    }
} // namespace blink
