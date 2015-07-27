// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXLayerInfo_h__
#define __CCTMXLayerInfo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXLayerInfo;
}

namespace blink {

class CCTMXLayerInfo : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXLayerInfo> create();
    
    void setProperties(CCDictionary* arg0);
    
    ScriptValue getProperties(ScriptState* scriptState);
    cocos2d::CCTMXLayerInfo* getCocos2dImpl();
    ~CCTMXLayerInfo();
public:
    CCTMXLayerInfo ();
};

DEFINE_TYPE_CASTS(CCTMXLayerInfo, CCObject, pCCTMXLayerInfo, true, true);

} // namespace blink

#endif
