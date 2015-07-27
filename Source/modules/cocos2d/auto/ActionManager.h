// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __ActionManager_h__
#define __ActionManager_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class ActionManager;
    }
}

namespace blink {

class ActionManager : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<ActionManager> create();
    ScriptValue playActionByName(ScriptState* scriptState, String arg0, String arg1, CCCallFunc* arg2);
    ScriptValue playActionByName(ScriptState* scriptState, String arg0, String arg1);
    
    ScriptValue getActionByName(ScriptState* scriptState, String arg0, String arg1);
    
    void releaseActions();
    
    static void purge();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::extension::ActionManager* getCocos2dImpl();
    ~ActionManager();
public:
    ActionManager ();
};

DEFINE_TYPE_CASTS(ActionManager, CCObject, pActionManager, true, true);

} // namespace blink

#endif
