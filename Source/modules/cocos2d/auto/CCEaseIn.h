// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEaseIn_h__
#define __CCEaseIn_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEaseIn;
}

namespace blink {

class CCEaseIn 
		:public CCEaseRateAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEaseIn> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, float arg1);
    cocos2d::CCEaseIn* getCocos2dImpl();
    ~CCEaseIn();
public:
    CCEaseIn ();
};

DEFINE_TYPE_CASTS(CCEaseIn, CCEaseRateAction, pCCEaseIn, true, true);

} // namespace blink

#endif
