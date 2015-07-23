// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCComAudio_h__
#define __CCComAudio_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCComAudio;
    }
}

namespace blink {

class CCComAudio 
		:public CCComponent
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCComAudio> create();
    
    void stopAllEffects();
    
    bool serialize(PassRefPtr<Uint8Array> arg0);
    
    float getEffectsVolume();
    
    void stopEffect(unsigned int arg0);
    
    float getBackgroundMusicVolume();
    
    bool willPlayBackgroundMusic();
    
    void setBackgroundMusicVolume(float arg0);
    
    void end();
    
    bool isEnabled();
    void stopBackgroundMusic();
    void stopBackgroundMusic(bool arg0);
    
    void pauseBackgroundMusic();
    
    bool isBackgroundMusicPlaying();
    
    bool init();
    
    bool isLoop();
    
    void pauseAllEffects();
    
    void setEnabled(bool arg0);
    
    void preloadBackgroundMusic(String arg0);
    void playBackgroundMusic(String arg0);
    void playBackgroundMusic(String arg0, bool arg1);
    void playBackgroundMusic();
    unsigned int playEffect(String arg0);
    unsigned int playEffect(String arg0, bool arg1);
    unsigned int playEffect();
    
    void resumeAllEffects();
    
    void setLoop(bool arg0);
    
    void unloadEffect(String arg0);
    
    void rewindBackgroundMusic();
    
    void preloadEffect(String arg0);
    
    void pauseEffect(unsigned int arg0);
    
    void resumeBackgroundMusic();
    
    void setFile(String arg0);
    
    void setEffectsVolume(float arg0);
    
    String getFile();
    
    void resumeEffect(unsigned int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createInstance(ScriptState* scriptState);
    cocos2d::extension::CCComAudio* getCocos2dImpl();
    ~CCComAudio();
public:
    CCComAudio ();
};

DEFINE_TYPE_CASTS(CCComAudio, CCComponent, pCCComAudio, true, true);

} // namespace blink

#endif
