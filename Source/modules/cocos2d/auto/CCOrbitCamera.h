// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCOrbitCamera_h__
#define __CCOrbitCamera_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCOrbitCamera;
}

namespace blink {

class CCOrbitCamera 
		:public CCActionCamera
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCOrbitCamera> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6);
    
    void sphericalRadius(PassRefPtr<Uint8Array> arg0, PassRefPtr<Uint8Array> arg1, PassRefPtr<Uint8Array> arg2);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6);
    cocos2d::CCOrbitCamera* getCocos2dImpl();
    ~CCOrbitCamera();
public:
    CCOrbitCamera ();
};

DEFINE_TYPE_CASTS(CCOrbitCamera, CCActionCamera, pCCOrbitCamera, true, true);

} // namespace blink

#endif
