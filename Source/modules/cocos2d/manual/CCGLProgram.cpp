// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "core/html/canvas/WebGLUniformLocation.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCGLProgram.h"

namespace blink {

    String CCGLProgram::getFragmentShaderLog() {

        const String ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->fragmentShaderLog();
        
        
        return ret_impl;
    }

    void CCGLProgram::addAttribute(String arg0, unsigned int arg1) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->addAttribute((char*)(arg0.utf8().data()), (unsigned int)(arg1));
    }

   /*
    void CCGLProgram::setUniformLocationWithMatrix4fv(int arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWithMatrix4fv((int)(arg0), (float*)(arg1.get()->data()), (unsigned int)(arg2));
    }
    */
    
    void CCGLProgram::use() {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->use();
    }

    String CCGLProgram::getVertexShaderLog() {

        const String ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->vertexShaderLog();
        
        
        return ret_impl;
    }

    bool CCGLProgram::initWithString(String arg0, String arg1) {

        bool ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->initWithVertexShaderByteArray((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCGLProgram::init(String arg0, String arg1) {

        bool ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->initWithVertexShaderFilename((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    void CCGLProgram::setUniformsForBuiltins() {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformsForBuiltins();
    }

    void CCGLProgram::setUniformLocationWith3i(WebGLUniformLocation* arg0, int arg1, int arg2, int arg3) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith3i((int)(arg0->location()), (int)(arg1), (int)(arg2), (int)(arg3));
    }

    void CCGLProgram::setUniformLocationWith3iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith3iv((int)(arg0->location()), (int*)(arg1.get()->data()), (unsigned int)(arg2));
    }

    void CCGLProgram::updateUniforms() {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->updateUniforms();
    }

    void CCGLProgram::setUniformLocationWith4iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith4iv((int)(arg0->location()), (int*)(arg1.get()->data()), (unsigned int)(arg2));
    }

    bool CCGLProgram::link() {

        bool ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->link();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<WebGLProgram> CCGLProgram::getProgram() {

        const unsigned int ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->getProgram();
        
        return adoptRefWillBeNoop(CCGraphicsContext3DImpl::idToProgram(ret_impl));
    }

    void CCGLProgram::setUniformLocationWith2iv(WebGLUniformLocation* arg0, PassRefPtr<Uint8Array> arg1, unsigned int arg2) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith2iv((int)(arg0->location()), (int*)(arg1.get()->data()), (unsigned int)(arg2));
    }

    void CCGLProgram::reset() {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->reset();
    }

    String CCGLProgram::getProgramLog() {

        const String ret_impl = ((cocos2d::CCGLProgram*)m_cocos2d_impl)->programLog();
        
        
        return ret_impl;
    }

    void CCGLProgram::setUniformLocationWith4i(WebGLUniformLocation* arg0, int arg1, int arg2, int arg3, int arg4) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith4i((int)(arg0->location()), (int)(arg1), (int)(arg2), (int)(arg3), (int)(arg4));
    }

    void CCGLProgram::setUniformLocationI32(WebGLUniformLocation* arg0, int arg1) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith1i((int)(arg0->location()), (int)(arg1));
    }

    void CCGLProgram::setUniformLocationWith2i(WebGLUniformLocation* arg0, int arg1, int arg2) {

        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith2i((int)(arg0->location()), (int)(arg1), (int)(arg2));
    }

    void CCGLProgram::setUniformLocationWith1f(WebGLUniformLocation* location, float f1){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith1f(location->location(), f1);
    }
    
    void CCGLProgram::setUniformLocationWith2f(WebGLUniformLocation* location, float f1, float f2){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith2f(location->location(), f1, f2);
    }
    
    void CCGLProgram::setUniformLocationWith3f(WebGLUniformLocation* location, float f1, float f2, float f3){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith3f(location->location(), f1, f2, f3);
    }
    
    void CCGLProgram::setUniformLocationWith4f(WebGLUniformLocation* location, float f1, float f2, float f3, float f4){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith4f(location->location(), f1, f2, f3, f4);
    }
    
    void CCGLProgram::setUniformLocationWith2fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays)
    {
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith2fv(location->location(), (float*)(floats.get()->data()), numberOfArrays);
    }
    
    void CCGLProgram::setUniformLocationWith3fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith3fv(location->location(), (float*)(floats.get()->data()), numberOfArrays);
    }
    
    void CCGLProgram::setUniformLocationWith4fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> floats, unsigned int numberOfArrays){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith4fv(location->location(), (float*)(floats.get()->data()), numberOfArrays);
    }
    
    void CCGLProgram::setUniformLocationWithMatrix4fv(WebGLUniformLocation* location, PassRefPtr<Float32Array> matrixArray, unsigned int numberOfMatrices){
        ((cocos2d::CCGLProgram*)m_cocos2d_impl)->setUniformLocationWith3fv(location->location(), (float*)(matrixArray.get()->data()), numberOfMatrices);
    }
    
    cocos2d::CCGLProgram* CCGLProgram::getCocos2dImpl() {
        return (cocos2d::CCGLProgram*)m_cocos2d_impl;
    }

    CCGLProgram::CCGLProgram() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCGLProgram> CCGLProgram::create()
    {
        RefPtrWillBeRawPtr<CCGLProgram> ret = adoptRefWillBeNoop(new CCGLProgram());
        cocos2d::CCGLProgram* impl = new cocos2d::CCGLProgram();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCGLProgram::~CCGLProgram() {
    }
} // namespace blink
