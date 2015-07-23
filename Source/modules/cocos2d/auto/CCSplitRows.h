// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSplitRows_h__
#define __CCSplitRows_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSplitRows;
}

namespace blink {

class CCSplitRows 
		:public CCTiledGrid3DAction
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSplitRows> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    bool initWithDuration(float arg0, unsigned int arg1);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, unsigned int arg1);
    cocos2d::CCSplitRows* getCocos2dImpl();
    ~CCSplitRows();
public:
    CCSplitRows ();
};

DEFINE_TYPE_CASTS(CCSplitRows, CCTiledGrid3DAction, pCCSplitRows, true, true);

} // namespace blink

#endif
