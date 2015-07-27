// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCActionTween_h__
#define __CCActionTween_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCActionTween;
}

namespace blink {

class CCActionTween 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCActionTween> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void update(float arg0);
    
    bool initWithDuration(float arg0, String arg1, float arg2, float arg3);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, String arg1, float arg2, float arg3);
    cocos2d::CCActionTween* getCocos2dImpl();
    ~CCActionTween();
public:
    CCActionTween ();
};

DEFINE_TYPE_CASTS(CCActionTween, CCActionInterval, pCCActionTween, true, true);

} // namespace blink

#endif
