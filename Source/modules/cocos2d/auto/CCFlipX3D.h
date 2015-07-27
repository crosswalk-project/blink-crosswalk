// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFlipX3D_h__
#define __CCFlipX3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFlipX3D;
}

namespace blink {

class CCFlipX3D 
		:public CCGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFlipX3D> create();
    
    bool initWithSize(CCSize* arg0, float arg1);
    
    bool initWithDuration(float arg0);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0);
    cocos2d::CCFlipX3D* getCocos2dImpl();
    ~CCFlipX3D();
public:
    CCFlipX3D ();
};

DEFINE_TYPE_CASTS(CCFlipX3D, CCGrid3DAction, pCCFlipX3D, true, true);

} // namespace blink

#endif
