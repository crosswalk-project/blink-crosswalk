// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTextFieldTTF_h__
#define __CCTextFieldTTF_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTextFieldTTF;
}

namespace blink {

class CCTextFieldTTF 
		:public CCLabelTTF
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTextFieldTTF> create();
    
    int getCharCount();
    
    void setSecureTextEntry(bool arg0);
    
    String getString();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColorSpaceHolder();
    bool initWithPlaceHolder(String arg0, String arg1, float arg2);
    bool initWithPlaceHolder(String arg0, CCSize* arg1, int arg2, String arg3, float arg4);
    
    String getPlaceHolder();
    
    void setColorSpaceHolder(ccColor3B* arg0);
    
    bool detachWithIME();
    
    void setPlaceHolder(String arg0);
    
    bool isSecureTextEntry();
    
    void setString(String arg0);
    
    bool attachWithIME();
    static ScriptValue textFieldWithPlaceHolder(ScriptState* scriptState, String arg0, String arg1, float arg2);
    static ScriptValue textFieldWithPlaceHolder(ScriptState* scriptState, String arg0, CCSize* arg1, int arg2, String arg3, float arg4);
    cocos2d::CCTextFieldTTF* getCocos2dImpl();
    ~CCTextFieldTTF();
public:
    CCTextFieldTTF ();
};

DEFINE_TYPE_CASTS(CCTextFieldTTF, CCLabelTTF, pCCTextFieldTTF, true, true);

} // namespace blink

#endif
