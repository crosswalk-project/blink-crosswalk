// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseBounceOut_h__
#define __CCEaseBounceOut_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseBounceOut;
}

namespace blink {

class CCEaseBounceOut 
		:public CCEaseBounce
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseBounceOut> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0);
    cocos2d::CCEaseBounceOut* getCocos2dImpl();
    ~CCEaseBounceOut();
public:
    CCEaseBounceOut ();
};

DEFINE_TYPE_CASTS(CCEaseBounceOut, CCEaseBounce, pCCEaseBounceOut, true, true);

} // namespace blink

#endif
