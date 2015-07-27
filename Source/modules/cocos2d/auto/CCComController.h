// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCComController_h__
#define __CCComController_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCComController;
    }
}

namespace blink {

class CCComController 
		:public CCComponent
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCComController> create();
    
    void setEnabled(bool arg0);
    
    bool isEnabled();
    
    void update(float arg0);
    
    bool init();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createInstance(ScriptState* scriptState);
    cocos2d::extension::CCComController* getCocos2dImpl();
    ~CCComController();
public:
    CCComController ();
};

DEFINE_TYPE_CASTS(CCComController, CCComponent, pCCComController, true, true);

} // namespace blink

#endif
