// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEditBox_h__
#define __CCEditBox_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCEditBox;
    }
}

namespace blink {

class CCEditBox 
		:public CCControlButton
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEditBox> create();
    
    void setAnchorPoint(CCPoint* arg0);
    
    String getText();
    
    void setPlaceholderFontName(String arg0);
    
    String getPlaceHolder();
    
    void setFontName(String arg0);
    
    void setPlaceholderFontSize(int arg0);
    
    void setInputMode(int arg0);
    
    void setPlaceholderFontColor(ccColor3B* arg0);
    
    void setFontColor(ccColor3B* arg0);
    
    void setPlaceholderFont(String arg0, int arg1);
    
    void setFontSize(int arg0);
    
    bool initWithSizeAndBackgroundSprite(CCSize* arg0, CCScale9Sprite* arg1);
    
    void setPlaceHolder(String arg0);
    
    void setReturnType(int arg0);
    
    void setInputFlag(int arg0);
    
    int getMaxLength();
    
    void setText(String arg0);
    
    void setMaxLength(int arg0);
    
    void setFont(String arg0, int arg1);
    
    void setVisible(bool arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCSize* arg0, CCScale9Sprite* arg1, CCScale9Sprite* arg2, CCScale9Sprite* arg3);
    cocos2d::extension::CCEditBox* getCocos2dImpl();
    ~CCEditBox();
public:
    CCEditBox ();
};

DEFINE_TYPE_CASTS(CCEditBox, CCControlButton, pCCEditBox, true, true);

} // namespace blink

#endif
