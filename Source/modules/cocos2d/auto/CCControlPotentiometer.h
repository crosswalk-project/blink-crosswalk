// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlPotentiometer_h__
#define __CCControlPotentiometer_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlPotentiometer;
    }
}

namespace blink {

class CCControlPotentiometer 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlPotentiometer> create();
    
    void setPreviousLocation(CCPoint* arg0);
    
    void setProgressTimer(CCProgressTimer* arg0);
    
    void potentiometerMoved(CCPoint* arg0);
    
    float getMinimumValue();
    
    void setThumbSprite(CCSprite* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getPreviousLocation();
    
    void setEnabled(bool arg0);
    
    void setValue(float arg0);
    
    void setMaximumValue(float arg0);
    
    void setMinimumValue(float arg0);
    
    void potentiometerEnded(CCPoint* arg0);
    
    float distanceBetweenPointAndPoint(CCPoint* arg0, CCPoint* arg1);
    
    ScriptValue getProgressTimer(ScriptState* scriptState);
    
    float getMaximumValue();
    
    float angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(CCPoint* arg0, CCPoint* arg1, CCPoint* arg2, CCPoint* arg3);
    
    bool isTouchInside(CCTouch* arg0);
    
    float getValue();
    
    void potentiometerBegan(CCPoint* arg0);
    
    ScriptValue getThumbSprite(ScriptState* scriptState);
    
    bool initWithTrackSprite_ProgressTimer_ThumbSprite(CCSprite* arg0, CCProgressTimer* arg1, CCSprite* arg2);
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, String arg2);
    cocos2d::extension::CCControlPotentiometer* getCocos2dImpl();
    ~CCControlPotentiometer();
public:
    CCControlPotentiometer ();
};

DEFINE_TYPE_CASTS(CCControlPotentiometer, CCControl, pCCControlPotentiometer, true, true);

} // namespace blink

#endif
