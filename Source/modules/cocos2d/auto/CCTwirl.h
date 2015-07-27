// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTwirl_h__
#define __CCTwirl_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTwirl;
}

namespace blink {

class CCTwirl 
		:public CCGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTwirl> create();
    
    void setAmplitudeRate(float arg0);
    
    bool initWithDuration(float arg0, CCSize* arg1, CCPoint* arg2, unsigned int arg3, float arg4);
    
    void update(float arg0);
    
    float getAmplitudeRate();
    
    void setAmplitude(float arg0);
    
    void setPositionInternal(CCPoint* arg0);
    
    float getAmplitude();
    
    PassRefPtrWillBeRawPtr<CCPoint> getPosition();
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, CCPoint* arg2, unsigned int arg3, float arg4);
    cocos2d::CCTwirl* getCocos2dImpl();
    ~CCTwirl();
public:
    CCTwirl ();
};

DEFINE_TYPE_CASTS(CCTwirl, CCGrid3DAction, pCCTwirl, true, true);

} // namespace blink

#endif
