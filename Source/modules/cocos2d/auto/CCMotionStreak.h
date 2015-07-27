// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMotionStreak_h__
#define __CCMotionStreak_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMotionStreak;
}

namespace blink {

class CCMotionStreak 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMotionStreak> create();
    
    void reset();
    
    void draw();
    
    void setTexture(CCTexture2D* arg0);
    
    bool isOpacityModifyRGB();
    
    ScriptValue getTexture(ScriptState* scriptState);
    
    void tintWithColor(ccColor3B* arg0);
    
    void update(float arg0);
    
    void setOpacity(unsigned char arg0);
    bool initWithFade(float arg0, float arg1, float arg2, ccColor3B* arg3, CCTexture2D* arg4);
    bool initWithFade(float arg0, float arg1, float arg2, ccColor3B* arg3, String arg4);
    
    void setPositionInternal(CCPoint* arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    unsigned char getOpacity();
    
    void setStartingPositionInitialized(bool arg0);
    
    void setFastMode(bool arg0);
    
    bool isStartingPositionInitialized();
    
    bool isFastMode();
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, ccColor3B* arg3, CCTexture2D* arg4);
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, ccColor3B* arg3, String arg4);
    cocos2d::CCMotionStreak* getCocos2dImpl();
    ~CCMotionStreak();
public:
    CCMotionStreak ();
};

DEFINE_TYPE_CASTS(CCMotionStreak, CCNodeRGBA, pCCMotionStreak, true, true);

} // namespace blink

#endif
