// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCJumpTo_h__
#define __CCJumpTo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCJumpTo;
}

namespace blink {

class CCJumpTo 
		:public CCJumpBy
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCJumpTo> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1, float arg2, int arg3);
    cocos2d::CCJumpTo* getCocos2dImpl();
    ~CCJumpTo();
public:
    CCJumpTo ();
};

DEFINE_TYPE_CASTS(CCJumpTo, CCJumpBy, pCCJumpTo, true, true);

} // namespace blink

#endif
