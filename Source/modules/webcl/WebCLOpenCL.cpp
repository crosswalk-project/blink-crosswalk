// Copyright (C) 2015 Intel Corporation All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#if ENABLE(WEBCL)
#include "modules/webcl/WebCLOpenCL.h"

#if defined(WTF_OS_LINUX) || OS(ANDROID)
#include <dlfcn.h>
#endif
#include <string.h>
#include <stdio.h>
#include <wtf/CPU.h>

// Track different opencl libs.
#if defined(WTF_OS_LINUX) || OS(ANDROID)
#if defined(WTF_CPU_ARM)
#define LIBS {"libOpenCL.so"}
#define SO_LEN 1

// After the byt, IA devices are shipped with "libOpenCL.so"
// by default. Before that, IA devices are shipped with
// "libPVROCL.so" to leverage PowerVR GPU for OpenCL.
//
// Note that there are some IA devices have "libOpenCL.so.1"
// but not "libOpenCL.so", such as: Asus Memo. So add "libOpenCL.so.1"
// to the OpenCL library list.
#elif defined(WTF_CPU_X86)
#define LIBS {"libOpenCL.so", "libOpenCL.so.1", "libPVROCL.so"}
#define SO_LEN 3

#else
#define LIBS {}
#define SO_LEN 0

#endif // defined(WTF_CPU_ARM) || defined(WTF_CPU_X86)
#endif // defined(WTF_OS_LINUX) || OS(ANDROID)

/* Platform APIs */
cl_int (CL_API_CALL *web_clGetPlatformIDs)(cl_uint num_entries, cl_platform_id* platforms, cl_uint* num_platforms);

cl_int (CL_API_CALL *web_clGetPlatformInfo)(cl_platform_id platform, cl_platform_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clUnloadPlatformCompiler)(cl_platform_id platform);

/* Device APIs */
cl_int (CL_API_CALL *web_clGetDeviceInfo)(cl_device_id device, cl_device_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clGetDeviceIDs)(cl_platform_id platform, cl_device_type device_type, cl_uint num_entries, cl_device_id* devices, cl_uint* num_devices);

cl_int (CL_API_CALL *web_clReleaseDevice)(cl_device_id device);

/* Context APIs */
cl_int (CL_API_CALL *web_clGetContextInfo)(cl_context context, cl_context_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clReleaseContext)(cl_context context);

cl_context (CL_API_CALL *web_clCreateContext)(const cl_context_properties* properties, cl_uint num_devices, const cl_device_id* devices, void (CL_API_CALL* pfn_notify)(const char* errinfo, const void* private_info, size_t cb, void* user_data), void* user_data, cl_int* errcode_ret);

cl_context (CL_API_CALL *web_clCreateContextFromType)(const cl_context_properties* properties, cl_device_type device_type, void (CL_API_CALL *pfn_notify)(const char* errinfo, const void* private_info, size_t cb, void* user_data), void* user_data, cl_int* errcode_ret);

/* CommandQueue APIs */
cl_int (CL_API_CALL *web_clGetCommandQueueInfo)(cl_command_queue command_queue, cl_command_queue_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clReleaseCommandQueue)(cl_command_queue command_queue);

cl_command_queue (CL_API_CALL *web_clCreateCommandQueue)(cl_context context, cl_device_id device, cl_command_queue_properties properties, cl_int* errcode_ret);

/* Memory Object APIs */
cl_mem (CL_API_CALL *web_clCreateBuffer)(cl_context context, cl_mem_flags flags, size_t size, void* host_ptr, cl_int* errcode_ret);

cl_mem (CL_API_CALL *web_clCreateSubBuffer)(cl_mem buffer, cl_mem_flags flags, cl_buffer_create_type buffer_create_type, const void* buffer_create_info, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clGetMemObjectInfo)(cl_mem memobj, cl_mem_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clReleaseMemObject)(cl_mem memobj);

cl_int (CL_API_CALL *web_clGetImageInfo)(cl_mem image, cl_image_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_mem (CL_API_CALL *web_clCreateImage)(cl_context context, cl_mem_flags flags, const cl_image_format* image_format, const cl_image_desc* image_desc, void* host_ptr, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clGetSupportedImageFormats)(cl_context context, cl_mem_flags flags, cl_mem_object_type image_type, cl_uint num_entries, cl_image_format* image_formats, cl_uint* num_image_formats);

/* Sampler APIs */
cl_sampler (CL_API_CALL *web_clCreateSampler)(cl_context context, cl_bool normalized_coords, cl_addressing_mode addressing_mode, cl_filter_mode filter_mode, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clGetSamplerInfo)(cl_sampler sampler, cl_sampler_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clReleaseSampler)(cl_sampler sampler);

/* Program Object APIs */
cl_int (CL_API_CALL *web_clGetProgramInfo)(cl_program program, cl_program_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clGetProgramBuildInfo)(cl_program program, cl_device_id device, cl_program_build_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clBuildProgram)(cl_program program, cl_uint num_devices, const cl_device_id* device_list, const char* options, void (CL_API_CALL *pfn_notify)(cl_program program, void* user_data), void* user_data);

cl_int (CL_API_CALL *web_clReleaseProgram)(cl_program program);

cl_program (CL_API_CALL *web_clCreateProgramWithSource)(cl_context context, cl_uint const, const char** strings, const size_t* lengths, cl_int* errcode_ret);

/* Kernel Object APIs */
cl_int (CL_API_CALL *web_clGetKernelInfo)(cl_kernel kernel, cl_kernel_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clGetKernelWorkGroupInfo)(cl_kernel kernel, cl_device_id device, cl_kernel_work_group_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clSetKernelArg)(cl_kernel kernel, cl_uint arg_index, size_t arg_size, const void* arg_value);

cl_int (CL_API_CALL *web_clReleaseKernel)(cl_kernel kernel);

cl_kernel (CL_API_CALL *web_clCreateKernel)(cl_program program, const char* kernel_name, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clCreateKernelsInProgram)(cl_program program, cl_uint num_kernels, cl_kernel* kernels, cl_uint* num_kernels_ret);

/* Event Object APIs */
cl_event (CL_API_CALL *web_clCreateUserEvent)(cl_context context, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clWaitForEvents)(cl_uint num_events, const cl_event* event_list);

cl_int (CL_API_CALL *web_clGetEventInfo)(cl_event event, cl_event_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

cl_int (CL_API_CALL *web_clSetUserEventStatus)(cl_event event, cl_int execution_status);

cl_int (CL_API_CALL *web_clReleaseEvent)(cl_event event);

cl_int (CL_API_CALL *web_clSetEventCallback)(cl_event event, cl_int command_exec_callback_type, void (CL_API_CALL* pfn_event_notify)(cl_event event, cl_int event_command_exec_status, void* user_data), void* user_data);

cl_int (CL_API_CALL *web_clGetEventProfilingInfo)(cl_event event, cl_profiling_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

/* Flush and Finish APIs */
cl_int (CL_API_CALL *web_clFlush)(cl_command_queue command_queue);

cl_int (CL_API_CALL *web_clFinish)(cl_command_queue command_queue);

/* enqueue commands APIs */
cl_int (CL_API_CALL *web_clEnqueueReadBuffer)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_read, size_t offset, size_t size, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueWriteBuffer)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_write, size_t offset, size_t size, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueReadImage)(cl_command_queue command_queue, cl_mem image, cl_bool blocking_read, const size_t* origin, const size_t* region, size_t row_pitch, size_t slice_pitch, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueWriteImage)(cl_command_queue command_queue, cl_mem image, cl_bool blocking_write, const size_t* origin, const size_t* region, size_t input_row_pitch, size_t input_slice_pitch, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueCopyBuffer)(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_buffer, size_t src_offset, size_t dst_offset, size_t size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueBarrierWithWaitList)(cl_command_queue command_queue, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueMarkerWithWaitList)(cl_command_queue command_queue, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueTask)(cl_command_queue command_queue, cl_kernel kernel, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueReadBufferRect)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_read, const size_t* buffer_origin, const size_t* host_origin, const size_t* region, size_t buffer_row_pitch, size_t buffer_slice_pitch, size_t host_row_pitch, size_t host_slice_pitch, void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueWriteBufferRect)(cl_command_queue command_queue, cl_mem buffer, cl_bool blocking_write, const size_t* buffer_origin, const size_t* host_origin, const size_t* region, size_t buffer_row_pitch, size_t buffer_slice_pitch, size_t host_row_pitch, size_t host_slice_pitch, const void* ptr, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueNDRangeKernel)(cl_command_queue command_queue, cl_kernel kernel, cl_uint work_dim, const size_t* global_work_offset, const size_t* global_work_size, const size_t* local_work_size, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueCopyBufferRect)(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_buffer, const size_t* src_origin, const size_t* dst_origin, const size_t* region, size_t src_row_pitch, size_t src_slice_pitch, size_t dst_row_pitch, size_t dst_slice_pitch, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueCopyImage)(cl_command_queue command_queue, cl_mem src_image, cl_mem dst_image, const size_t* src_origin, const size_t* dst_origin, const size_t* region, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueCopyImageToBuffer)(cl_command_queue command_queue, cl_mem src_image, cl_mem dst_buffer, const size_t* src_origin, const size_t* region, size_t dst_offset, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueCopyBufferToImage)(cl_command_queue command_queue, cl_mem src_buffer, cl_mem dst_image, size_t src_offset, const size_t* dst_origin, const size_t* region, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

/* OpenCL Extention */
cl_int (CL_API_CALL *web_clEnqueueAcquireGLObjects)(cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_int (CL_API_CALL *web_clEnqueueReleaseGLObjects)(cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects, cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event);

cl_mem (CL_API_CALL *web_clCreateFromGLBuffer)(cl_context context, cl_mem_flags flags, GLuint bufobj, cl_int* errcode_ret);

cl_mem (CL_API_CALL *web_clCreateFromGLRenderbuffer)(cl_context context, cl_mem_flags flags, GLuint renderbuffer, cl_int* errcode_ret);

cl_mem (CL_API_CALL *web_clCreateFromGLTexture)(cl_context context, cl_mem_flags flags, GLenum texture_target, GLint miplevel, GLuint texture, cl_int* errcode_ret);

cl_int (CL_API_CALL *web_clGetGLTextureInfo)(cl_mem, cl_gl_texture_info, size_t, void *, size_t *);

#if defined(WTF_OS_LINUX) || OS(ANDROID)
#define MAP_FUNC(fn)  { *(void**)(&fn) = dlsym(handle, #fn); if(!fn) return false; }

static const char* DEFAULT_SO[] = LIBS;
static const int DEFAULT_SO_LEN = SO_LEN;
static void* handle = nullptr;
static bool getCLHandle(const char** libs, int length)
{
    for (int i = 0; i < length; ++i) {
        handle = dlopen(libs[i], RTLD_LAZY);
        if (handle)
            return true;
    }

    /* FAILURE: COULD NOT OPEN .SO */
    return false;
}
#endif // defined(WTF_OS_LINUX) || OS(ANDROID)

bool init(const char** libs, int length)
{
    const char** mLibs = (libs == 0 ? DEFAULT_SO : libs);
    int mLength = (libs == 0 ? DEFAULT_SO_LEN: length);

    if (!getCLHandle(mLibs, mLength))
        return false;
    MAP_FUNC(clGetImageInfo);
    MAP_FUNC(clCreateBuffer);
    MAP_FUNC(clCreateSubBuffer);
    MAP_FUNC(clGetCommandQueueInfo);
    MAP_FUNC(clEnqueueWriteBuffer);
    MAP_FUNC(clFinish);
    MAP_FUNC(clFlush);
    MAP_FUNC(clEnqueueReadBuffer);
    MAP_FUNC(clReleaseCommandQueue);
    MAP_FUNC(clEnqueueWriteImage);
    MAP_FUNC(clEnqueueCopyBuffer);
    MAP_FUNC(clEnqueueBarrierWithWaitList);
    MAP_FUNC(clEnqueueAcquireGLObjects);
    MAP_FUNC(clEnqueueReleaseGLObjects);
    MAP_FUNC(clEnqueueMarkerWithWaitList);
    MAP_FUNC(clEnqueueTask);
    MAP_FUNC(clEnqueueWriteBufferRect);
    MAP_FUNC(clEnqueueReadBufferRect);
    MAP_FUNC(clEnqueueReadImage);
    MAP_FUNC(clEnqueueNDRangeKernel);
    MAP_FUNC(clEnqueueCopyBufferRect);
    MAP_FUNC(clEnqueueCopyImage);
    MAP_FUNC(clEnqueueCopyImageToBuffer);
    MAP_FUNC(clEnqueueCopyBufferToImage);
    MAP_FUNC(clCreateCommandQueue);
    MAP_FUNC(clGetContextInfo);
    MAP_FUNC(clCreateProgramWithSource);
    MAP_FUNC(clCreateImage);
    MAP_FUNC(clCreateFromGLBuffer);
    MAP_FUNC(clCreateFromGLRenderbuffer);
    MAP_FUNC(clCreateSampler);
    MAP_FUNC(clCreateFromGLTexture);
    MAP_FUNC(clCreateUserEvent);
    MAP_FUNC(clWaitForEvents);
    MAP_FUNC(clReleaseContext);
    MAP_FUNC(clGetSupportedImageFormats);
    MAP_FUNC(clCreateContext);
    MAP_FUNC(clCreateContextFromType);
    MAP_FUNC(clGetPlatformIDs);
    MAP_FUNC(clUnloadPlatformCompiler);
    MAP_FUNC(clGetDeviceIDs);
    MAP_FUNC(clGetDeviceInfo);
    MAP_FUNC(clReleaseDevice);
    MAP_FUNC(clGetEventInfo);
    MAP_FUNC(clSetUserEventStatus);
    MAP_FUNC(clReleaseEvent);
    MAP_FUNC(clSetEventCallback);
    MAP_FUNC(clGetEventProfilingInfo);
    MAP_FUNC(clGetGLTextureInfo);
    MAP_FUNC(clGetKernelInfo);
    MAP_FUNC(clGetKernelWorkGroupInfo);
    MAP_FUNC(clSetKernelArg);
    MAP_FUNC(clReleaseKernel);
    MAP_FUNC(clGetMemObjectInfo);
    MAP_FUNC(clReleaseMemObject);
    MAP_FUNC(clGetPlatformInfo);
    MAP_FUNC(clGetProgramInfo);
    MAP_FUNC(clCreateKernel);
    MAP_FUNC(clGetProgramBuildInfo);
    MAP_FUNC(clBuildProgram);
    MAP_FUNC(clCreateKernelsInProgram);
    MAP_FUNC(clReleaseProgram);
    MAP_FUNC(clGetSamplerInfo);
    MAP_FUNC(clReleaseSampler);

    return true;
}

#endif // ENABLE(WEBCL)
