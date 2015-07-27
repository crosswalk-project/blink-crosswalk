// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __ListView_h__
#define __ListView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class ListView;
    }
}

namespace blink {

class ListView 
		:public ScrollView
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<ListView> create();
    
    unsigned int getIndex(Widget* arg0);
    
    void removeAllItems();
    
    void setGravity(int arg0);
    
    void pushBackCustomItem(Widget* arg0);
    
    void setDirection(int arg0);
    
    ScriptValue getItems(ScriptState* scriptState);
    
    String getDescription();
    
    void removeItem(int arg0);
    
    int getCurSelectedIndex();
    
    void insertDefaultItem(int arg0);
    
    void sortAllChildren();
    
    void setItemsMargin(float arg0);
    
    void removeLastItem();
    
    ScriptValue getItem(ScriptState* scriptState, unsigned int arg0);
    
    void setItemModel(Widget* arg0);
    
    void requestRefreshView();
    
    void pushBackDefaultItem();
    
    void insertCustomItem(Widget* arg0, int arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::ListView* getCocos2dImpl();
    ~ListView();
public:
    ListView ();
};

DEFINE_TYPE_CASTS(ListView, ScrollView, pListView, true, true);

} // namespace blink

#endif
