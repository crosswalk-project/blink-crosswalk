// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __TextField_h__
#define __TextField_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class TextField;
    }
}

namespace blink {

class TextField 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<TextField> create();
    
    void setAttachWithIME(bool arg0);
    
    String getStringValue();
    
    String getDescription();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    bool getDeleteBackward();
    
    bool getAttachWithIME();
    
    void setFontName(String arg0);
    
    bool getInsertText();
    
    void initRenderer();
    
    bool getDetachWithIME();
    
    bool init();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void didNotSelectSelf();
    
    bool isPasswordEnabled();
    
    void attachWithIME();
    
    void setPasswordEnabled(bool arg0);
    
    void update(float arg0);
    
    void setMaxLengthEnabled(bool arg0);
    
    void setPasswordStyleText(String arg0);
    
    void setFontSize(int arg0);
    
    void setPlaceHolder(String arg0);
    
    int getMaxLength();
    
    bool isMaxLengthEnabled();
    
    void setDetachWithIME(bool arg0);
    
    void setText(String arg0);
    
    void setInsertText(bool arg0);
    
    void setMaxLength(int arg0);
    
    void setTouchSize(CCSize* arg0);
    
    void setDeleteBackward(bool arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::TextField* getCocos2dImpl();
    ~TextField();
public:
    TextField ();
};

DEFINE_TYPE_CASTS(TextField, Widget, pTextField, true, true);

} // namespace blink

#endif
