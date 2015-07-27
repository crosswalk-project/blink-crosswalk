// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCActionEase_h__
#define __CCActionEase_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCActionEase;
}

namespace blink {

class CCActionEase 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCActionEase> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void stop();
    
    void update(float arg0);
    
    bool initWithAction(ScriptValue& arg0);
    
    ScriptValue getInnerAction(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCActionEase* getCocos2dImpl();
    ~CCActionEase();
public:
    CCActionEase ();
};

DEFINE_TYPE_CASTS(CCActionEase, CCActionInterval, pCCActionEase, true, true);

} // namespace blink

#endif
