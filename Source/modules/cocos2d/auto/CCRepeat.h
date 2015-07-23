// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCRepeat_h__
#define __CCRepeat_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCRepeat;
}

namespace blink {

class CCRepeat 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCRepeat> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void setInnerAction(ScriptValue& arg0);
    
    void stop();
    
    void update(float arg0);
    
    bool initWithAction(ScriptValue& arg0, unsigned int arg1);
    
    ScriptValue getInnerAction(ScriptState* scriptState);
    
    bool isDone();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, unsigned int arg1);
    cocos2d::CCRepeat* getCocos2dImpl();
    ~CCRepeat();
public:
    CCRepeat ();
};

DEFINE_TYPE_CASTS(CCRepeat, CCActionInterval, pCCRepeat, true, true);

} // namespace blink

#endif
