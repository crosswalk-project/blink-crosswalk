// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseInOut_h__
#define __CCEaseInOut_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseInOut;
}

namespace blink {

class CCEaseInOut 
		:public CCEaseRateAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseInOut> create();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseInOut* getCocos2dImpl();
    ~CCEaseInOut();
public:
    CCEaseInOut ();
};

DEFINE_TYPE_CASTS(CCEaseInOut, CCEaseRateAction, pCCEaseInOut, true, true);

} // namespace blink

#endif
