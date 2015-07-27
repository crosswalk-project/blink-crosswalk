// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __SimpleAudioEngine_h__
#define __SimpleAudioEngine_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class SimpleAudioEngine;
    }
}

namespace blink {

class SimpleAudioEngine : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<SimpleAudioEngine> create();
    
    void stopAllEffects();
    
    float getMusicVolume();
    
    bool isMusicPlaying();
    
    float getEffectsVolume();
    
    void setMusicVolume(float arg0);
    
    void stopEffect(unsigned int arg0);
    void stopMusic();
    void stopMusic(bool arg0);
    void playMusic(String arg0);
    void playMusic(String arg0, bool arg1);
    
    void pauseAllEffects();
    
    void preloadMusic(String arg0);
    
    void resumeMusic();
    unsigned int playEffect(String arg0);
    unsigned int playEffect(String arg0, bool arg1);
    
    void rewindMusic();
    
    bool willPlayMusic();
    
    void unloadEffect(String arg0);
    
    void preloadEffect(String arg0);
    
    void setEffectsVolume(float arg0);
    
    void pauseEffect(unsigned int arg0);
    
    void resumeAllEffects();
    
    void pauseMusic();
    
    void resumeEffect(unsigned int arg0);
    
    static void end();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    CocosDenshion::SimpleAudioEngine* getCocos2dImpl();
    ~SimpleAudioEngine();
public:
    SimpleAudioEngine ();
};

DEFINE_TYPE_CASTS(SimpleAudioEngine, CCObject, pSimpleAudioEngine, true, true);

} // namespace blink

#endif
