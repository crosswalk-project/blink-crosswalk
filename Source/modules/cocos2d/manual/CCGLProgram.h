// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCGLProgram_h__
#define __CCGLProgram_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/CCGraphicsContext3DImpl.h"
#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCGLProgram;
}
class WebGLProgram;
class WebGLUniformLocation;

namespace blink {

class CCGLProgram : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCGLProgram> create();
    
    String getFragmentShaderLog();
    
    void addAttribute(String arg0, unsigned int arg1);
    
    //void setUniformLocationWithMatrix4fv(int arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2);
    
    void use();
    
    String getVertexShaderLog();
    
    bool initWithString(String arg0, String arg1);
    
    bool init(String arg0, String arg1);
    
    void setUniformsForBuiltins();
    
    void setUniformLocationWith3i(WebGLUniformLocation* arg0, int arg1, int arg2, int arg3);
    
    void setUniformLocationWith3iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2);
    
    void updateUniforms();
    
    void setUniformLocationWith4iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2);
    
    bool link();
    
    PassRefPtrWillBeRawPtr<WebGLProgram> getProgram();
    
    void setUniformLocationWith2iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2);
    
    void reset();
    
    String getProgramLog();
    
    void setUniformLocationWith4i(WebGLUniformLocation* arg0, int arg1, int arg2, int arg3, int arg4);
    
    void setUniformLocationI32(WebGLUniformLocation* arg0, int arg1);
    
    void setUniformLocationWith2i(WebGLUniformLocation* arg0, int arg1, int arg2);

    void setUniformLocationWith1f(WebGLUniformLocation* location, float f1);
    void setUniformLocationWith2f(WebGLUniformLocation* location, float f1, float f2);
    void setUniformLocationWith3f(WebGLUniformLocation* location, float f1, float f2, float f3);
    void setUniformLocationWith4f(WebGLUniformLocation* location, float f1, float f2, float f3, float f4);

    //
    void setUniformLocationWith2fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays);
    void setUniformLocationWith3fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays);
    void setUniformLocationWith4fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays);
    void setUniformLocationWithMatrix4fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> matrixArray, unsigned int numberOfMatrices);
    
    cocos2d::CCGLProgram* getCocos2dImpl();
    ~CCGLProgram();
public:
    CCGLProgram ();
};

DEFINE_TYPE_CASTS(CCGLProgram, CCObject, pCCGLProgram, true, true);

} // namespace blink

#endif
