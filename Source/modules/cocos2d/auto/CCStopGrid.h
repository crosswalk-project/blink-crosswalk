// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCStopGrid_h__
#define __CCStopGrid_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCStopGrid;
}

namespace blink {

class CCStopGrid 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCStopGrid> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCStopGrid* getCocos2dImpl();
    ~CCStopGrid();
public:
    CCStopGrid ();
};

DEFINE_TYPE_CASTS(CCStopGrid, CCActionInstant, pCCStopGrid, true, true);

} // namespace blink

#endif
