// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCActionManager_h__
#define __CCActionManager_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCActionManager;
}

namespace blink {

class CCActionManager : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCActionManager> create();
    
    ScriptValue getActionByTag(ScriptState* scriptState, unsigned int arg0, CCObject* arg1);
    
    void removeActionByTag(unsigned int arg0, CCObject* arg1);
    
    void removeAllActions();
    
    void addAction(ScriptValue& arg0, ScriptValue& arg1, bool arg2);
    
    void resumeTarget(CCObject* arg0);
    
    void pauseTarget(CCObject* arg0);
    
    void removeAllActionsFromTarget(CCObject* arg0);
    
    void resumeTargets(CCSet* arg0);
    
    void removeAction(ScriptValue& arg0);
    
    unsigned int numberOfRunningActionsInTarget(CCObject* arg0);
    
    ScriptValue pauseAllRunningActions(ScriptState* scriptState);
    cocos2d::CCActionManager* getCocos2dImpl();
    ~CCActionManager();
public:
    CCActionManager ();
};

DEFINE_TYPE_CASTS(CCActionManager, CCObject, pCCActionManager, true, true);

} // namespace blink

#endif
