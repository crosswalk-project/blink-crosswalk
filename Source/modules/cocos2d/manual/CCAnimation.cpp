// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCAnimation.h"

namespace blink {

    unsigned int CCAnimation::getLoops() {

        unsigned int ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getLoops();
        
        
        return ret_impl;
    }

    void CCAnimation::setFrames(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->setFrames( _arg0);
    }

    ScriptValue CCAnimation::getFrames(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getFrames();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    void CCAnimation::addSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->addSpriteFrame( _arg0);
    }

    void CCAnimation::setRestoreOriginalFrame(bool arg0) {

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->setRestoreOriginalFrame((bool)(arg0));
    }

    void CCAnimation::setDelayPerUnit(float arg0) {

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->setDelayPerUnit((float)(arg0));
    }

    bool CCAnimation::initWithAnimationFrames(CCArray* arg0, float arg1, unsigned int arg2) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->initWithAnimationFrames( _arg0, (float)(arg1), (unsigned int)(arg2));
        
        
        return ret_impl;
    }

    bool CCAnimation::init() {

        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCAnimation::initWithSpriteFrames(CCArray* arg0, float arg1) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->initWithSpriteFrames( _arg0, (float)(arg1));
        
        
        return ret_impl;
    }

    void CCAnimation::setLoops(unsigned int arg0) {

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->setLoops((unsigned int)(arg0));
    }

    void CCAnimation::addSpriteFrameWithFile(String arg0) {

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->addSpriteFrameWithFileName((char*)(arg0.utf8().data()));
    }

    float CCAnimation::getTotalDelayUnits() {

        float ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getTotalDelayUnits();
        
        
        return ret_impl;
    }

    float CCAnimation::getDelayPerUnit() {

        float ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getDelayPerUnit();
        
        
        return ret_impl;
    }

    bool CCAnimation::getRestoreOriginalFrame() {

        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getRestoreOriginalFrame();
        
        
        return ret_impl;
    }

    float CCAnimation::getDuration() {

        float ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->getDuration();
        
        
        return ret_impl;
    }

    void CCAnimation::addSpriteFrameWithTexture(CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        ((cocos2d::CCAnimation*)m_cocos2d_impl)->addSpriteFrameWithTexture( _arg0,  *_arg1);
    }
    cocos2d::CCAnimation* CCAnimation::getCocos2dImpl() {
        return (cocos2d::CCAnimation*)m_cocos2d_impl;
    }


    CCAnimation::CCAnimation() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAnimation> CCAnimation::create()
    {
        RefPtrWillBeRawPtr<CCAnimation> ret = adoptRefWillBeNoop(new CCAnimation());
        cocos2d::CCAnimation* impl = new cocos2d::CCAnimation();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    bool CCAnimation::initWithAnimationFrames (const Vector<ScriptValue>& frames, float delay, unsigned int loops){
        cocos2d::CCArray array;
        jsArrayToAnimationFrameCCArray(frames, array);
        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->initWithAnimationFrames(&array, delay, (unsigned int)loops);
        return ret_impl;
    }

    bool CCAnimation::initWithSpriteFrames(const Vector<ScriptValue>& frames, float arg1){
        cocos2d::CCArray array;
        jsArrayToSpriteFrameCCArray(frames, array);
        bool ret_impl = ((cocos2d::CCAnimation*)m_cocos2d_impl)->initWithSpriteFrames(&array, arg1);
        return ret_impl;
    }

    void CCAnimation:: jsArrayToSpriteFrameCCArray(const Vector<ScriptValue>& frames, cocos2d::CCArray& framesArray){
       size_t size = frames.size();
       framesArray.init();
       for (size_t i = 0; i < size; i++) {
         ScriptValue arg_wrapper = frames.at(i);
         SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg_wrapper, arg);
         cocos2d::CCSpriteFrame* _arg = (cocos2d::CCSpriteFrame*)(arg->getCocos2dImpl());
         framesArray.addObject(_arg);
       }
    }

    void CCAnimation:: jsArrayToAnimationFrameCCArray(const Vector<ScriptValue>& frames, cocos2d::CCArray& framesArray){
       size_t size = frames.size();
       framesArray.init();
       for (size_t i = 0; i < size; i++) {
         ScriptValue arg_wrapper = frames.at(i);
         SCRIPT_VALUE_WRAPPER(CCAnimationFrame, arg_wrapper, arg);
         cocos2d::CCAnimationFrame* _arg = (cocos2d::CCAnimationFrame*)(arg->getCocos2dImpl());
         framesArray.addObject(_arg);
       }
    }

} // namespace blink
