// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCComAttribute_h__
#define __CCComAttribute_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCComAttribute;
    }
}

namespace blink {

class CCComAttribute 
		:public CCComponent
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCComAttribute> create();
    
    float getFloat(String arg0, float arg1);
    
    bool getBool(String arg0, bool arg1);
    
    void setFloat(String arg0, float arg1);
    
    void setCString(String arg0, String arg1);
    
    String getCString(String arg0, String arg1);
    
    bool serialize(PassRefPtr<Uint8Array> arg0);
    
    void setInt(String arg0, int arg1);
    
    bool parse(String arg0);
    
    int getInt(String arg0, int arg1);
    
    bool init();
    
    void setBool(String arg0, bool arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createInstance(ScriptState* scriptState);
    cocos2d::extension::CCComAttribute* getCocos2dImpl();
    ~CCComAttribute();
public:
    CCComAttribute ();
};

DEFINE_TYPE_CASTS(CCComAttribute, CCComponent, pCCComAttribute, true, true);

} // namespace blink

#endif
