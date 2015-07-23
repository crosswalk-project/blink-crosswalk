// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCWavesTiles3D_h__
#define __CCWavesTiles3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCWavesTiles3D;
}

namespace blink {

class CCWavesTiles3D 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCWavesTiles3D> create();
    
    bool initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3);
    
    void update(float arg0);
    
    float getAmplitudeRate();
    
    void setAmplitude(float arg0);
    
    float getAmplitude();
    
    void setAmplitudeRate(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3);
    cocos2d::CCWavesTiles3D* getCocos2dImpl();
    ~CCWavesTiles3D();
public:
    CCWavesTiles3D ();
};

DEFINE_TYPE_CASTS(CCWavesTiles3D, CCTiledGrid3DAction, pCCWavesTiles3D, true, true);

} // namespace blink

#endif
