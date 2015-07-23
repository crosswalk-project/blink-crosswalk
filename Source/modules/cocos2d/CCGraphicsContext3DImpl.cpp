// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "base/logging.h"
#include "modules/cocos2d/CCGraphicsContext3DImpl.h"

//#define DEBUG_GL

#include <stdlib.h>


CCGraphicsContext3D* CCGraphicsContext3D::s_GraphicsContext3D = NULL;
//CCGraphicsContext3D* s_GraphicsContext3D = NULL;

//using namespace blink;
namespace blink {

WebGLId CCGraphicsContext3DImpl::bufferToId(RefPtr<WebGLBuffer>& pBuffer)
{
   //This is a short cut, won't be compliant to 64bit OS
   pBuffer.get()->ref();
   return (WebGLId) pBuffer.get();

}

WebGLBuffer* CCGraphicsContext3DImpl::idToBuffer(WebGLId id)
{
  //This is a short cut, won't be compliant to 64bit OS  
  return (WebGLBuffer*)id;
}

WebGLId CCGraphicsContext3DImpl::programToId(RefPtr<WebGLProgram>& pProgram)
{
    //This is a short cut, won't be compliant to 64bit OS
    pProgram.get()->ref();
    return (WebGLId) pProgram.get();
}

WebGLProgram* CCGraphicsContext3DImpl::idToProgram(WebGLId id)
{
    //This is a short cut, won't be compliant to 64bit OS
    return (WebGLProgram*)id;
}

WebGLId CCGraphicsContext3DImpl::shaderToId(RefPtr<WebGLShader>& pShader)
{
    //This is a short cut, won't be compliant to 64bit OS
    pShader.get()->ref();
    return (WebGLId) pShader.get();
}

WebGLShader* CCGraphicsContext3DImpl::idToShader(WebGLId id)
{
    //This is a short cut, won't be compliant to 64bit OS
    return (WebGLShader*)id;
}

WebGLId CCGraphicsContext3DImpl::textureToId(RefPtr<WebGLTexture>& pTexture)
{
   //This is a short cut, won't be compliant to 64bit OS
    pTexture.get()->ref();
    return (WebGLId) pTexture.get();
}

WebGLTexture* CCGraphicsContext3DImpl::idToTexture(WebGLId id)
{
    //This is a short cut, won't be compliant to 64bit OS
    return (WebGLTexture*)id;
}

int CCGraphicsContext3DImpl::getIntfromGLInfo(WebGLGetInfo& info)
{
    switch(info.getType())
    {
        case WebGLGetInfo::kTypeBool:
            return (int) info.getBool();
            break;
        case WebGLGetInfo::kTypeInt:
            return info.getInt();
            break;
        case WebGLGetInfo::kTypeUnsignedInt:
            return (int)info.getUnsignedInt();
            break;
        default:
            ASSERT(false);
            return 0;
    }
}


CCGraphicsContext3DImpl::CCGraphicsContext3DImpl()
{

}

void CCGraphicsContext3DImpl:: setGLContext(void* pGLContext)
{
   m_pWebGLRenderingContext = (WebGLRenderingContext*)pGLContext;
   if(pGLContext!=NULL)
   m_pWebGraphicsContext3D  =  m_pWebGLRenderingContext->webContext();

}

CCGraphicsContext3DImpl::~CCGraphicsContext3DImpl()
{
    if(s_GraphicsContext3D != NULL)
        delete s_GraphicsContext3D;
    s_GraphicsContext3D = NULL;
}
void CCGraphicsContext3DImpl::activeTexture(CCGLenum texture) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->activeTexture(texture);
}

void CCGraphicsContext3DImpl::attachShader(WebGLId program, WebGLId shader) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    WebGLShader*  pShader = idToShader(shader);
    //if(pProgram && pShader)
    m_pWebGLRenderingContext->attachShader(pProgram, pShader);
}

void CCGraphicsContext3DImpl::bindAttribLocation(WebGLId program, CCGLuint index, const CCGLchar* name) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    String nameString(name);
    m_pWebGLRenderingContext->bindAttribLocation(pProgram, index, nameString);
}

void CCGraphicsContext3DImpl::bindBuffer(CCGLenum target, WebGLId buffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLBuffer* pBuffer = idToBuffer(buffer);
    m_pWebGLRenderingContext->bindBuffer(target, pBuffer);
}

void CCGraphicsContext3DImpl::bindFramebuffer(CCGLenum target, WebGLId framebuffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->bindFramebuffer(target, framebuffer);
}

void CCGraphicsContext3DImpl::bindRenderbuffer(CCGLenum target, WebGLId renderbuffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->bindRenderbuffer(target, renderbuffer);
}

void CCGraphicsContext3DImpl::bindTexture(CCGLenum target, WebGLId texture) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLTexture* pTexture = idToTexture(texture);
    m_pWebGLRenderingContext->bindTexture(target, pTexture);
}

void CCGraphicsContext3DImpl::blendColor(CCGLclampf red, CCGLclampf green, CCGLclampf blue, CCGLclampf alpha) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->blendColor(red, green, blue, alpha);
}

void CCGraphicsContext3DImpl::blendEquation(CCGLenum mode) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->blendEquation(mode);
}

void CCGraphicsContext3DImpl::blendEquationSeparate(CCGLenum modeRGB, CCGLenum modeAlpha) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->blendEquationSeparate(modeRGB, modeAlpha);
}

void CCGraphicsContext3DImpl::blendFunc(CCGLenum sfactor, CCGLenum dfactor) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->blendFunc(sfactor, dfactor);
}

void CCGraphicsContext3DImpl::blendFuncSeparate(CCGLenum srcRGB, CCGLenum dstRGB, CCGLenum srcAlpha, CCGLenum dstAlpha) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->blendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void CCGraphicsContext3DImpl::bufferData(CCGLenum target, CCGLsizeiptr size, const void* data, CCGLenum usage) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->bufferData(target, size, data, usage);
}

void CCGraphicsContext3DImpl::bufferSubData(CCGLenum target, CCGLintptr offset, CCGLsizeiptr size, const void* data) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
   m_pWebGraphicsContext3D->bufferSubData(target, offset, size, data);
}

CCGLenum CCGraphicsContext3DImpl::checkFramebufferStatus(CCGLenum target) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->checkFramebufferStatus(target);
}

void CCGraphicsContext3DImpl::clear(CCGLbitfield mask) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->clear(mask);
}

void CCGraphicsContext3DImpl::clearColor(CCGLclampf red, CCGLclampf green, CCGLclampf blue, CCGLclampf alpha) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->clearColor(red, green, blue, alpha);
}

void CCGraphicsContext3DImpl::clearDepth(CCGLclampf depth) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->clearDepth(depth);
}

void CCGraphicsContext3DImpl::clearStencil(CCGLint s) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->clearStencil(s);
}

void CCGraphicsContext3DImpl::colorMask(CCGLboolean red, CCGLboolean green, CCGLboolean blue, CCGLboolean alpha) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    m_pWebGLRenderingContext->colorMask(red, green, blue, alpha);
}

void CCGraphicsContext3DImpl::compileShader(WebGLId shader) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    m_pWebGLRenderingContext->compileShader(pShader);
}

void CCGraphicsContext3DImpl::compressedTexImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLsizei width,
                                                            CCGLsizei height, CCGLint border, CCGLsizei imageSize, const void* data) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    ASSERT(false);//not implemented
}

void CCGraphicsContext3DImpl::compressedTexSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset,
                                                                CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLsizei imageSize, const void* data) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    ASSERT(false);// not implemented
}

void CCGraphicsContext3DImpl::copyTexImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLint x, CCGLint y,
                                                   CCGLsizei width, CCGLsizei height, CCGLint border) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    m_pWebGLRenderingContext->copyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void CCGraphicsContext3DImpl::copyTexSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset,
                                                        CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->copyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void CCGraphicsContext3DImpl::cullFace(CCGLenum mode) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->cullFace(mode);
}

void CCGraphicsContext3DImpl::depthFunc(CCGLenum func) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->depthFunc(func);
}

void CCGraphicsContext3DImpl::depthMask(CCGLboolean flag) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->depthMask(flag);
}

void CCGraphicsContext3DImpl::depthRange(CCGLclampf zNear, CCGLclampf zFar) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->depthRange(zNear, zFar);
}

void CCGraphicsContext3DImpl::detachShader(WebGLId program, WebGLId shader) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    WebGLShader  *pShader  = idToShader(shader);
    m_pWebGLRenderingContext->detachShader(pProgram, pShader);
}

void CCGraphicsContext3DImpl::disable(CCGLenum cap) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->disable(cap);
}

void CCGraphicsContext3DImpl::disableVertexAttribArray(CCGLuint index) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->disableVertexAttribArray(index);
}

void CCGraphicsContext3DImpl::drawArrays(CCGLenum mode, CCGLint first, CCGLsizei count) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->drawArrays(mode, first, count);
}

void CCGraphicsContext3DImpl::drawElements(CCGLenum mode, CCGLsizei count, CCGLenum type, CCGLvoid* offset) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    m_pWebGLRenderingContext->drawElements(mode, count, type, (CCGLintptr)offset);
}

void CCGraphicsContext3DImpl::enable(CCGLenum cap) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->enable(cap);
}

void CCGraphicsContext3DImpl::enableVertexAttribArray(CCGLuint index) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->enableVertexAttribArray(index);
}

void CCGraphicsContext3DImpl::finish() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->finish();
}

void CCGraphicsContext3DImpl::flush() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->flush();
}

void CCGraphicsContext3DImpl::framebufferRenderbuffer(CCGLenum target, CCGLenum attachment, CCGLenum renderbuffertarget, WebGLId renderbuffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->framebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void CCGraphicsContext3DImpl::framebufferTexture2D(CCGLenum target, CCGLenum attachment, CCGLenum textarget, WebGLId texture, CCGLint level) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLTexture* pTexture = idToTexture(texture);
    Platform3DObject textureObject = objectOrZero(pTexture);
    switch (attachment) {
    case GC3D_DEPTH_STENCIL_ATTACHMENT_WEBGL:
        m_pWebGraphicsContext3D->framebufferTexture2D(target, GL_DEPTH_ATTACHMENT, textarget, textureObject, level);
        m_pWebGraphicsContext3D->framebufferTexture2D(target, GL_STENCIL_ATTACHMENT, textarget, textureObject, level);
        break;
    case GL_DEPTH_ATTACHMENT:
        m_pWebGraphicsContext3D->framebufferTexture2D(target, attachment, textarget, textureObject, level);
        break;
    case GL_STENCIL_ATTACHMENT:
        m_pWebGraphicsContext3D->framebufferTexture2D(target, attachment, textarget, textureObject, level);
        break;
    default:
        m_pWebGraphicsContext3D->framebufferTexture2D(target, attachment, textarget, textureObject, level);
    }
}

void CCGraphicsContext3DImpl::frontFace(CCGLenum mode) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->frontFace(mode);
}

void CCGraphicsContext3DImpl::generateMipmap(CCGLenum target) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->generateMipmap(target);
}

void CCGraphicsContext3DImpl::getActiveAttrib(WebGLId program, CCGLuint index, CCGLsizei *length, CCGLsizei *size, CCGLenum *type, CCGLchar* name) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLActiveInfo* info;
    String nameString;
    WebGLProgram *pProgram = idToProgram(program);

    info = (m_pWebGLRenderingContext->getActiveAttrib(pProgram, index)).get();
    *size = info->size();
    *type = info->type();
    nameString = info->name();
    *length = nameString.length();
    memcpy(name, nameString.characters8(),(unsigned)*length);
    //nameString.copyTo((UChar*)name, 0, (unsigned)*length);
}

void CCGraphicsContext3DImpl::getActiveUniform(WebGLId program, CCGLuint index, CCGLsizei *length, CCGLsizei *size, CCGLenum *type, CCGLchar* name) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLActiveInfo* info;
    String nameString;
    WebGLProgram *pProgram = idToProgram(program);

    info = (m_pWebGLRenderingContext->getActiveUniform(pProgram, index)).get();
    *size = info->size();
    *type = info->type();
    nameString = info->name();
    *length = nameString.length();
     memcpy(name, nameString.characters8(),(unsigned)*length);
}

void CCGraphicsContext3DImpl::getAttachedShaders(WebGLId program, CCGLsizei maxCount, CCGLsizei* count, WebGLId* shaders) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    Nullable<WillBeHeapVector<RefPtrWillBeMember<WebGLShader> >>  shaderObjects;
    WebGLProgram* pProgram = idToProgram(program);
    shaderObjects = m_pWebGLRenderingContext->getAttachedShaders(pProgram);
    if(!shaderObjects.isNull())
    {
        WillBeHeapVector<RefPtrWillBeMember<WebGLShader>> shaderVector = shaderObjects.get();
        *count = shaderVector.size() < (unsigned)maxCount ? shaderVector.size() : maxCount;
        for(int i=0; i< *count; i++)
            shaders[i] = shaderToId(shaderVector.at(i));
    }
}

CCGLint CCGraphicsContext3DImpl::getAttribLocation(WebGLId program, const CCGLchar* name) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    String nameString(name);
    WebGLProgram* pProgram = idToProgram(program);
    return m_pWebGLRenderingContext->getAttribLocation(pProgram, nameString);
}

void CCGraphicsContext3DImpl::getBooleanv(CCGLenum pname, CCGLboolean* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->getBooleanv(pname, value); //shortcut
}

void CCGraphicsContext3DImpl::getBufferParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getBufferParameter(target, pname);
    *value = getIntfromGLInfo(info); //(infinfo.getInt();
}

CCGLenum CCGraphicsContext3DImpl::getError() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->getError();
}

void CCGraphicsContext3DImpl::getFloatv(CCGLenum pname, CCGLfloat* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->getFloatv(pname, value); //Shortcut
}

void CCGraphicsContext3DImpl::getFramebufferAttachmentParameteriv(CCGLenum target, CCGLenum attachment, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getFramebufferAttachmentParameter(target, attachment, pname);
    *value = getIntfromGLInfo(info); 
}

void CCGraphicsContext3DImpl::getIntegerv(CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->getIntegerv(pname, value); //Shortcut
}

void CCGraphicsContext3DImpl::getProgramiv(WebGLId program, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    WebGLGetInfo info = m_pWebGLRenderingContext->getProgramParameter(pProgram, pname);
    *value = getIntfromGLInfo(info);
}

void CCGraphicsContext3DImpl::getProgramInfoLog(WebGLId program, CCGLsizei maxLength, CCGLsizei *length, CCGLchar *infoLog) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    String infoString = m_pWebGLRenderingContext->getProgramInfoLog(pProgram);
    *length = infoString.length() < (unsigned)maxLength ?  infoString.length() : maxLength;
    memcpy(infoLog, infoString.characters8(),(unsigned)*length);
}

void CCGraphicsContext3DImpl::getRenderbufferParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getRenderbufferParameter(target, pname);
    *value = getIntfromGLInfo(info); //info.getInt();
}

void CCGraphicsContext3DImpl::getShaderiv(WebGLId shader, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    WebGLGetInfo info = m_pWebGLRenderingContext->getShaderParameter(pShader, pname);
    if(info.getType() != WebGLGetInfo::kTypeNull)
    {
        *value = getIntfromGLInfo(info); //info.getInt();
    }
    else
    {       
       return m_pWebGraphicsContext3D->getShaderiv((pShader ? pShader->object() : 0), pname, value);
    }
}

void CCGraphicsContext3DImpl::getShaderInfoLog(WebGLId shader, CCGLsizei maxLength, CCGLsizei *length, CCGLchar *infoLog) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    String infoString = m_pWebGLRenderingContext->getShaderInfoLog(pShader);
    *length = infoString.length() < (unsigned)maxLength ?  infoString.length() : maxLength;
     memcpy(infoLog, infoString.characters8(),(unsigned)*length);
}

void CCGraphicsContext3DImpl::getShaderPrecisionFormat(CCGLenum shadertype, CCGLenum precisiontype, CCGLint* range, CCGLint* precision) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShaderPrecisionFormat *pFormat = (m_pWebGLRenderingContext->getShaderPrecisionFormat(shadertype, precisiontype)).get();
    *precision = pFormat->precision();
    range[0] = pFormat->rangeMin();
    range[1] = pFormat->rangeMax();
}

void CCGraphicsContext3DImpl::getShaderSource(WebGLId shader, CCGLsizei bufSize, CCGLsizei* length, CCGLchar * source) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    String shaderString = m_pWebGLRenderingContext->getShaderSource(pShader);
    *length = shaderString.length() < (unsigned)bufSize ?  shaderString.length() : bufSize;
    memcpy(source, shaderString.characters8(),(unsigned)*length);
}

CCGLubyte* CCGraphicsContext3DImpl::getString(CCGLenum name) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    blink::WebString nameString;
    nameString = m_pWebGraphicsContext3D->getString(name); //Shortcut
    CCGLubyte* retString = new CCGLubyte[nameString.length()];
    for(unsigned i=0; i<nameString.length(); i++)
      retString[i] = nameString.at(i);
    return retString;
}

void CCGraphicsContext3DImpl::getTexParameterfv(CCGLenum target, CCGLenum pname, CCGLfloat* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getTexParameter(target, pname);
    *value = info.getFloat();
}

void CCGraphicsContext3DImpl::getTexParameteriv(CCGLenum target, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getTexParameter(target, pname);
    *value = getIntfromGLInfo(info);//info.getInt();
}

Platform3DObject CCGraphicsContext3DImpl::objectOrZero(WebGLObject* object)
{
    return object ? object->object() : 0;
}

WebGLGetInfo CCGraphicsContext3DImpl::getUniform(WebGLProgram* program, const CCGLint location)
{
    // FIXME: make this more efficient using WebGLUniformLocation and caching types in it
    GLint activeUniforms = 0;
    WebGraphicsContext3D* pContext = m_pWebGraphicsContext3D;
    if(!pContext) return WebGLGetInfo();
    
    pContext->getProgramiv(objectOrZero(program), GL_ACTIVE_UNIFORMS, &activeUniforms);
    for (GLint i = 0; i < activeUniforms; i++) {
        blink::WebGraphicsContext3D::ActiveInfo info;
        if (!pContext->getActiveUniform(objectOrZero(program), i, info))
            return WebGLGetInfo();
        String name = info.name;
        StringBuilder nameBuilder;
        // Strip "[0]" from the name if it's an array.
        if (info.size > 1 && name.endsWith("[0]"))
            info.name = name.left(name.length() - 3);
        // If it's an array, we need to iterate through each element, appending "[index]" to the name.
        for (GLint index = 0; index < info.size; ++index) {
            nameBuilder.clear();
            nameBuilder.append(info.name);
            if (info.size > 1 && index >= 1) {
                nameBuilder.append('[');
                nameBuilder.appendNumber(index);
                nameBuilder.append(']');
            }
            // Now need to look this up by name again to find its location
            GLint loc = pContext->getUniformLocation(objectOrZero(program), nameBuilder.toString().utf8().data());
            if (loc == location) {
                // Found it. Use the type in the ActiveInfo to determine the return type.
                GLenum baseType;
                unsigned length;
                switch (info.type) {
                case GL_BOOL:
                    baseType = GL_BOOL;
                    length = 1;
                    break;
                case GL_BOOL_VEC2:
                    baseType = GL_BOOL;
                    length = 2;
                    break;
                case GL_BOOL_VEC3:
                    baseType = GL_BOOL;
                    length = 3;
                    break;
                case GL_BOOL_VEC4:
                    baseType = GL_BOOL;
                    length = 4;
                    break;
                case GL_INT:
                    baseType = GL_INT;
                    length = 1;
                    break;
                case GL_INT_VEC2:
                    baseType = GL_INT;
                    length = 2;
                    break;
                case GL_INT_VEC3:
                    baseType = GL_INT;
                    length = 3;
                    break;
                case GL_INT_VEC4:
                    baseType = GL_INT;
                    length = 4;
                    break;
                case GL_FLOAT:
                    baseType = GL_FLOAT;
                    length = 1;
                    break;
                case GL_FLOAT_VEC2:
                    baseType = GL_FLOAT;
                    length = 2;
                    break;
                case GL_FLOAT_VEC3:
                    baseType = GL_FLOAT;
                    length = 3;
                    break;
                case GL_FLOAT_VEC4:
                    baseType = GL_FLOAT;
                    length = 4;
                    break;
                case GL_FLOAT_MAT2:
                    baseType = GL_FLOAT;
                    length = 4;
                    break;
                case GL_FLOAT_MAT3:
                    baseType = GL_FLOAT;
                    length = 9;
                    break;
                case GL_FLOAT_MAT4:
                    baseType = GL_FLOAT;
                    length = 16;
                    break;
                case GL_SAMPLER_2D:
                case GL_SAMPLER_CUBE:
                    baseType = GL_INT;
                    length = 1;
                    break;
                default:
                    // Can't handle this type
                    //synthesizeGLError(GL_INVALID_VALUE, "getUniform", "unhandled type");
                    return WebGLGetInfo();
                }
                switch (baseType) {
                case GL_FLOAT: {
                    GLfloat value[16] = {0};
                    pContext->getUniformfv(objectOrZero(program), location, value);
                    if (length == 1)
                        return WebGLGetInfo(value[0]);
                    return WebGLGetInfo(Float32Array::create(value, length));
                }
                case GL_INT: {
                    GLint value[4] = {0};
                    pContext->getUniformiv(objectOrZero(program), location, value);
                    if (length == 1)
                        return WebGLGetInfo(value[0]);
                    return WebGLGetInfo(Int32Array::create(value, length));
                }
                case GL_BOOL: {
                    GLint value[4] = {0};
                    pContext->getUniformiv(objectOrZero(program), location, value);
                    if (length > 1) {
                        bool boolValue[16] = {0};
                        for (unsigned j = 0; j < length; j++)
                            boolValue[j] = static_cast<bool>(value[j]);
                        return WebGLGetInfo(boolValue, length);
                    }
                    return WebGLGetInfo(static_cast<bool>(value[0]));
                }
                default:
                    break;
                }
            }
        }
    }
    // If we get here, something went wrong in our unfortunately complex logic above
    //synthesizeGLError(GL_INVALID_VALUE, "getUniform", "unknown error");
    return WebGLGetInfo();
}


void CCGraphicsContext3DImpl::getUniformfv(WebGLId program, CCGLint location, CCGLfloat* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    WebGLGetInfo info= getUniform(pProgram, location);
    *value = info.getFloat();
}

void CCGraphicsContext3DImpl::getUniformiv(WebGLId program, CCGLint location, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    WebGLGetInfo info= getUniform(pProgram, location);
    *value = getIntfromGLInfo(info);//info.getInt();
}

CCGLint CCGraphicsContext3DImpl::getUniformLocation(WebGLId program, const CCGLchar* name) {
    
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    String nameString(name);
    GLint uniformLocation = m_pWebGraphicsContext3D->getUniformLocation(objectOrZero(pProgram), nameString.utf8().data());
    return uniformLocation;
    
}

void CCGraphicsContext3DImpl::getVertexAttribfv(CCGLuint index, CCGLenum pname, CCGLfloat* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getVertexAttrib(index, pname);
    *value = info.getFloat();
}

void CCGraphicsContext3DImpl::getVertexAttribiv(CCGLuint index, CCGLenum pname, CCGLint* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLGetInfo info = m_pWebGLRenderingContext->getVertexAttrib(index, pname);
    *value = getIntfromGLInfo(info); //info.getInt();
}

CCGLsizeiptr CCGraphicsContext3DImpl::getVertexAttribOffset(CCGLuint index, CCGLenum pname) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->getVertexAttribOffset(index, pname);
}

void CCGraphicsContext3DImpl::hint(CCGLenum target, CCGLenum mode) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->hint(target, mode);
}

CCGLboolean CCGraphicsContext3DImpl::isBuffer(WebGLId buffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLBuffer* pBuffer = idToBuffer(buffer);
    return m_pWebGLRenderingContext->isBuffer(pBuffer);
}

CCGLboolean CCGraphicsContext3DImpl::isEnabled(CCGLenum cap) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->isEnabled(cap);
}

CCGLboolean CCGraphicsContext3DImpl::isFramebuffer(WebGLId framebuffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return  m_pWebGraphicsContext3D->isFramebuffer(framebuffer);
}

CCGLboolean CCGraphicsContext3DImpl::isProgram(WebGLId program) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    return m_pWebGLRenderingContext->isProgram(pProgram);
}

CCGLboolean CCGraphicsContext3DImpl::isRenderbuffer(WebGLId renderbuffer) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return  m_pWebGraphicsContext3D->isRenderbuffer(renderbuffer);
}

CCGLboolean CCGraphicsContext3DImpl::isShader(WebGLId shader) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    return m_pWebGLRenderingContext->isShader(pShader);
}

CCGLboolean CCGraphicsContext3DImpl::isTexture(WebGLId texture) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLTexture* pTexture = idToTexture(texture);
    return m_pWebGLRenderingContext->isTexture(pTexture);
}

void CCGraphicsContext3DImpl::lineWidth(CCGLfloat width) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->lineWidth(width);
}

void CCGraphicsContext3DImpl::linkProgram(WebGLId program) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    m_pWebGLRenderingContext->linkProgram(pProgram);
}

void CCGraphicsContext3DImpl::pixelStorei(CCGLenum pname, CCGLint param) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->pixelStorei(pname, param);
}

void CCGraphicsContext3DImpl::polygonOffset(CCGLfloat factor, CCGLfloat units) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    m_pWebGLRenderingContext->polygonOffset(factor, units);
}

void CCGraphicsContext3DImpl::readPixels(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLenum type, void* pixels) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->readPixels(x, y, width, height, format, type, pixels);
}

void CCGraphicsContext3DImpl::releaseShaderCompiler() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->releaseShaderCompiler();
}

void CCGraphicsContext3DImpl::renderbufferStorage(CCGLenum target, CCGLenum internalformat, CCGLsizei width, CCGLsizei height) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->renderbufferStorage(target, internalformat, width, height);
}

void CCGraphicsContext3DImpl::sampleCoverage(CCGLclampf value, CCGLboolean invert) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
     m_pWebGLRenderingContext->sampleCoverage(value, invert);
}

void CCGraphicsContext3DImpl::scissor(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->scissor(x, y, width, height);
}

void CCGraphicsContext3DImpl::shaderSource(WebGLId shader,   CCGLsizei count, const CCGLchar **string, const CCGLint *length) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    String sourceString(string[0]);
    for(int i = 1; i < count; i++)
    {
      String tempString(string[i]);
      sourceString.append(tempString);
    }
    m_pWebGLRenderingContext->shaderSource(pShader, sourceString);
    
}

void CCGraphicsContext3DImpl::stencilFunc(CCGLenum func, CCGLint ref, CCGLuint mask) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilFunc(func, ref, mask);
}

void CCGraphicsContext3DImpl::stencilFuncSeparate(CCGLenum face, CCGLenum func, CCGLint ref, CCGLuint mask) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilFuncSeparate(face, func, ref, mask);
}

void CCGraphicsContext3DImpl::stencilMask(CCGLuint mask) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilMask(mask);
}

void CCGraphicsContext3DImpl::stencilMaskSeparate(CCGLenum face, CCGLuint mask) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilMaskSeparate(face, mask);
}

void CCGraphicsContext3DImpl::stencilOp(CCGLenum fail, CCGLenum zfail, CCGLenum zpass) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilOp(fail, zfail, zpass);
}

void CCGraphicsContext3DImpl::stencilOpSeparate(CCGLenum face, CCGLenum fail, CCGLenum zfail, CCGLenum zpass) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->stencilOpSeparate(face, fail, zfail, zpass);
}

void CCGraphicsContext3DImpl::texImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLsizei width,
                                             CCGLsizei height, CCGLint border, CCGLenum format, CCGLenum type, const void* pixels) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->texImage2DCocos2d(target, level, internalformat, width, height, border, format, type, pixels);
}



void CCGraphicsContext3DImpl::texImage2DHTMLImageElement(CCGLenum target, CCGLint level, CCGLenum internalformat,
                                                                    CCGLenum format, CCGLenum type, void* pElement) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    HTMLImageElement* pImageElement = (HTMLImageElement*) pElement;
    m_pWebGLRenderingContext->texImage2D(target, level, internalformat, format, type, pImageElement);
}


void CCGraphicsContext3DImpl:: texImage2DHTMLCanvasElement(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLenum format, 
                                 CCGLenum type, void* pElement) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    HTMLCanvasElement* pCanvasElement = (HTMLCanvasElement*) pElement;
    TrackExceptionState exceptionState;
    m_pWebGLRenderingContext->texImage2D(target, level, internalformat, format, type, pCanvasElement, exceptionState);
}

void CCGraphicsContext3DImpl:: texImage2DHTMLVideoElement(CCGLenum target, CCGLint level, CCGLenum internalformat, CCGLenum format, 
                                 CCGLenum type, void* pElement) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    HTMLVideoElement* pVideoElement = (HTMLVideoElement*) pElement;
    TrackExceptionState exceptionState;
    m_pWebGLRenderingContext->texImage2D(target, level, internalformat, format, type, pVideoElement, exceptionState);
}

void CCGraphicsContext3DImpl::texParameterf(CCGLenum target, CCGLenum pname, CCGLfloat param) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->texParameterf(target, pname, param);
}

void CCGraphicsContext3DImpl::texParameteri(CCGLenum target, CCGLenum pname, CCGLint param) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->texParameteri(target, pname, param);
}

void CCGraphicsContext3DImpl::texSubImage2D(CCGLenum target, CCGLint level, CCGLint xoffset, CCGLint yoffset,
                                                 CCGLsizei width, CCGLsizei height, CCGLenum format, CCGLenum type, const void* pixels) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
     // shutCut: could be buggy
    m_pWebGraphicsContext3D->texSubImage2D(target, level, xoffset, yoffset, width, height,
                                                           format, type, pixels);
}

void CCGraphicsContext3DImpl::uniform1f(CCGLint location, CCGLfloat x) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform1f(location, x);
}

void CCGraphicsContext3DImpl::uniform1fv(CCGLint location, CCGLsizei count, const CCGLfloat* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif

    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform1fv(location, count, v);
}

void CCGraphicsContext3DImpl::uniform1i(CCGLint location, CCGLint x) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform1i(location, x);
}

void CCGraphicsContext3DImpl::uniform1iv(CCGLint location, CCGLsizei count, const CCGLint* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
         m_pWebGraphicsContext3D->uniform1iv(location, count, v);
}

void CCGraphicsContext3DImpl::uniform2f(CCGLint location, CCGLfloat x, CCGLfloat y) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
         m_pWebGraphicsContext3D->uniform2f(location, x, y);
}

void CCGraphicsContext3DImpl::uniform2fv(CCGLint location, CCGLsizei count, const CCGLfloat* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
         m_pWebGraphicsContext3D->uniform2fv(location, count, v);
}

void CCGraphicsContext3DImpl::uniform2i(CCGLint location, CCGLint x, CCGLint y) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
         m_pWebGraphicsContext3D->uniform2i(location, x, y);
}

void CCGraphicsContext3DImpl::uniform2iv(CCGLint location, CCGLsizei count, const CCGLint* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
         m_pWebGraphicsContext3D->uniform2iv(location, count, v);
}

void CCGraphicsContext3DImpl::uniform3f(CCGLint location, CCGLfloat x, CCGLfloat y, CCGLfloat z) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform3f(location, x, y, z);
}

void CCGraphicsContext3DImpl::uniform3fv(CCGLint location, CCGLsizei count, const CCGLfloat* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform3fv(location, count, v);

}

void CCGraphicsContext3DImpl::uniform3i(CCGLint location, CCGLint x, CCGLint y, CCGLint z) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform3i(location, x, y, z);

}

void CCGraphicsContext3DImpl::uniform3iv(CCGLint location, CCGLsizei count, const CCGLint* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
       m_pWebGraphicsContext3D->uniform3iv(location, count, v);

}

void CCGraphicsContext3DImpl::uniform4f(CCGLint location, CCGLfloat x, CCGLfloat y, CCGLfloat z, CCGLfloat w) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform4f(location, x, y, z, w);
}

void CCGraphicsContext3DImpl::uniform4fv(CCGLint location, CCGLsizei count, const CCGLfloat* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
       m_pWebGraphicsContext3D->uniform4fv(location, count, v);
}

void CCGraphicsContext3DImpl::uniform4i(CCGLint location, CCGLint x, CCGLint y, CCGLint z, CCGLint w) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
       m_pWebGraphicsContext3D->uniform4i(location, x, y, z, w);
}

void CCGraphicsContext3DImpl::uniform4iv(CCGLint location, CCGLsizei count, const CCGLint* v) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniform4iv(location, count, v);
}

void CCGraphicsContext3DImpl::uniformMatrix2fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniformMatrix2fv(location, count, transpose, value);
}

void CCGraphicsContext3DImpl::uniformMatrix3fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value) {
    #ifdef DEBUG_GL
        LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniformMatrix3fv(location, count, transpose, value);
}

void CCGraphicsContext3DImpl::uniformMatrix4fv(CCGLint location, CCGLsizei count, CCGLboolean transpose, const CCGLfloat* value) {
     #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    if(m_pWebGraphicsContext3D)
        m_pWebGraphicsContext3D->uniformMatrix4fv(location, count, transpose, value);
}

void CCGraphicsContext3DImpl::useProgram(WebGLId program) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    m_pWebGLRenderingContext->useProgram(pProgram);
}

void CCGraphicsContext3DImpl::validateProgram(WebGLId program) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram *pProgram = idToProgram(program);
    m_pWebGLRenderingContext->validateProgram(pProgram);
}

void CCGraphicsContext3DImpl::vertexAttrib1f(CCGLuint index, CCGLfloat x) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib1f(index, x);
}

void CCGraphicsContext3DImpl::vertexAttrib1fv(CCGLuint index, const CCGLfloat* values) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib1fv(index, (CCGLfloat*)values, 1);
}

void CCGraphicsContext3DImpl::vertexAttrib2f(CCGLuint index, CCGLfloat x, CCGLfloat y) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib2f(index, x, y);
}

void CCGraphicsContext3DImpl::vertexAttrib2fv(CCGLuint index, const CCGLfloat* values) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib2fv(index, (CCGLfloat*)values, 2);
}

void CCGraphicsContext3DImpl::vertexAttrib3f(CCGLuint index, CCGLfloat x, CCGLfloat y, CCGLfloat z) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib3f(index, x, y, z);
}

void CCGraphicsContext3DImpl::vertexAttrib3fv(CCGLuint index, const CCGLfloat* values) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib3fv(index, (CCGLfloat*)values, 3);
}

void CCGraphicsContext3DImpl::vertexAttrib4f(CCGLuint index, CCGLfloat x, CCGLfloat y, CCGLfloat z, CCGLfloat w) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib4f(index, x, y, z, w);
}

void CCGraphicsContext3DImpl::vertexAttrib4fv(CCGLuint index, const CCGLfloat* values) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttrib4fv(index, (CCGLfloat*)values, 4);
}

void CCGraphicsContext3DImpl::vertexAttribPointer(CCGLuint index, CCGLint size, CCGLenum type, CCGLboolean normalized,
                         CCGLsizei stride, CCGLvoid* offset) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->vertexAttribPointer(index, size, type, normalized, stride, (CCGLintptr)offset);
}

void CCGraphicsContext3DImpl::viewport(CCGLint x, CCGLint y, CCGLsizei width, CCGLsizei height) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->viewport(x, y, width, height);
}

void CCGraphicsContext3DImpl::genBuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    for(int i=0; i<count; i++)
    {
      RefPtr<WebGLBuffer> pBuffer = m_pWebGLRenderingContext->createBuffer();
      ids[i] = bufferToId(pBuffer);
    }
}

void CCGraphicsContext3DImpl::genFramebuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif

    m_pWebGraphicsContext3D->genFramebuffers(count,ids);
}

void CCGraphicsContext3DImpl::genRenderbuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif

    m_pWebGraphicsContext3D->genRenderbuffers(count,ids);
}

void CCGraphicsContext3DImpl::genTextures(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    for(int i=0; i<count; i++)
    {
      RefPtr<WebGLTexture> pTexture = m_pWebGLRenderingContext->createTexture();
      ids[i] = textureToId(pTexture);
    }
}

void CCGraphicsContext3DImpl::deleteBuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    for(int i=0; i<count; i++)
    {
      WebGLBuffer* pBuffer = idToBuffer(ids[i]);
      m_pWebGLRenderingContext->deleteBuffer(pBuffer);
      if(pBuffer) pBuffer->deref();
      //delete pBuffer;//pBuffer->derefBase();
    }
}

void CCGraphicsContext3DImpl::deleteFramebuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->deleteFramebuffers(count,ids);
}

void CCGraphicsContext3DImpl::deleteRenderbuffers(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif

    m_pWebGraphicsContext3D->deleteRenderbuffers(count,ids);
}

void CCGraphicsContext3DImpl::deleteTextures(CCGLsizei count, WebGLId* ids) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    for(int i=0; i<count; i++)
    {
      WebGLTexture* pTexture = idToTexture(ids[i]);
      m_pWebGLRenderingContext->deleteTexture(pTexture);
      if(pTexture) pTexture->deref();
    }
}

WebGLId CCGraphicsContext3DImpl::createBuffer() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    RefPtr<WebGLBuffer> pBuffer = m_pWebGLRenderingContext->createBuffer();
    return bufferToId(pBuffer);
}

WebGLId CCGraphicsContext3DImpl::createFramebuffer() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGraphicsContext3D->createFramebuffer();
}

WebGLId CCGraphicsContext3DImpl::createRenderbuffer() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGraphicsContext3D->createRenderbuffer();
}

WebGLId CCGraphicsContext3DImpl::createTexture() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    RefPtr<WebGLTexture> pTexture = m_pWebGLRenderingContext->createTexture();
    return textureToId(pTexture);
}

void CCGraphicsContext3DImpl::deleteBuffer(WebGLId id) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLBuffer* pBuffer = idToBuffer(id);
    m_pWebGLRenderingContext->deleteBuffer(pBuffer);
    if(pBuffer) pBuffer->deref();
}

void CCGraphicsContext3DImpl::deleteFramebuffer(WebGLId id) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif

    m_pWebGraphicsContext3D->deleteFramebuffer(id);
}

void CCGraphicsContext3DImpl::deleteRenderbuffer(WebGLId id) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGraphicsContext3D->deleteRenderbuffer(id);
}

void CCGraphicsContext3DImpl::deleteTexture(WebGLId id) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLTexture* pTexture = idToTexture(id);
    m_pWebGLRenderingContext->deleteTexture(pTexture);
    if(pTexture) pTexture->deref();
   
}

WebGLId CCGraphicsContext3DImpl::createProgram() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    RefPtr<WebGLProgram> pProgram = m_pWebGLRenderingContext->createProgram();
    return programToId(pProgram);
}

WebGLId CCGraphicsContext3DImpl::createShader(CCGLenum shaderType) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    RefPtr<WebGLShader> pShader = m_pWebGLRenderingContext->createShader(shaderType);
    return shaderToId(pShader);
}

void CCGraphicsContext3DImpl::deleteShader(WebGLId shader) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLShader* pShader = idToShader(shader);
    m_pWebGLRenderingContext->deleteShader(pShader);
    if(pShader) pShader->deref();
}

void CCGraphicsContext3DImpl::deleteProgram(WebGLId program) {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    WebGLProgram* pProgram = idToProgram(program);
    m_pWebGLRenderingContext->deleteProgram(pProgram);
    if(pProgram) pProgram->deref();
}

int CCGraphicsContext3DImpl::canvasWidth() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->canvas()->width(); //drawingBufferWidth();
}

int CCGraphicsContext3DImpl::canvasHeight() {
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->canvas()->height(); //drawingBufferHeight();;
}

//Added function to support General file read
unsigned char* CCGraphicsContext3DImpl::getDataFromURL(const char* fileURL, unsigned long* pSize){
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    return m_pWebGLRenderingContext->getDataFromURL(String(fileURL), pSize);
}

// Added function to support Cocos2d to load texture from a filename
void CCGraphicsContext3DImpl::texImage2D(CCGLenum target, CCGLint level, CCGLenum internalformat,
    CCGLenum format, CCGLenum type, const char* urlString, CCGLint * width, CCGLint* height){
    #ifdef DEBUG_GL
    LOG(ERROR) << "CCGraphicsContext3DImpl:" << __FUNCTION__;
    #endif
    
    m_pWebGLRenderingContext->texImage2D(target, level, internalformat, format, type, String(urlString), width, height);
}

bool CCGraphicsContext3DImpl::isContextLost()
{
   return m_pWebGLRenderingContext->isContextLost();
  
}

} // namespace blink
