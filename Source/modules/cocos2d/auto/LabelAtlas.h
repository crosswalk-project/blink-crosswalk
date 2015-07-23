// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __LabelAtlas_h__
#define __LabelAtlas_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class LabelAtlas;
    }
}

namespace blink {

class LabelAtlas 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<LabelAtlas> create();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    String getStringValue();
    
    String getDescription();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    void setProperty(String arg0, String arg1, int arg2, int arg3, String arg4);
    
    void setStringValue(String arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::LabelAtlas* getCocos2dImpl();
    ~LabelAtlas();
public:
    LabelAtlas ();
};

DEFINE_TYPE_CASTS(LabelAtlas, Widget, pLabelAtlas, true, true);

} // namespace blink

#endif
