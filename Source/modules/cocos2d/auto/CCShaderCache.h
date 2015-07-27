// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCShaderCache_h__
#define __CCShaderCache_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCShaderCache;
}

namespace blink {

class CCShaderCache : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCShaderCache> create();
    
    void reloadDefaultShaders();
    
    void addProgram(CCGLProgram* arg0, String arg1);
    
    ScriptValue getProgram(ScriptState* scriptState, String arg0);
    
    void loadDefaultShaders();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    
    static void purgeSharedShaderCache();
    cocos2d::CCShaderCache* getCocos2dImpl();
    ~CCShaderCache();
public:
    CCShaderCache ();
};

DEFINE_TYPE_CASTS(CCShaderCache, CCObject, pCCShaderCache, true, true);

} // namespace blink

#endif
