// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCRepeatForever_h__
#define __CCRepeatForever_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCRepeatForever;
}

namespace blink {

class CCRepeatForever 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCRepeatForever> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void setInnerAction(ScriptValue& arg0);
    
    void step(float arg0);
    
    bool initWithAction(ScriptValue& arg0);
    
    ScriptValue getInnerAction(ScriptState* scriptState);
    
    bool isDone();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCRepeatForever* getCocos2dImpl();
    ~CCRepeatForever();
public:
    CCRepeatForever ();
};

DEFINE_TYPE_CASTS(CCRepeatForever, CCActionInterval, pCCRepeatForever, true, true);

} // namespace blink

#endif
