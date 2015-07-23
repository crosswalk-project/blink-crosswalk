// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCGrid3DAction_h__
#define __CCGrid3DAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCGrid3DAction;
}

namespace blink {

class CCGrid3DAction 
		:public CCGridAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCGrid3DAction> create();
    
    ScriptValue getGrid(ScriptState* scriptState);
    cocos2d::CCGrid3DAction* getCocos2dImpl();
    ~CCGrid3DAction();
public:
    CCGrid3DAction ();
};

DEFINE_TYPE_CASTS(CCGrid3DAction, CCGridAction, pCCGrid3DAction, true, true);

} // namespace blink

#endif
