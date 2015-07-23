// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCComponent_h__
#define __CCComponent_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCComponent;
}

namespace blink {

class CCComponent : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCComponent> create();
    
    void setEnabled(bool arg0);
    
    void setName(String arg0);
    
    bool isEnabled();
    
    void update(float arg0);
    
    ScriptValue getOwner(ScriptState* scriptState);
    
    bool init();
    
    void setOwner(ScriptValue& arg0);
    
    String getName();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCComponent* getCocos2dImpl();
    ~CCComponent();
public:
    CCComponent ();
};

DEFINE_TYPE_CASTS(CCComponent, CCObject, pCCComponent, true, true);

} // namespace blink

#endif
