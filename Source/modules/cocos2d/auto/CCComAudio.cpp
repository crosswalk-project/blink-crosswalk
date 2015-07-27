// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCComAudio.h"

namespace blink {

    void CCComAudio::stopAllEffects() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->stopAllEffects();
    }

    bool CCComAudio::serialize(PassRefPtr<Uint8Array> arg0) {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->serialize((void*)(arg0.get()->data()));
        
        
        return ret_impl;
    }

    float CCComAudio::getEffectsVolume() {

        float ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->getEffectsVolume();
        
        
        return ret_impl;
    }

    void CCComAudio::stopEffect(unsigned int arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->stopEffect((unsigned int)(arg0));
    }

    float CCComAudio::getBackgroundMusicVolume() {

        float ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->getBackgroundMusicVolume();
        
        
        return ret_impl;
    }

    bool CCComAudio::willPlayBackgroundMusic() {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->willPlayBackgroundMusic();
        
        
        return ret_impl;
    }

    void CCComAudio::setBackgroundMusicVolume(float arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->setBackgroundMusicVolume((float)(arg0));
    }

    void CCComAudio::end() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->end();
    }

    bool CCComAudio::isEnabled() {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void CCComAudio::stopBackgroundMusic() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->stopBackgroundMusic();
    }

    void CCComAudio::stopBackgroundMusic(bool arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->stopBackgroundMusic((bool)(arg0));
    }

    void CCComAudio::pauseBackgroundMusic() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->pauseBackgroundMusic();
    }

    bool CCComAudio::isBackgroundMusicPlaying() {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->isBackgroundMusicPlaying();
        
        
        return ret_impl;
    }

    bool CCComAudio::init() {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    bool CCComAudio::isLoop() {

        bool ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->isLoop();
        
        
        return ret_impl;
    }

    void CCComAudio::pauseAllEffects() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->pauseAllEffects();
    }

    void CCComAudio::setEnabled(bool arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCComAudio::preloadBackgroundMusic(String arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->preloadBackgroundMusic((char*)(arg0.utf8().data()));
    }

    void CCComAudio::playBackgroundMusic(String arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playBackgroundMusic((char*)(arg0.utf8().data()));
    }

    void CCComAudio::playBackgroundMusic(String arg0, bool arg1) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playBackgroundMusic((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    void CCComAudio::playBackgroundMusic() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playBackgroundMusic();
    }

    unsigned int CCComAudio::playEffect(String arg0) {

        unsigned int ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playEffect((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    unsigned int CCComAudio::playEffect(String arg0, bool arg1) {

        unsigned int ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playEffect((char*)(arg0.utf8().data()), (bool)(arg1));
        
        
        return ret_impl;
    }

    unsigned int CCComAudio::playEffect() {

        unsigned int ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->playEffect();
        
        
        return ret_impl;
    }

    void CCComAudio::resumeAllEffects() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->resumeAllEffects();
    }

    void CCComAudio::setLoop(bool arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->setLoop((bool)(arg0));
    }

    void CCComAudio::unloadEffect(String arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->unloadEffect((char*)(arg0.utf8().data()));
    }

    void CCComAudio::rewindBackgroundMusic() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->rewindBackgroundMusic();
    }

    void CCComAudio::preloadEffect(String arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->preloadEffect((char*)(arg0.utf8().data()));
    }

    void CCComAudio::pauseEffect(unsigned int arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->pauseEffect((unsigned int)(arg0));
    }

    void CCComAudio::resumeBackgroundMusic() {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->resumeBackgroundMusic();
    }

    void CCComAudio::setFile(String arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->setFile((char*)(arg0.utf8().data()));
    }

    void CCComAudio::setEffectsVolume(float arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->setEffectsVolume((float)(arg0));
    }

    String CCComAudio::getFile() {

        const String ret_impl = ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->getFile();
        
        
        return ret_impl;
    }

    void CCComAudio::resumeEffect(unsigned int arg0) {

        ((cocos2d::extension::CCComAudio*)m_cocos2d_impl)->resumeEffect((unsigned int)(arg0));
    }

    ScriptValue CCComAudio::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCComAudio* ret_impl = cocos2d::extension::CCComAudio::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComAudio)
        
    }

    ScriptValue CCComAudio::createInstance(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = cocos2d::extension::CCComAudio::createInstance();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }
    cocos2d::extension::CCComAudio* CCComAudio::getCocos2dImpl() {
        return (cocos2d::extension::CCComAudio*)m_cocos2d_impl;
    }


    CCComAudio::CCComAudio() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCComAudio> CCComAudio::create()
    {
        RefPtrWillBeRawPtr<CCComAudio> ret = adoptRefWillBeNoop(new CCComAudio());
        return ret.release();
    }


    CCComAudio::~CCComAudio() {
    }
} // namespace blink
