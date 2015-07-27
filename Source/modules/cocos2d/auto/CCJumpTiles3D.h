// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCJumpTiles3D_h__
#define __CCJumpTiles3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCJumpTiles3D;
}

namespace blink {

class CCJumpTiles3D 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCJumpTiles3D> create();
    
    bool initWithDuration(float arg0, CCSize* arg1, unsigned int arg2, float arg3);
    
    void update(float arg0);
    
    float getAmplitudeRate();
    
    void setAmplitude(float arg0);
    
    float getAmplitude();
    
    void setAmplitudeRate(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2, float arg3);
    cocos2d::CCJumpTiles3D* getCocos2dImpl();
    ~CCJumpTiles3D();
public:
    CCJumpTiles3D ();
};

DEFINE_TYPE_CASTS(CCJumpTiles3D, CCTiledGrid3DAction, pCCJumpTiles3D, true, true);

} // namespace blink

#endif
