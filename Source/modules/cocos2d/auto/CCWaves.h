// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCWaves_h__
#define __CCWaves_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCWaves;
}

namespace blink {

class CCWaves 
		:public CCGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCWaves> create();
    
    bool initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3, bool arg4, bool arg5);
    
    void update(float arg0);
    
    float getAmplitudeRate();
    
    void setAmplitude(float arg0);
    
    float getAmplitude();
    
    void setAmplitudeRate(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3, bool arg4, bool arg5);
    cocos2d::CCWaves* getCocos2dImpl();
    ~CCWaves();
public:
    CCWaves ();
};

DEFINE_TYPE_CASTS(CCWaves, CCGrid3DAction, pCCWaves, true, true);

} // namespace blink

#endif
