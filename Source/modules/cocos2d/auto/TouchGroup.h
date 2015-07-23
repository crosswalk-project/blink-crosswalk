// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __TouchGroup_h__
#define __TouchGroup_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class TouchGroup;
    }
}

namespace blink {

class TouchGroup 
		:public CCLayer
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<TouchGroup> create();
    
    void removeWidget(Widget* arg0);
    
    ScriptValue getWidgetByTag(ScriptState* scriptState, int arg0);
    
    ScriptValue getRootWidget(ScriptState* scriptState);
    
    bool init();
    
    ScriptValue getWidgetByName(ScriptState* scriptState, String arg0);
    
    void addWidget(Widget* arg0);
    
    void clear();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::TouchGroup* getCocos2dImpl();
    ~TouchGroup();
public:
    TouchGroup ();
};

DEFINE_TYPE_CASTS(TouchGroup, CCLayer, pTouchGroup, true, true);

} // namespace blink

#endif
