// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAnimate_h__
#define __CCAnimate_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCAnimate;
}

namespace blink {

class CCAnimate 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAnimate> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue getAnimation(ScriptState* scriptState);
    
    void stop();
    
    void update(float arg0);
    
    bool initWithAnimation(CCAnimation* arg0);
    
    void setAnimation(CCAnimation* arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCAnimation* arg0);
    cocos2d::CCAnimate* getCocos2dImpl();
    ~CCAnimate();
public:
    CCAnimate ();
};

DEFINE_TYPE_CASTS(CCAnimate, CCActionInterval, pCCAnimate, true, true);

} // namespace blink

#endif
