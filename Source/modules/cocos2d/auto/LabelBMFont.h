// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __LabelBMFont_h__
#define __LabelBMFont_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class LabelBMFont;
    }
}

namespace blink {

class LabelBMFont 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<LabelBMFont> create();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    String getStringValue();
    
    void setText(String arg0);
    
    String getDescription();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void setFntFile(String arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::LabelBMFont* getCocos2dImpl();
    ~LabelBMFont();
public:
    LabelBMFont ();
};

DEFINE_TYPE_CASTS(LabelBMFont, Widget, pLabelBMFont, true, true);

} // namespace blink

#endif
