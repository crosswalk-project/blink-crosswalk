// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCComRender_h__
#define __CCComRender_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCComRender;
    }
}

namespace blink {

class CCComRender 
		:public CCComponent
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCComRender> create();
    
    void setNode(CCNode* arg0);
    
    bool serialize(PassRefPtr<Uint8Array> arg0);
    
    ScriptValue getNode(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState);
    static ScriptValue createInternal(ScriptState* scriptState, CCNode* arg0, String arg1);
    
    static ScriptValue createInstance(ScriptState* scriptState);
    cocos2d::extension::CCComRender* getCocos2dImpl();
    ~CCComRender();
public:
    CCComRender ();
};

DEFINE_TYPE_CASTS(CCComRender, CCComponent, pCCComRender, true, true);

} // namespace blink

#endif
