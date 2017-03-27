

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Mar 27 12:04:26 2017
 */
/* Compiler settings for rtc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __rtc_i_h__
#define __rtc_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPlugin_FWD_DEFINED__
#define __IPlugin_FWD_DEFINED__
typedef interface IPlugin IPlugin;

#endif 	/* __IPlugin_FWD_DEFINED__ */


#ifndef __IMediaDevices_FWD_DEFINED__
#define __IMediaDevices_FWD_DEFINED__
typedef interface IMediaDevices IMediaDevices;

#endif 	/* __IMediaDevices_FWD_DEFINED__ */


#ifndef __IMediaStreamDoubango_FWD_DEFINED__
#define __IMediaStreamDoubango_FWD_DEFINED__
typedef interface IMediaStreamDoubango IMediaStreamDoubango;

#endif 	/* __IMediaStreamDoubango_FWD_DEFINED__ */


#ifndef __IMediaTrackSupportedConstraints_FWD_DEFINED__
#define __IMediaTrackSupportedConstraints_FWD_DEFINED__
typedef interface IMediaTrackSupportedConstraints IMediaTrackSupportedConstraints;

#endif 	/* __IMediaTrackSupportedConstraints_FWD_DEFINED__ */


#ifndef __IPromise_FWD_DEFINED__
#define __IPromise_FWD_DEFINED__
typedef interface IPromise IPromise;

#endif 	/* __IPromise_FWD_DEFINED__ */


#ifndef __IErrorMessage_FWD_DEFINED__
#define __IErrorMessage_FWD_DEFINED__
typedef interface IErrorMessage IErrorMessage;

#endif 	/* __IErrorMessage_FWD_DEFINED__ */


#ifndef __IMediaStreamTrack_FWD_DEFINED__
#define __IMediaStreamTrack_FWD_DEFINED__
typedef interface IMediaStreamTrack IMediaStreamTrack;

#endif 	/* __IMediaStreamTrack_FWD_DEFINED__ */


#ifndef __IMediaTrackConstraints_FWD_DEFINED__
#define __IMediaTrackConstraints_FWD_DEFINED__
typedef interface IMediaTrackConstraints IMediaTrackConstraints;

#endif 	/* __IMediaTrackConstraints_FWD_DEFINED__ */


#ifndef ___IPluginEvents_FWD_DEFINED__
#define ___IPluginEvents_FWD_DEFINED__
typedef interface _IPluginEvents _IPluginEvents;

#endif 	/* ___IPluginEvents_FWD_DEFINED__ */


#ifndef __Plugin_FWD_DEFINED__
#define __Plugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class Plugin Plugin;
#else
typedef struct Plugin Plugin;
#endif /* __cplusplus */

#endif 	/* __Plugin_FWD_DEFINED__ */


#ifndef __MediaDevices_FWD_DEFINED__
#define __MediaDevices_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaDevices MediaDevices;
#else
typedef struct MediaDevices MediaDevices;
#endif /* __cplusplus */

#endif 	/* __MediaDevices_FWD_DEFINED__ */


#ifndef __MediaStream_FWD_DEFINED__
#define __MediaStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaStream MediaStream;
#else
typedef struct MediaStream MediaStream;
#endif /* __cplusplus */

#endif 	/* __MediaStream_FWD_DEFINED__ */


#ifndef __MediaTrackSupportedConstraints_FWD_DEFINED__
#define __MediaTrackSupportedConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaTrackSupportedConstraints MediaTrackSupportedConstraints;
#else
typedef struct MediaTrackSupportedConstraints MediaTrackSupportedConstraints;
#endif /* __cplusplus */

#endif 	/* __MediaTrackSupportedConstraints_FWD_DEFINED__ */


#ifndef __Promise_FWD_DEFINED__
#define __Promise_FWD_DEFINED__

#ifdef __cplusplus
typedef class Promise Promise;
#else
typedef struct Promise Promise;
#endif /* __cplusplus */

#endif 	/* __Promise_FWD_DEFINED__ */


#ifndef __ErrorMessage_FWD_DEFINED__
#define __ErrorMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ErrorMessage ErrorMessage;
#else
typedef struct ErrorMessage ErrorMessage;
#endif /* __cplusplus */

#endif 	/* __ErrorMessage_FWD_DEFINED__ */


#ifndef __MediaStreamTrack_FWD_DEFINED__
#define __MediaStreamTrack_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaStreamTrack MediaStreamTrack;
#else
typedef struct MediaStreamTrack MediaStreamTrack;
#endif /* __cplusplus */

#endif 	/* __MediaStreamTrack_FWD_DEFINED__ */


#ifndef __MediaTrackConstraints_FWD_DEFINED__
#define __MediaTrackConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaTrackConstraints MediaTrackConstraints;
#else
typedef struct MediaTrackConstraints MediaTrackConstraints;
#endif /* __cplusplus */

#endif 	/* __MediaTrackConstraints_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPlugin_INTERFACE_DEFINED__
#define __IPlugin_INTERFACE_DEFINED__

/* interface IPlugin */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7924A16-1A24-472D-B481-92D7C2533F55")
    IPlugin : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_versionName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_mediaDevices( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_isWebRtcPlugin( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createDisplay( 
            /* [retval][out] */ IDispatch **ppDisplay) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createSessionDescription( 
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ IDispatch **ppSdp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createDictOptions( 
            /* [retval][out] */ IDispatch **ppDictOptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createPeerConnection( 
            /* [optional][in] */ VARIANT RTCConfiguration,
            /* [optional][in] */ VARIANT MediaConstraints,
            /* [retval][out] */ IDispatch **ppPeerConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createIceCandidate( 
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [retval][out] */ IDispatch **ppIceCandidate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createMediaStreamTrack( 
            /* [retval][out] */ IDispatch **ppMediaStreamTrack) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE bindEventListener( 
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSources( 
            /* [optional][in] */ VARIANT successCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowList( 
            /* [retval][out] */ BSTR *winList) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_src( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_videoWidth( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_videoHeight( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE fillImageData( 
            /* [in] */ VARIANT imageData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getScreenShot( 
            /* [retval][out] */ BSTR *base64BitmapData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_logSeverity( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_logSeverity( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlugin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPlugin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPlugin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPlugin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPlugin * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_versionName )( 
            IPlugin * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_mediaDevices )( 
            IPlugin * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWebRtcPlugin )( 
            IPlugin * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createDisplay )( 
            IPlugin * This,
            /* [retval][out] */ IDispatch **ppDisplay);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createSessionDescription )( 
            IPlugin * This,
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ IDispatch **ppSdp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createDictOptions )( 
            IPlugin * This,
            /* [retval][out] */ IDispatch **ppDictOptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createPeerConnection )( 
            IPlugin * This,
            /* [optional][in] */ VARIANT RTCConfiguration,
            /* [optional][in] */ VARIANT MediaConstraints,
            /* [retval][out] */ IDispatch **ppPeerConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createIceCandidate )( 
            IPlugin * This,
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [retval][out] */ IDispatch **ppIceCandidate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createMediaStreamTrack )( 
            IPlugin * This,
            /* [retval][out] */ IDispatch **ppMediaStreamTrack);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *bindEventListener )( 
            IPlugin * This,
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSources )( 
            IPlugin * This,
            /* [optional][in] */ VARIANT successCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowList )( 
            IPlugin * This,
            /* [retval][out] */ BSTR *winList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_src )( 
            IPlugin * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_videoWidth )( 
            IPlugin * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_videoHeight )( 
            IPlugin * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *fillImageData )( 
            IPlugin * This,
            /* [in] */ VARIANT imageData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getScreenShot )( 
            IPlugin * This,
            /* [retval][out] */ BSTR *base64BitmapData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_logSeverity )( 
            IPlugin * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_logSeverity )( 
            IPlugin * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IPluginVtbl;

    interface IPlugin
    {
        CONST_VTBL struct IPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlugin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPlugin_get_versionName(This,pVal)	\
    ( (This)->lpVtbl -> get_versionName(This,pVal) ) 

#define IPlugin_get_mediaDevices(This,pVal)	\
    ( (This)->lpVtbl -> get_mediaDevices(This,pVal) ) 

#define IPlugin_get_isWebRtcPlugin(This,pVal)	\
    ( (This)->lpVtbl -> get_isWebRtcPlugin(This,pVal) ) 

#define IPlugin_createDisplay(This,ppDisplay)	\
    ( (This)->lpVtbl -> createDisplay(This,ppDisplay) ) 

#define IPlugin_createSessionDescription(This,RTCSessionDescriptionInit,ppSdp)	\
    ( (This)->lpVtbl -> createSessionDescription(This,RTCSessionDescriptionInit,ppSdp) ) 

#define IPlugin_createDictOptions(This,ppDictOptions)	\
    ( (This)->lpVtbl -> createDictOptions(This,ppDictOptions) ) 

#define IPlugin_createPeerConnection(This,RTCConfiguration,MediaConstraints,ppPeerConnection)	\
    ( (This)->lpVtbl -> createPeerConnection(This,RTCConfiguration,MediaConstraints,ppPeerConnection) ) 

#define IPlugin_createIceCandidate(This,RTCIceCandidateInit,ppIceCandidate)	\
    ( (This)->lpVtbl -> createIceCandidate(This,RTCIceCandidateInit,ppIceCandidate) ) 

#define IPlugin_createMediaStreamTrack(This,ppMediaStreamTrack)	\
    ( (This)->lpVtbl -> createMediaStreamTrack(This,ppMediaStreamTrack) ) 

#define IPlugin_bindEventListener(This,type,listenerCallback,useCapture)	\
    ( (This)->lpVtbl -> bindEventListener(This,type,listenerCallback,useCapture) ) 

#define IPlugin_getSources(This,successCallback)	\
    ( (This)->lpVtbl -> getSources(This,successCallback) ) 

#define IPlugin_getWindowList(This,winList)	\
    ( (This)->lpVtbl -> getWindowList(This,winList) ) 

#define IPlugin_put_src(This,newVal)	\
    ( (This)->lpVtbl -> put_src(This,newVal) ) 

#define IPlugin_get_videoWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_videoWidth(This,pVal) ) 

#define IPlugin_get_videoHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_videoHeight(This,pVal) ) 

#define IPlugin_fillImageData(This,imageData)	\
    ( (This)->lpVtbl -> fillImageData(This,imageData) ) 

#define IPlugin_getScreenShot(This,base64BitmapData)	\
    ( (This)->lpVtbl -> getScreenShot(This,base64BitmapData) ) 

#define IPlugin_get_logSeverity(This,pVal)	\
    ( (This)->lpVtbl -> get_logSeverity(This,pVal) ) 

#define IPlugin_put_logSeverity(This,newVal)	\
    ( (This)->lpVtbl -> put_logSeverity(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlugin_INTERFACE_DEFINED__ */


#ifndef __IMediaDevices_INTERFACE_DEFINED__
#define __IMediaDevices_INTERFACE_DEFINED__

/* interface IMediaDevices */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaDevices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2785B9BD-CA2D-44DA-879B-FD15F9BA1D5F")
    IMediaDevices : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSupportedConstraints( 
            /* [retval][out] */ VARIANT *pConstraints) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getUserMedia( 
            /* [in] */ VARIANT constraints,
            /* [retval][out] */ VARIANT *pPromiseMediaStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaDevicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaDevices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaDevices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaDevices * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaDevices * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaDevices * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaDevices * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaDevices * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSupportedConstraints )( 
            IMediaDevices * This,
            /* [retval][out] */ VARIANT *pConstraints);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getUserMedia )( 
            IMediaDevices * This,
            /* [in] */ VARIANT constraints,
            /* [retval][out] */ VARIANT *pPromiseMediaStream);
        
        END_INTERFACE
    } IMediaDevicesVtbl;

    interface IMediaDevices
    {
        CONST_VTBL struct IMediaDevicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaDevices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaDevices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaDevices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaDevices_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaDevices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaDevices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaDevices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaDevices_getSupportedConstraints(This,pConstraints)	\
    ( (This)->lpVtbl -> getSupportedConstraints(This,pConstraints) ) 

#define IMediaDevices_getUserMedia(This,constraints,pPromiseMediaStream)	\
    ( (This)->lpVtbl -> getUserMedia(This,constraints,pPromiseMediaStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaDevices_INTERFACE_DEFINED__ */


#ifndef __IMediaStreamDoubango_INTERFACE_DEFINED__
#define __IMediaStreamDoubango_INTERFACE_DEFINED__

/* interface IMediaStreamDoubango */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaStreamDoubango;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("39C30596-997E-434C-8171-85B2730A9CA6")
    IMediaStreamDoubango : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getAudioTracks( 
            /* [retval][out] */ VARIANT *Tracks) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getVideoTracks( 
            /* [retval][out] */ VARIANT *Tracks) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTracks( 
            /* [retval][out] */ VARIANT *Tracks) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTrackById( 
            /* [in] */ BSTR trackId,
            /* [retval][out] */ VARIANT *MediaStreamTrack) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addTrack( 
            /* [in] */ VARIANT MediaStreamTrack) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeTrack( 
            /* [in] */ VARIANT MediaStreamTrack) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE clone( 
            /* [retval][out] */ VARIANT *MediaStream) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_active( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onaddtrack( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onaddtrack( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onremovetrack( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onremovetrack( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_oninactive( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_oninactive( 
            /* [in] */ VARIANT newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaStreamDoubangoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaStreamDoubango * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaStreamDoubango * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaStreamDoubango * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaStreamDoubango * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaStreamDoubango * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaStreamDoubango * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaStreamDoubango * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getAudioTracks )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *Tracks);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getVideoTracks )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *Tracks);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getTracks )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *Tracks);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getTrackById )( 
            IMediaStreamDoubango * This,
            /* [in] */ BSTR trackId,
            /* [retval][out] */ VARIANT *MediaStreamTrack);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addTrack )( 
            IMediaStreamDoubango * This,
            /* [in] */ VARIANT MediaStreamTrack);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeTrack )( 
            IMediaStreamDoubango * This,
            /* [in] */ VARIANT MediaStreamTrack);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *clone )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *MediaStream);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_active )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onaddtrack )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onaddtrack )( 
            IMediaStreamDoubango * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onremovetrack )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onremovetrack )( 
            IMediaStreamDoubango * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oninactive )( 
            IMediaStreamDoubango * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_oninactive )( 
            IMediaStreamDoubango * This,
            /* [in] */ VARIANT newVal);
        
        END_INTERFACE
    } IMediaStreamDoubangoVtbl;

    interface IMediaStreamDoubango
    {
        CONST_VTBL struct IMediaStreamDoubangoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaStreamDoubango_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaStreamDoubango_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaStreamDoubango_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaStreamDoubango_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaStreamDoubango_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaStreamDoubango_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaStreamDoubango_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaStreamDoubango_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#define IMediaStreamDoubango_getAudioTracks(This,Tracks)	\
    ( (This)->lpVtbl -> getAudioTracks(This,Tracks) ) 

#define IMediaStreamDoubango_getVideoTracks(This,Tracks)	\
    ( (This)->lpVtbl -> getVideoTracks(This,Tracks) ) 

#define IMediaStreamDoubango_getTracks(This,Tracks)	\
    ( (This)->lpVtbl -> getTracks(This,Tracks) ) 

#define IMediaStreamDoubango_getTrackById(This,trackId,MediaStreamTrack)	\
    ( (This)->lpVtbl -> getTrackById(This,trackId,MediaStreamTrack) ) 

#define IMediaStreamDoubango_addTrack(This,MediaStreamTrack)	\
    ( (This)->lpVtbl -> addTrack(This,MediaStreamTrack) ) 

#define IMediaStreamDoubango_removeTrack(This,MediaStreamTrack)	\
    ( (This)->lpVtbl -> removeTrack(This,MediaStreamTrack) ) 

#define IMediaStreamDoubango_clone(This,MediaStream)	\
    ( (This)->lpVtbl -> clone(This,MediaStream) ) 

#define IMediaStreamDoubango_get_active(This,pVal)	\
    ( (This)->lpVtbl -> get_active(This,pVal) ) 

#define IMediaStreamDoubango_get_onaddtrack(This,pVal)	\
    ( (This)->lpVtbl -> get_onaddtrack(This,pVal) ) 

#define IMediaStreamDoubango_put_onaddtrack(This,newVal)	\
    ( (This)->lpVtbl -> put_onaddtrack(This,newVal) ) 

#define IMediaStreamDoubango_get_onremovetrack(This,pVal)	\
    ( (This)->lpVtbl -> get_onremovetrack(This,pVal) ) 

#define IMediaStreamDoubango_put_onremovetrack(This,newVal)	\
    ( (This)->lpVtbl -> put_onremovetrack(This,newVal) ) 

#define IMediaStreamDoubango_get_oninactive(This,pVal)	\
    ( (This)->lpVtbl -> get_oninactive(This,pVal) ) 

#define IMediaStreamDoubango_put_oninactive(This,newVal)	\
    ( (This)->lpVtbl -> put_oninactive(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaStreamDoubango_INTERFACE_DEFINED__ */


#ifndef __IMediaTrackSupportedConstraints_INTERFACE_DEFINED__
#define __IMediaTrackSupportedConstraints_INTERFACE_DEFINED__

/* interface IMediaTrackSupportedConstraints */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaTrackSupportedConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("212555EE-F2DC-4E4A-B27C-517D29E0B7A4")
    IMediaTrackSupportedConstraints : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_width( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_height( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_aspectRatio( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_frameRate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_facingMode( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_volume( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sampleRate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sampleSize( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_echoCancellation( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_latency( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_channelCount( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_deviceId( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_groupId( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaTrackSupportedConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaTrackSupportedConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaTrackSupportedConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaTrackSupportedConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaTrackSupportedConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaTrackSupportedConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaTrackSupportedConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaTrackSupportedConstraints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_width )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_height )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_aspectRatio )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameRate )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_facingMode )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volume )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sampleRate )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sampleSize )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_echoCancellation )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_latency )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_channelCount )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_deviceId )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_groupId )( 
            IMediaTrackSupportedConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IMediaTrackSupportedConstraintsVtbl;

    interface IMediaTrackSupportedConstraints
    {
        CONST_VTBL struct IMediaTrackSupportedConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaTrackSupportedConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaTrackSupportedConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaTrackSupportedConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaTrackSupportedConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaTrackSupportedConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaTrackSupportedConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaTrackSupportedConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaTrackSupportedConstraints_get_width(This,pVal)	\
    ( (This)->lpVtbl -> get_width(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_height(This,pVal)	\
    ( (This)->lpVtbl -> get_height(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_aspectRatio(This,pVal)	\
    ( (This)->lpVtbl -> get_aspectRatio(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_frameRate(This,pVal)	\
    ( (This)->lpVtbl -> get_frameRate(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_facingMode(This,pVal)	\
    ( (This)->lpVtbl -> get_facingMode(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_volume(This,pVal)	\
    ( (This)->lpVtbl -> get_volume(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_sampleRate(This,pVal)	\
    ( (This)->lpVtbl -> get_sampleRate(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_sampleSize(This,pVal)	\
    ( (This)->lpVtbl -> get_sampleSize(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_echoCancellation(This,pVal)	\
    ( (This)->lpVtbl -> get_echoCancellation(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_latency(This,pVal)	\
    ( (This)->lpVtbl -> get_latency(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_channelCount(This,pVal)	\
    ( (This)->lpVtbl -> get_channelCount(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_deviceId(This,pVal)	\
    ( (This)->lpVtbl -> get_deviceId(This,pVal) ) 

#define IMediaTrackSupportedConstraints_get_groupId(This,pVal)	\
    ( (This)->lpVtbl -> get_groupId(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaTrackSupportedConstraints_INTERFACE_DEFINED__ */


#ifndef __IPromise_INTERFACE_DEFINED__
#define __IPromise_INTERFACE_DEFINED__

/* interface IPromise */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPromise;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59C63051-0B14-4D44-8015-BD42BBCE4964")
    IPromise : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE then( 
            /* [optional][in] */ VARIANT onFulfilled,
            /* [retval][out] */ VARIANT *pThePromise) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE catchh( 
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPromiseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPromise * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPromise * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPromise * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPromise * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPromise * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPromise * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPromise * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *then )( 
            IPromise * This,
            /* [optional][in] */ VARIANT onFulfilled,
            /* [retval][out] */ VARIANT *pThePromise);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *catchh )( 
            IPromise * This,
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise);
        
        END_INTERFACE
    } IPromiseVtbl;

    interface IPromise
    {
        CONST_VTBL struct IPromiseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPromise_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPromise_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPromise_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPromise_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPromise_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPromise_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPromise_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPromise_then(This,onFulfilled,pThePromise)	\
    ( (This)->lpVtbl -> then(This,onFulfilled,pThePromise) ) 

#define IPromise_catchh(This,onRejected,pThePromise)	\
    ( (This)->lpVtbl -> catchh(This,onRejected,pThePromise) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPromise_INTERFACE_DEFINED__ */


#ifndef __IErrorMessage_INTERFACE_DEFINED__
#define __IErrorMessage_INTERFACE_DEFINED__

/* interface IErrorMessage */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IErrorMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97C09588-9992-4809-900B-E7319C615DB1")
    IErrorMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IErrorMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IErrorMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IErrorMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IErrorMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IErrorMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IErrorMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IErrorMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IErrorMessage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IErrorMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IErrorMessageVtbl;

    interface IErrorMessage
    {
        CONST_VTBL struct IErrorMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IErrorMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IErrorMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IErrorMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IErrorMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IErrorMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IErrorMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IErrorMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IErrorMessage_get_name(This,pVal)	\
    ( (This)->lpVtbl -> get_name(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IErrorMessage_INTERFACE_DEFINED__ */


#ifndef __IMediaStreamTrack_INTERFACE_DEFINED__
#define __IMediaStreamTrack_INTERFACE_DEFINED__

/* interface IMediaStreamTrack */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaStreamTrack;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F5B0823-989F-4E6F-A486-8ABFD523B22D")
    IMediaStreamTrack : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_kind( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_label( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_muted( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmute( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmute( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onunmute( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onunmute( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onended( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onended( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getCapabilities( 
            /* [retval][out] */ VARIANT *MediaTrackCapabilities) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getConstraints( 
            /* [retval][out] */ VARIANT *MediaTrackConstraints) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSettings( 
            /* [retval][out] */ VARIANT *MediaTrackSettings) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE applyConstraints( 
            /* [in] */ VARIANT MediaTrackConstraints) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onoverconstrained( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onoverconstrained( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE clone( 
            /* [retval][out] */ VARIANT *MediaStreamTrack) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaStreamTrackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaStreamTrack * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaStreamTrack * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaStreamTrack * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaStreamTrack * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaStreamTrack * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaStreamTrack * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaStreamTrack * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_kind )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_label )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_enabled )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_muted )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onmute )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onmute )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onunmute )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onunmute )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_readyState )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onended )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onended )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getCapabilities )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *MediaTrackCapabilities);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getConstraints )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *MediaTrackConstraints);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSettings )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *MediaTrackSettings);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *applyConstraints )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT MediaTrackConstraints);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onoverconstrained )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onoverconstrained )( 
            IMediaStreamTrack * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *clone )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ VARIANT *MediaStreamTrack);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *stop )( 
            IMediaStreamTrack * This);
        
        END_INTERFACE
    } IMediaStreamTrackVtbl;

    interface IMediaStreamTrack
    {
        CONST_VTBL struct IMediaStreamTrackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaStreamTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaStreamTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaStreamTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaStreamTrack_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaStreamTrack_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaStreamTrack_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaStreamTrack_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaStreamTrack_get_kind(This,pVal)	\
    ( (This)->lpVtbl -> get_kind(This,pVal) ) 

#define IMediaStreamTrack_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#define IMediaStreamTrack_get_label(This,pVal)	\
    ( (This)->lpVtbl -> get_label(This,pVal) ) 

#define IMediaStreamTrack_get_enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_enabled(This,pVal) ) 

#define IMediaStreamTrack_put_enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_enabled(This,newVal) ) 

#define IMediaStreamTrack_get_muted(This,pVal)	\
    ( (This)->lpVtbl -> get_muted(This,pVal) ) 

#define IMediaStreamTrack_get_onmute(This,pVal)	\
    ( (This)->lpVtbl -> get_onmute(This,pVal) ) 

#define IMediaStreamTrack_put_onmute(This,newVal)	\
    ( (This)->lpVtbl -> put_onmute(This,newVal) ) 

#define IMediaStreamTrack_get_onunmute(This,pVal)	\
    ( (This)->lpVtbl -> get_onunmute(This,pVal) ) 

#define IMediaStreamTrack_put_onunmute(This,newVal)	\
    ( (This)->lpVtbl -> put_onunmute(This,newVal) ) 

#define IMediaStreamTrack_get_readyState(This,pVal)	\
    ( (This)->lpVtbl -> get_readyState(This,pVal) ) 

#define IMediaStreamTrack_get_onended(This,pVal)	\
    ( (This)->lpVtbl -> get_onended(This,pVal) ) 

#define IMediaStreamTrack_put_onended(This,newVal)	\
    ( (This)->lpVtbl -> put_onended(This,newVal) ) 

#define IMediaStreamTrack_getCapabilities(This,MediaTrackCapabilities)	\
    ( (This)->lpVtbl -> getCapabilities(This,MediaTrackCapabilities) ) 

#define IMediaStreamTrack_getConstraints(This,MediaTrackConstraints)	\
    ( (This)->lpVtbl -> getConstraints(This,MediaTrackConstraints) ) 

#define IMediaStreamTrack_getSettings(This,MediaTrackSettings)	\
    ( (This)->lpVtbl -> getSettings(This,MediaTrackSettings) ) 

#define IMediaStreamTrack_applyConstraints(This,MediaTrackConstraints)	\
    ( (This)->lpVtbl -> applyConstraints(This,MediaTrackConstraints) ) 

#define IMediaStreamTrack_get_onoverconstrained(This,pVal)	\
    ( (This)->lpVtbl -> get_onoverconstrained(This,pVal) ) 

#define IMediaStreamTrack_put_onoverconstrained(This,newVal)	\
    ( (This)->lpVtbl -> put_onoverconstrained(This,newVal) ) 

#define IMediaStreamTrack_clone(This,MediaStreamTrack)	\
    ( (This)->lpVtbl -> clone(This,MediaStreamTrack) ) 

#define IMediaStreamTrack_stop(This)	\
    ( (This)->lpVtbl -> stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaStreamTrack_INTERFACE_DEFINED__ */


#ifndef __IMediaTrackConstraints_INTERFACE_DEFINED__
#define __IMediaTrackConstraints_INTERFACE_DEFINED__

/* interface IMediaTrackConstraints */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaTrackConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA8FD86D-739E-49E3-81DB-4DE70F63B892")
    IMediaTrackConstraints : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaTrackConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaTrackConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaTrackConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaTrackConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaTrackConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaTrackConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaTrackConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaTrackConstraints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMediaTrackConstraintsVtbl;

    interface IMediaTrackConstraints
    {
        CONST_VTBL struct IMediaTrackConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaTrackConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaTrackConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaTrackConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaTrackConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaTrackConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaTrackConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaTrackConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaTrackConstraints_INTERFACE_DEFINED__ */



#ifndef __rtcLib_LIBRARY_DEFINED__
#define __rtcLib_LIBRARY_DEFINED__

/* library rtcLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_rtcLib;

#ifndef ___IPluginEvents_DISPINTERFACE_DEFINED__
#define ___IPluginEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IPluginEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IPluginEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2D6EAD85-CE94-49DA-BC4F-1C122C3558B3")
    _IPluginEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IPluginEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IPluginEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IPluginEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IPluginEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IPluginEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IPluginEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IPluginEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IPluginEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IPluginEventsVtbl;

    interface _IPluginEvents
    {
        CONST_VTBL struct _IPluginEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IPluginEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IPluginEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IPluginEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IPluginEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IPluginEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IPluginEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IPluginEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IPluginEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Plugin;

#ifdef __cplusplus

class DECLSPEC_UUID("F8CFFADD-7ED1-46E9-BEFD-DE7DE1092074")
Plugin;
#endif

EXTERN_C const CLSID CLSID_MediaDevices;

#ifdef __cplusplus

class DECLSPEC_UUID("8715C55C-EB79-40E7-BBAE-CDFC127498C9")
MediaDevices;
#endif

EXTERN_C const CLSID CLSID_MediaStream;

#ifdef __cplusplus

class DECLSPEC_UUID("B1F9B307-84D4-49D1-9817-92541F56D9ED")
MediaStream;
#endif

EXTERN_C const CLSID CLSID_MediaTrackSupportedConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("FC18B94E-A34B-41A4-9ECC-8DC9A935565B")
MediaTrackSupportedConstraints;
#endif

EXTERN_C const CLSID CLSID_Promise;

#ifdef __cplusplus

class DECLSPEC_UUID("310F737F-B074-46C3-AF4B-6CD06D69C613")
Promise;
#endif

EXTERN_C const CLSID CLSID_ErrorMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("751EF633-E34A-4CB7-BA2F-8E8044CFC7FA")
ErrorMessage;
#endif

EXTERN_C const CLSID CLSID_MediaStreamTrack;

#ifdef __cplusplus

class DECLSPEC_UUID("85C22736-EA22-41BF-A7A2-E25DBD63BA3B")
MediaStreamTrack;
#endif

EXTERN_C const CLSID CLSID_MediaTrackConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("66EBA785-4C5C-48E3-8087-4F52E252AE92")
MediaTrackConstraints;
#endif
#endif /* __rtcLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


