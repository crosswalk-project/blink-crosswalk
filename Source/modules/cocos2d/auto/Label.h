// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __Label_h__
#define __Label_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class Label;
    }
}

namespace blink {

class Label 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<Label> create();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    String getStringValue();
    
    String getDescription();
    
    void setScale(float arg0);
    
    void setTextVerticalAlignment(int arg0);
    
    void setFontName(String arg0);
    
    void setTouchScaleChangeEnabled(bool arg0);
    
    bool isFlipX();
    
    bool isFlipY();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    bool isTouchScaleChangeEnabled();
    
    void setTextAreaSize(CCSize* arg0);
    
    int getStringLength();
    
    void setScaleY(float arg0);
    
    void setScaleX(float arg0);
    
    void setFlipY(bool arg0);
    
    void setFlipX(bool arg0);
    
    void setFontSize(int arg0);
    
    void setText(String arg0);
    
    void setTextHorizontalAlignment(int arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::Label* getCocos2dImpl();
    ~Label();
public:
    Label ();
};

DEFINE_TYPE_CASTS(Label, Widget, pLabel, true, true);

} // namespace blink

#endif
