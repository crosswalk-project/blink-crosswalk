// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __UIHelper_h__
#define __UIHelper_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class UIHelper;
    }
}

namespace blink {

class UIHelper : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<UIHelper> create();
    
    static ScriptValue seekActionWidgetByActionTag(ScriptState* scriptState, Widget* arg0, int arg1);
    
    static ScriptValue seekWidgetByTag(ScriptState* scriptState, Widget* arg0, int arg1);
    
    static ScriptValue seekWidgetByRelativeName(ScriptState* scriptState, Widget* arg0, String arg1);
    
    static ScriptValue seekWidgetByName(ScriptState* scriptState, Widget* arg0, String arg1);
    cocos2d::gui::UIHelper* getCocos2dImpl();
    ~UIHelper();
public:
    UIHelper ();
};

DEFINE_TYPE_CASTS(UIHelper, CCObject, pUIHelper, true, true);

} // namespace blink

#endif
