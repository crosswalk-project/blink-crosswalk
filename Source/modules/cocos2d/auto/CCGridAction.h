// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCGridAction_h__
#define __CCGridAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCGridAction;
}

namespace blink {

class CCGridAction 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCGridAction> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue getGrid(ScriptState* scriptState);
    
    bool initWithDuration(float arg0, CCSize* arg1);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCSize* arg1);
    cocos2d::CCGridAction* getCocos2dImpl();
    ~CCGridAction();
public:
    CCGridAction ();
};

DEFINE_TYPE_CASTS(CCGridAction, CCActionInterval, pCCGridAction, true, true);

} // namespace blink

#endif
