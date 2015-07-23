// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSpeed_h__
#define __CCSpeed_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSpeed;
}

namespace blink {

class CCSpeed 
		:public CCAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSpeed> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void setInnerAction(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void stop();
    
    void step(float arg0);
    
    void setSpeed(float arg0);
    
    bool initWithAction(ScriptValue& arg0, float arg1);
    
    ScriptValue getInnerAction(ScriptState* scriptState);
    
    bool isDone();
    
    float getSpeed();
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCSpeed* getCocos2dImpl();
    ~CCSpeed();
public:
    CCSpeed ();
};

DEFINE_TYPE_CASTS(CCSpeed, CCAction, pCCSpeed, true, true);

} // namespace blink

#endif
