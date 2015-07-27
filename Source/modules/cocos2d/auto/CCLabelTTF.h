// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLabelTTF_h__
#define __CCLabelTTF_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLabelTTF;
}

namespace blink {

class CCLabelTTF 
		:public CCSprite
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLabelTTF> create();
    
    void enableShadow(CCSize* arg0, float arg1, float arg2, bool arg3);
    
    void setDimensions(CCSize* arg0);
    
    float getFontSize();
    
    String getString();
    
    void setTextDefinition(ccFontDefinition* arg0);
    
    void setFontName(String arg0);
    
    int getHorizontalAlignment();
    
    bool initWithStringAndTextDefinition(String arg0, ccFontDefinition* arg1);
    
    void setString(String arg0);
    bool initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4);
    bool initWithString(String arg0, String arg1, float arg2);
    bool initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5);
    
    bool init();
    
    void setFontFillColor(ccColor3B* arg0, bool arg1);
    
    void enableStroke(ccColor3B* arg0, float arg1, bool arg2);
    
    PassRefPtrWillBeRawPtr<CCSize> getDimensions();
    
    void setVerticalAlignment(int arg0);
    
    void setFontSize(float arg0);
    
    int getVerticalAlignment();
    
    PassRefPtrWillBeRawPtr<ccFontDefinition> getTextDefinition();
    
    String getFontName();
    
    void setHorizontalAlignment(int arg0);
    
    void disableShadow(bool arg0);
    
    void disableStroke(bool arg0);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, CCSize* arg3, int arg4);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5);
    static ScriptValue createInternal(ScriptState* scriptState);
    
    static ScriptValue createWithFontDefinition(ScriptState* scriptState, String arg0, ccFontDefinition* arg1);
    cocos2d::CCLabelTTF* getCocos2dImpl();
    ~CCLabelTTF();
public:
    CCLabelTTF ();
};

DEFINE_TYPE_CASTS(CCLabelTTF, CCSprite, pCCLabelTTF, true, true);

} // namespace blink

#endif
