// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseRateAction_h__
#define __CCEaseRateAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseRateAction;
}

namespace blink {

class CCEaseRateAction 
		:public CCActionEase
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseRateAction> create();
    
    void setRate(float arg0);
    
    bool initWithAction(ScriptValue& arg0, float arg1);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    float getRate();
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseRateAction* getCocos2dImpl();
    ~CCEaseRateAction();
public:
    CCEaseRateAction ();
};

DEFINE_TYPE_CASTS(CCEaseRateAction, CCActionEase, pCCEaseRateAction, true, true);

} // namespace blink

#endif
