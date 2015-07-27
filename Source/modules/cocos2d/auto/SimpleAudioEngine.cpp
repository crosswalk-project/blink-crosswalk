// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/SimpleAudioEngine.h"

namespace blink {

    void SimpleAudioEngine::stopAllEffects() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->stopAllEffects();
    }

    float SimpleAudioEngine::getMusicVolume() {

        float ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->getBackgroundMusicVolume();
        
        
        return ret_impl;
    }

    bool SimpleAudioEngine::isMusicPlaying() {

        bool ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->isBackgroundMusicPlaying();
        
        
        return ret_impl;
    }

    float SimpleAudioEngine::getEffectsVolume() {

        float ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->getEffectsVolume();
        
        
        return ret_impl;
    }

    void SimpleAudioEngine::setMusicVolume(float arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->setBackgroundMusicVolume((float)(arg0));
    }

    void SimpleAudioEngine::stopEffect(unsigned int arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->stopEffect((unsigned int)(arg0));
    }

    void SimpleAudioEngine::stopMusic() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->stopBackgroundMusic();
    }

    void SimpleAudioEngine::stopMusic(bool arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->stopBackgroundMusic((bool)(arg0));
    }

    void SimpleAudioEngine::playMusic(String arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->playBackgroundMusic((char*)(arg0.utf8().data()));
    }

    void SimpleAudioEngine::playMusic(String arg0, bool arg1) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->playBackgroundMusic((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    void SimpleAudioEngine::pauseAllEffects() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->pauseAllEffects();
    }

    void SimpleAudioEngine::preloadMusic(String arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->preloadBackgroundMusic((char*)(arg0.utf8().data()));
    }

    void SimpleAudioEngine::resumeMusic() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->resumeBackgroundMusic();
    }

    unsigned int SimpleAudioEngine::playEffect(String arg0) {

        unsigned int ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->playEffect((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    unsigned int SimpleAudioEngine::playEffect(String arg0, bool arg1) {

        unsigned int ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->playEffect((char*)(arg0.utf8().data()), (bool)(arg1));
        
        
        return ret_impl;
    }

    void SimpleAudioEngine::rewindMusic() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->rewindBackgroundMusic();
    }

    bool SimpleAudioEngine::willPlayMusic() {

        bool ret_impl = ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->willPlayBackgroundMusic();
        
        
        return ret_impl;
    }

    void SimpleAudioEngine::unloadEffect(String arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->unloadEffect((char*)(arg0.utf8().data()));
    }

    void SimpleAudioEngine::preloadEffect(String arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->preloadEffect((char*)(arg0.utf8().data()));
    }

    void SimpleAudioEngine::setEffectsVolume(float arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->setEffectsVolume((float)(arg0));
    }

    void SimpleAudioEngine::pauseEffect(unsigned int arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->pauseEffect((unsigned int)(arg0));
    }

    void SimpleAudioEngine::resumeAllEffects() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->resumeAllEffects();
    }

    void SimpleAudioEngine::pauseMusic() {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->pauseBackgroundMusic();
    }

    void SimpleAudioEngine::resumeEffect(unsigned int arg0) {

        ((CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl)->resumeEffect((unsigned int)(arg0));
    }

    void SimpleAudioEngine::end() {

        CocosDenshion::SimpleAudioEngine::end();
    }

    ScriptValue SimpleAudioEngine::getInstance(ScriptState* scriptState) {

        CocosDenshion::SimpleAudioEngine* ret_impl = CocosDenshion::SimpleAudioEngine::sharedEngine();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, SimpleAudioEngine)
        
    }
    CocosDenshion::SimpleAudioEngine* SimpleAudioEngine::getCocos2dImpl() {
        return (CocosDenshion::SimpleAudioEngine*)m_cocos2d_impl;
    }


    SimpleAudioEngine::SimpleAudioEngine() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<SimpleAudioEngine> SimpleAudioEngine::create()
    {
        RefPtrWillBeRawPtr<SimpleAudioEngine> ret = adoptRefWillBeNoop(new SimpleAudioEngine());
        return ret.release();
    }


    SimpleAudioEngine::~SimpleAudioEngine() {
    }
} // namespace blink
