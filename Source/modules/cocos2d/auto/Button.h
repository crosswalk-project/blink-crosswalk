// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __Button_h__
#define __Button_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class Button;
    }
}

namespace blink {

class Button 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<Button> create();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    String getTitleText();
    
    void setTitleFontSize(float arg0);
    
    String getDescription();
    
    void setScale9Enabled(bool arg0);
    
    void setTitleColor(ccColor3B* arg0);
    
    void ignoreContentAdaptWithSize(bool arg0);
    
    void setCapInsetsDisabledRenderer(CCRect* arg0);
    
    bool isFlipX();
    
    bool isFlipY();
    
    void loadTextureDisabled(String arg0, int arg1);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void setTitleText(String arg0);
    
    void setCapInsetsNormalRenderer(CCRect* arg0);
    
    void loadTexturePressed(String arg0, int arg1);
    
    void setFlipY(bool arg0);
    
    void setFlipX(bool arg0);
    
    void setTitleFontName(String arg0);
    
    void loadTextures(String arg0, String arg1, String arg2, int arg3);
    
    PassRefPtrWillBeRawPtr<ccColor3B> getTitleColor();
    
    void loadTextureNormal(String arg0, int arg1);
    
    void setColor(ccColor3B* arg0);
    
    void setCapInsetsPressedRenderer(CCRect* arg0);
    
    float getTitleFontSize();
    
    String getTitleFontName();
    
    void setCapInsets(CCRect* arg0);
    
    void setPressedActionEnabled(bool arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::Button* getCocos2dImpl();
    ~Button();
public:
    Button ();
};

DEFINE_TYPE_CASTS(Button, Widget, pButton, true, true);

} // namespace blink

#endif
