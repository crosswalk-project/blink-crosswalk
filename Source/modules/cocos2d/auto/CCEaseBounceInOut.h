// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseBounceInOut_h__
#define __CCEaseBounceInOut_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseBounceInOut;
}

namespace blink {

class CCEaseBounceInOut 
		:public CCEaseBounce
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseBounceInOut> create();
    
    ScriptValue reverse(ScriptState* scriptState);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCEaseBounceInOut* getCocos2dImpl();
    ~CCEaseBounceInOut();
public:
    CCEaseBounceInOut ();
};

DEFINE_TYPE_CASTS(CCEaseBounceInOut, CCEaseBounce, pCCEaseBounceInOut, true, true);

} // namespace blink

#endif
