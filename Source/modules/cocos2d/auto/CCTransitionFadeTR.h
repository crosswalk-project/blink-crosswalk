// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionFadeTR_h__
#define __CCTransitionFadeTR_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionFadeTR;
}

namespace blink {

class CCTransitionFadeTR 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionFadeTR> create();
    
    ScriptValue easeActionWithAction(ScriptState* scriptState, ScriptValue& arg0);
    
    ScriptValue actionWithSize(ScriptState* scriptState, CCSize* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionFadeTR* getCocos2dImpl();
    ~CCTransitionFadeTR();
public:
    CCTransitionFadeTR ();
};

DEFINE_TYPE_CASTS(CCTransitionFadeTR, CCTransitionScene, pCCTransitionFadeTR, true, true);

} // namespace blink

#endif
