// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAnimation_h__
#define __CCAnimation_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCAnimation;
    class CCArray;
}

namespace blink {

class CCAnimation : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAnimation> create();
    
    unsigned int getLoops();
    
    void setFrames(CCArray* arg0);
    
    ScriptValue getFrames(ScriptState* scriptState);
    
    void addSpriteFrame(ScriptValue& arg0);
    
    void setRestoreOriginalFrame(bool arg0);
    
    void setDelayPerUnit(float arg0);
    
    bool initWithAnimationFrames(CCArray* arg0, float arg1, unsigned int arg2);
    
    bool initWithAnimationFrames (const Vector<ScriptValue>& frames, float delay, unsigned int loops);

    bool init();
    
    bool initWithSpriteFrames(CCArray* arg0, float arg1);
    
    bool initWithSpriteFrames(const Vector<ScriptValue>& frames, float arg1);

    void setLoops(unsigned int arg0);
    
    void addSpriteFrameWithFile(String arg0);
    
    float getTotalDelayUnits();
    
    float getDelayPerUnit();
    
    bool getRestoreOriginalFrame();
    
    float getDuration();
    
    void addSpriteFrameWithTexture(CCTexture2D* arg0, CCRect* arg1);
    cocos2d::CCAnimation* getCocos2dImpl();
protected:
    static void jsArrayToSpriteFrameCCArray(const Vector<ScriptValue>& frames, cocos2d::CCArray& framesArray);
    static void jsArrayToAnimationFrameCCArray(const Vector<ScriptValue>& frames, cocos2d::CCArray& framesArray);
public:
    CCAnimation ();
};

DEFINE_TYPE_CASTS(CCAnimation, CCObject, pCCAnimation, true, true);

} // namespace blink

#endif
