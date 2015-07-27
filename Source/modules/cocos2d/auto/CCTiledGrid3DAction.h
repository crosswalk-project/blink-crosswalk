// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTiledGrid3DAction_h__
#define __CCTiledGrid3DAction_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTiledGrid3DAction;
}

namespace blink {

class CCTiledGrid3DAction 
		:public CCGridAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTiledGrid3DAction> create();
    
    ScriptValue getGrid(ScriptState* scriptState);
    cocos2d::CCTiledGrid3DAction* getCocos2dImpl();
    ~CCTiledGrid3DAction();
public:
    CCTiledGrid3DAction ();
};

DEFINE_TYPE_CASTS(CCTiledGrid3DAction, CCGridAction, pCCTiledGrid3DAction, true, true);

} // namespace blink

#endif
