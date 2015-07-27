// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCActionInterval_h__
#define __CCActionInterval_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCActionInterval;
}

namespace blink {

class CCActionInterval 
		:public CCFiniteTimeAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCActionInterval> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0);
    
    void setAmplitudeRate(float arg0);
    
    float getAmplitudeRate();
    
    void step(float arg0);
    
    float getElapsed();
    
    bool isDone();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0);
    cocos2d::CCActionInterval* getCocos2dImpl();
    ~CCActionInterval();
public:
    CCActionInterval ();
};

DEFINE_TYPE_CASTS(CCActionInterval, CCFiniteTimeAction, pCCActionInterval, true, true);

} // namespace blink

#endif
