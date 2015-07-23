// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCControlStepper_h__
#define __CCControlStepper_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCControlStepper;
    }
}

namespace blink {

class CCControlStepper 
		:public CCControl
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCControlStepper> create();
    
    void setMinusSprite(CCSprite* arg0);
    
    ScriptValue getMinusLabel(ScriptState* scriptState);
    
    void setWraps(bool arg0);
    
    bool isContinuous();
    
    ScriptValue getMinusSprite(ScriptState* scriptState);
    
    void updateLayoutUsingTouchLocation(CCPoint* arg0);
    
    void setValueWithSendingEvent(double arg0, bool arg1);
    
    ScriptValue getPlusLabel(ScriptState* scriptState);
    
    void stopAutorepeat();
    
    void setMaximumValue(double arg0);
    
    void setPlusSprite(CCSprite* arg0);
    
    void setMinusLabel(CCLabelTTF* arg0);
    
    void setValue(double arg0);
    
    void setStepValue(double arg0);
    
    ScriptValue getPlusSprite(ScriptState* scriptState);
    
    void update(float arg0);
    
    void setMinimumValue(double arg0);
    
    void startAutorepeat();
    
    bool initWithMinusSpriteAndPlusSprite(CCSprite* arg0, CCSprite* arg1);
    
    double getValue();
    
    void setPlusLabel(CCLabelTTF* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1);
    cocos2d::extension::CCControlStepper* getCocos2dImpl();
    ~CCControlStepper();
public:
    CCControlStepper ();
};

DEFINE_TYPE_CASTS(CCControlStepper, CCControl, pCCControlStepper, true, true);

} // namespace blink

#endif
