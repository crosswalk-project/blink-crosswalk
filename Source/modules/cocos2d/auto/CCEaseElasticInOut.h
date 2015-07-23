// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseElasticInOut_h__
#define __CCEaseElasticInOut_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseElasticInOut;
}

namespace blink {

class CCEaseElasticInOut 
		:public CCEaseElastic
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseElasticInOut> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseElasticInOut* getCocos2dImpl();
    ~CCEaseElasticInOut();
public:
    CCEaseElasticInOut ();
};

DEFINE_TYPE_CASTS(CCEaseElasticInOut, CCEaseElastic, pCCEaseElasticInOut, true, true);

} // namespace blink

#endif
