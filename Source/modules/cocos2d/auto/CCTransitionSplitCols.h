// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTransitionSplitCols_h__
#define __CCTransitionSplitCols_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTransitionSplitCols;
}

namespace blink {

class CCTransitionSplitCols 
		:public CCTransitionScene
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTransitionSplitCols> create();
    
    ScriptValue action(ScriptState* scriptState);
    
    ScriptValue easeActionWithAction(ScriptState* scriptState, ScriptValue& arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1);
    cocos2d::CCTransitionSplitCols* getCocos2dImpl();
    ~CCTransitionSplitCols();
public:
    CCTransitionSplitCols ();
};

DEFINE_TYPE_CASTS(CCTransitionSplitCols, CCTransitionScene, pCCTransitionSplitCols, true, true);

} // namespace blink

#endif
