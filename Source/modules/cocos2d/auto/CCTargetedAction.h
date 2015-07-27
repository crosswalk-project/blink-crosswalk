// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTargetedAction_h__
#define __CCTargetedAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTargetedAction;
}

namespace blink {

class CCTargetedAction 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTargetedAction> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void setForcedTarget(ScriptValue& arg0);
    
    bool initWithTarget(ScriptValue& arg0, ScriptValue& arg1);
    
    void stop();
    
    void update(float arg0);
    
    ScriptValue getForcedTarget(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, ScriptValue& arg1);
    cocos2d::CCTargetedAction* getCocos2dImpl();
    ~CCTargetedAction();
public:
    CCTargetedAction ();
};

DEFINE_TYPE_CASTS(CCTargetedAction, CCActionInterval, pCCTargetedAction, true, true);

} // namespace blink

#endif
