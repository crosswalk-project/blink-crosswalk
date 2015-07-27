// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCMotionStreak.h"

namespace blink {

    void CCMotionStreak::reset() {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->reset();
    }

    void CCMotionStreak::draw() {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->draw();
    }

    void CCMotionStreak::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setTexture( _arg0);
    }

    bool CCMotionStreak::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    ScriptValue CCMotionStreak::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCMotionStreak::tintWithColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->tintWithColor( *_arg0);
    }

    void CCMotionStreak::update(float arg0) {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCMotionStreak::setOpacity(unsigned char arg0) {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    bool CCMotionStreak::initWithFade(float arg0, float arg1, float arg2, ccColor3B* arg3, CCTexture2D* arg4) {
        cocos2d::ccColor3B* _arg3 = (cocos2d::ccColor3B*)(arg3->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg4 = (cocos2d::CCTexture2D*)(arg4->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->initWithFade((float)(arg0), (float)(arg1), (float)(arg2),  *_arg3,  _arg4);
        
        
        return ret_impl;
    }

    bool CCMotionStreak::initWithFade(float arg0, float arg1, float arg2, ccColor3B* arg3, String arg4) {
        cocos2d::ccColor3B* _arg3 = (cocos2d::ccColor3B*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->initWithFade((float)(arg0), (float)(arg1), (float)(arg2),  *_arg3, (char*)(arg4.utf8().data()));
        
        
        return ret_impl;
    }

    void CCMotionStreak::setPositionInternal(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setPosition( *_arg0);
    }

    void CCMotionStreak::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    unsigned char CCMotionStreak::getOpacity() {

        unsigned char ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    void CCMotionStreak::setStartingPositionInitialized(bool arg0) {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setStartingPositionInitialized((bool)(arg0));
    }

    void CCMotionStreak::setFastMode(bool arg0) {

        ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->setFastMode((bool)(arg0));
    }

    bool CCMotionStreak::isStartingPositionInitialized() {

        bool ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->isStartingPositionInitialized();
        
        
        return ret_impl;
    }

    bool CCMotionStreak::isFastMode() {

        bool ret_impl = ((cocos2d::CCMotionStreak*)m_cocos2d_impl)->isFastMode();
        
        
        return ret_impl;
    }
    ScriptValue CCMotionStreak::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, ccColor3B* arg3, CCTexture2D* arg4) {
        cocos2d::ccColor3B* _arg3 = (cocos2d::ccColor3B*)(arg3->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg4 = (cocos2d::CCTexture2D*)(arg4->getCocos2dImpl());

        cocos2d::CCMotionStreak* ret_impl = cocos2d::CCMotionStreak::create((float)(arg0), (float)(arg1), (float)(arg2),  *_arg3,  _arg4);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCMotionStreak)
        
    }
    ScriptValue CCMotionStreak::createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, ccColor3B* arg3, String arg4) {
        cocos2d::ccColor3B* _arg3 = (cocos2d::ccColor3B*)(arg3->getCocos2dImpl());

        cocos2d::CCMotionStreak* ret_impl = cocos2d::CCMotionStreak::create((float)(arg0), (float)(arg1), (float)(arg2),  *_arg3, (char*)(arg4.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCMotionStreak)
        
    }
    cocos2d::CCMotionStreak* CCMotionStreak::getCocos2dImpl() {
        return (cocos2d::CCMotionStreak*)m_cocos2d_impl;
    }


    CCMotionStreak::CCMotionStreak() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCMotionStreak> CCMotionStreak::create()
    {
        RefPtrWillBeRawPtr<CCMotionStreak> ret = adoptRefWillBeNoop(new CCMotionStreak());
        cocos2d::CCMotionStreak* impl = new cocos2d::CCMotionStreak();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCMotionStreak::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCMotionStreak::~CCMotionStreak() {
    }
} // namespace blink
