// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCShaky3D_h__
#define __CCShaky3D_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCShaky3D;
}

namespace blink {

class CCShaky3D 
		:public CCGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCShaky3D> create();
    
    bool initWithDuration(float arg0, CCSize* arg1, int arg2, bool arg3);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, int arg2, bool arg3);
    cocos2d::CCShaky3D* getCocos2dImpl();
    ~CCShaky3D();
public:
    CCShaky3D ();
};

DEFINE_TYPE_CASTS(CCShaky3D, CCGrid3DAction, pCCShaky3D, true, true);

} // namespace blink

#endif
