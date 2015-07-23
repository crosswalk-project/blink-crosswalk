// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseElasticOut_h__
#define __CCEaseElasticOut_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseElasticOut;
}

namespace blink {

class CCEaseElasticOut 
		:public CCEaseElastic
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseElasticOut> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseElasticOut* getCocos2dImpl();
    ~CCEaseElasticOut();
public:
    CCEaseElasticOut ();
};

DEFINE_TYPE_CASTS(CCEaseElasticOut, CCEaseElastic, pCCEaseElasticOut, true, true);

} // namespace blink

#endif
