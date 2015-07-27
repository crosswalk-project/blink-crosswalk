// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCMoveTo_h__
#define __CCMoveTo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCMoveTo;
}

namespace blink {

class CCMoveTo 
		:public CCMoveBy
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCMoveTo> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0, CCPoint* arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, CCPoint* arg1);
    cocos2d::CCMoveTo* getCocos2dImpl();
    ~CCMoveTo();
public:
    CCMoveTo ();
};

DEFINE_TYPE_CASTS(CCMoveTo, CCMoveBy, pCCMoveTo, true, true);

} // namespace blink

#endif
