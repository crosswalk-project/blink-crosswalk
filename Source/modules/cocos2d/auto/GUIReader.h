// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __GUIReader_h__
#define __GUIReader_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class GUIReader;
    }
}

namespace blink {

class GUIReader : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<GUIReader> create();
    
    ScriptValue widgetFromJsonFile(ScriptState* scriptState, String arg0);
    
    static void purge();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::extension::GUIReader* getCocos2dImpl();
    ~GUIReader();
public:
    GUIReader ();
};

DEFINE_TYPE_CASTS(GUIReader, CCObject, pGUIReader, true, true);

} // namespace blink

#endif
