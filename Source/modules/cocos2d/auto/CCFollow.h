// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFollow_h__
#define __CCFollow_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFollow;
}

namespace blink {

class CCFollow 
		:public CCAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFollow> create();
    
    bool initWithTarget(ScriptValue& arg0, CCRect* arg1);
    
    void stop();
    
    void setBoudarySet(bool arg0);
    
    void step(float arg0);
    
    bool isDone();
    
    bool isBoundarySet();
    
    static ScriptValue createInternal(ScriptState* scriptState, ScriptValue& arg0, CCRect* arg1);
    cocos2d::CCFollow* getCocos2dImpl();
    ~CCFollow();
public:
    CCFollow ();
};

DEFINE_TYPE_CASTS(CCFollow, CCAction, pCCFollow, true, true);

} // namespace blink

#endif
