// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCLabelBMFont_h__
#define __CCLabelBMFont_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCLabelBMFont;
}

namespace blink {

class CCLabelBMFont 
		:public CCSpriteBatchNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCLabelBMFont> create();
    
    void createFontChars();
    
    String getString();
    
    void setScale(float arg0);
    
    void setOpacity(unsigned char arg0);
    
    void setCascadeOpacityEnabled(bool arg0);
    
    String getFntFile();
    
    void updateLabel();
    
    void setWidth(float arg0);
    
    bool isOpacityModifyRGB();
    
    bool isCascadeOpacityEnabled();
    void setString(String arg0, bool arg1);
    void setString(String arg0);
    
    bool initWithString(String arg0, String arg1, float arg2, int arg3, CCPoint* arg4);
    
    void setCascadeColorEnabled(bool arg0);
    
    void setOpacityModifyRGB(bool arg0);
    
    void updateDisplayedOpacity(unsigned char arg0);
    
    bool init();
    
    void setFntFile(String arg0);
    
    unsigned char getOpacity();
    
    void setLineBreakWithoutSpace(bool arg0);
    
    void setScaleY(float arg0);
    
    void setScaleX(float arg0);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getColor();
    
    unsigned char getDisplayedOpacity();
    
    bool isCascadeColorEnabled();
    
    void setColor(ccColor3B* arg0);
    
    void setCString(String arg0);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getDisplayedColor();
    
    void updateDisplayedColor(ccColor3B* arg0);
    
    void setAlignment(int arg0);
    
    static void purgeCachedData();
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, int arg3);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2, int arg3, CCPoint* arg4);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, float arg2);
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1);
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCLabelBMFont* getCocos2dImpl();
    ~CCLabelBMFont();
public:
    CCLabelBMFont ();
};

DEFINE_TYPE_CASTS(CCLabelBMFont, CCSpriteBatchNode, pCCLabelBMFont, true, true);

} // namespace blink

#endif
