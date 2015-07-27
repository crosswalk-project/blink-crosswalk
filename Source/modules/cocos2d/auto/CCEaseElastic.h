// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseElastic_h__
#define __CCEaseElastic_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseElastic;
}

namespace blink {

class CCEaseElastic 
		:public CCActionEase
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseElastic> create();
    
    void setPeriod(float arg0);
    
    bool initWithAction(ScriptValue& arg0, float arg1);
    
    float getPeriod();
    
    ScriptValue reverse(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseElastic* getCocos2dImpl();
    ~CCEaseElastic();
public:
    CCEaseElastic ();
};

DEFINE_TYPE_CASTS(CCEaseElastic, CCActionEase, pCCEaseElastic, true, true);

} // namespace blink

#endif
