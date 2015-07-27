// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXObjectGroup_h__
#define __CCTMXObjectGroup_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXObjectGroup;
}

namespace blink {

class CCTMXObjectGroup : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXObjectGroup> create();
    
    void setPositionOffset(CCPoint* arg0);
    
    ScriptValue objectNamed(ScriptState* scriptState, String arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getPositionOffset();
    
    ScriptValue getObjects(ScriptState* scriptState);
    
    void setGroupName(String arg0);
    
    ScriptValue getProperties(ScriptState* scriptState);
    
    String getGroupName();
    
    void setProperties(CCDictionary* arg0);
    
    ScriptValue propertyNamed(ScriptState* scriptState, String arg0);
    
    void setObjects(CCArray* arg0);
    cocos2d::CCTMXObjectGroup* getCocos2dImpl();
    ~CCTMXObjectGroup();
public:
    CCTMXObjectGroup ();
};

DEFINE_TYPE_CASTS(CCTMXObjectGroup, CCObject, pCCTMXObjectGroup, true, true);

} // namespace blink

#endif
