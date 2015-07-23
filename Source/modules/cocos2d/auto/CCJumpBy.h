// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCJumpBy_h__
#define __CCJumpBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCJumpBy;
}

namespace blink {

class CCJumpBy 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCJumpBy> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    bool initWithDuration(float arg0, CCPoint* arg1, float arg2, unsigned int arg3);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1, float arg2, unsigned int arg3);
    cocos2d::CCJumpBy* getCocos2dImpl();
    ~CCJumpBy();
public:
    CCJumpBy ();
};

DEFINE_TYPE_CASTS(CCJumpBy, CCActionInterval, pCCJumpBy, true, true);

} // namespace blink

#endif
