// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCProgressTimer_h__
#define __CCProgressTimer_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCProgressTimer;
}

namespace blink {

class CCProgressTimer 
		:public CCNodeRGBA
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCProgressTimer> create();
    
    void setReverseProgress(bool arg0);
    
    void draw();
    
    bool isReverseDirection();
    
    void setBarChangeRate(CCPoint* arg0);
    
    void setColor(ccColor3B* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getBarChangeRate();
    
    float getPercentage();
    
    void setSprite(ScriptValue& arg0);
    
    int getType();
    
    void setOpacity(unsigned char arg0);
    
    ScriptValue getSprite(ScriptState* scriptState);
    
    void setMidpoint(CCPoint* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getMidpoint();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    
    unsigned char getOpacity();
    
    void setReverseDirection(bool arg0);
    
    bool initWithSprite(ScriptValue& arg0);
    
    void setPercentage(float arg0);
    
    void setType(int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCProgressTimer* getCocos2dImpl();
    ~CCProgressTimer();
public:
    CCProgressTimer ();
};

DEFINE_TYPE_CASTS(CCProgressTimer, CCNodeRGBA, pCCProgressTimer, true, true);

} // namespace blink

#endif
