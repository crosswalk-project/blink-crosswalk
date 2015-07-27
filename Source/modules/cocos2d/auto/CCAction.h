// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAction_h__
#define __CCAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCAction;
}

namespace blink {

class CCAction : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAction> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void setOriginalTarget(ScriptValue& arg0);
    
    void setTarget(ScriptValue& arg0);
    
    ScriptValue getOriginalTarget(ScriptState* scriptState);
    
    void stop();
    
    void update(float arg0);
    
    ScriptValue getTarget(ScriptState* scriptState);
    
    void step(float arg0);
    
    void setTag(int arg0);
    
    int getTag();
    
    bool isDone();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCAction* getCocos2dImpl();
    ~CCAction();
public:
    CCAction ();
};

DEFINE_TYPE_CASTS(CCAction, CCObject, pCCAction, true, true);

} // namespace blink

#endif
