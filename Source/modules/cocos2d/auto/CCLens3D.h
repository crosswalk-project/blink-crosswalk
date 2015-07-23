// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLens3D_h__
#define __CCLens3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLens3D;
}

namespace blink {

class CCLens3D 
		:public CCGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLens3D> create();
    
    void setConcave(bool arg0);
    
    bool initWithDuration(float arg0, CCSize* arg1, CCPoint* arg2, float arg3);
    
    void setLensEffect(float arg0);
    
    void update(float arg0);
    
    void setPositionInternal(CCPoint* arg0);
    
    float getLensEffect();
    
    PassRefPtrWillBeRawPtr<CCPoint> getPosition();
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, CCPoint* arg2, float arg3);
    cocos2d::CCLens3D* getCocos2dImpl();
    ~CCLens3D();
public:
    CCLens3D ();
};

DEFINE_TYPE_CASTS(CCLens3D, CCGrid3DAction, pCCLens3D, true, true);

} // namespace blink

#endif
