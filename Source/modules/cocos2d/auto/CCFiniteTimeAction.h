// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFiniteTimeAction_h__
#define __CCFiniteTimeAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFiniteTimeAction;
}

namespace blink {

class CCFiniteTimeAction 
		:public CCAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFiniteTimeAction> create();
    
    void setDuration(float arg0);
    
    float getDuration();
    
    ScriptValue reverse(ScriptState* scriptState);
    cocos2d::CCFiniteTimeAction* getCocos2dImpl();
    ~CCFiniteTimeAction();
public:
    CCFiniteTimeAction ();
};

DEFINE_TYPE_CASTS(CCFiniteTimeAction, CCAction, pCCFiniteTimeAction, true, true);

} // namespace blink

#endif
