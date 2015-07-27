// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CheckBox_h__
#define __CheckBox_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CheckBox;
    }
}

namespace blink {

class CheckBox 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CheckBox> create();
    
    bool getSelectedState();
    
    void loadTextureBackGroundSelected(String arg0, int arg1);
    
    void loadTextureBackGroundDisabled(String arg0, int arg1);
    
    String getDescription();
    
    void setFlipY(bool arg0);
    
    void setFlipX(bool arg0);
    
    bool isFlipX();
    
    bool isFlipY();
    
    void loadTextureFrontCross(String arg0, int arg1);
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void loadTextures(String arg0, String arg1, String arg2, String arg3, String arg4, int arg5);
    
    void loadTextureBackGround(String arg0, int arg1);
    
    void setSelectedState(bool arg0);
    
    void loadTextureFrontCrossDisabled(String arg0, int arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::CheckBox* getCocos2dImpl();
    ~CheckBox();
public:
    CheckBox ();
};

DEFINE_TYPE_CASTS(CheckBox, Widget, pCheckBox, true, true);

} // namespace blink

#endif
