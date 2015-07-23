// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLabelAtlas_h__
#define __CCLabelAtlas_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLabelAtlas;
}

namespace blink {

class CCLabelAtlas 
		:public CCAtlasNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLabelAtlas> create();
    
    void setString(String arg0);
    bool initWithString(String arg0, String arg1);
    bool initWithString(String arg0, String arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
    bool initWithString(String arg0, CCTexture2D* arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
    
    void updateAtlasValues();
    
    String getString();
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
    cocos2d::CCLabelAtlas* getCocos2dImpl();
    ~CCLabelAtlas();
public:
    CCLabelAtlas ();
};

DEFINE_TYPE_CASTS(CCLabelAtlas, CCAtlasNode, pCCLabelAtlas, true, true);

} // namespace blink

#endif
