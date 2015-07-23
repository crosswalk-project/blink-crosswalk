// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCCallFunc_h__
#define __CCCallFunc_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCCallFunc;
}

namespace blink {
class CallFuncCallback;

class CCCallFunc 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*);
    static PassRefPtrWillBeRawPtr<CCCallFunc> create();
    
    void execute();
    
    bool initWithTarget(CCObject* arg0);
    
    void update(float arg0);
    
    ScriptValue getTargetCallback(ScriptState* scriptState);
    
    int getScriptHandler();
    
    void setTargetCallback(CCObject* arg0);
    cocos2d::CCCallFunc* getCocos2dImpl();
    ~CCCallFunc();
    CCCallFunc ();
    void setCallback(CallFuncCallback* callback);
    void executeCallFuncActionEvent(CCNode* target);
private:
    Persistent<CallFuncCallback> m_callfunc_callback;
};

DEFINE_TYPE_CASTS(CCCallFunc, CCActionInstant, pCCCallFunc, true, true);

} // namespace blink

#endif
