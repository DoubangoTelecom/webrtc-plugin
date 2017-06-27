

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 27 05:42:58 2017
 */
/* Compiler settings for rtc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
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


#ifndef __IMediaDeviceInfo_FWD_DEFINED__
#define __IMediaDeviceInfo_FWD_DEFINED__
typedef interface IMediaDeviceInfo IMediaDeviceInfo;

#endif 	/* __IMediaDeviceInfo_FWD_DEFINED__ */


#ifndef __IRTCPeerConnection_FWD_DEFINED__
#define __IRTCPeerConnection_FWD_DEFINED__
typedef interface IRTCPeerConnection IRTCPeerConnection;

#endif 	/* __IRTCPeerConnection_FWD_DEFINED__ */


#ifndef __IRTCSessionDescription_FWD_DEFINED__
#define __IRTCSessionDescription_FWD_DEFINED__
typedef interface IRTCSessionDescription IRTCSessionDescription;

#endif 	/* __IRTCSessionDescription_FWD_DEFINED__ */


#ifndef __IRTCError_FWD_DEFINED__
#define __IRTCError_FWD_DEFINED__
typedef interface IRTCError IRTCError;

#endif 	/* __IRTCError_FWD_DEFINED__ */


#ifndef __IRTCIceCandidate_FWD_DEFINED__
#define __IRTCIceCandidate_FWD_DEFINED__
typedef interface IRTCIceCandidate IRTCIceCandidate;

#endif 	/* __IRTCIceCandidate_FWD_DEFINED__ */


#ifndef __IRTCPeerConnectionIceEvent_FWD_DEFINED__
#define __IRTCPeerConnectionIceEvent_FWD_DEFINED__
typedef interface IRTCPeerConnectionIceEvent IRTCPeerConnectionIceEvent;

#endif 	/* __IRTCPeerConnectionIceEvent_FWD_DEFINED__ */


#ifndef __IMediaStreamEvent_FWD_DEFINED__
#define __IMediaStreamEvent_FWD_DEFINED__
typedef interface IMediaStreamEvent IMediaStreamEvent;

#endif 	/* __IMediaStreamEvent_FWD_DEFINED__ */


#ifndef __IEmpty_FWD_DEFINED__
#define __IEmpty_FWD_DEFINED__
typedef interface IEmpty IEmpty;

#endif 	/* __IEmpty_FWD_DEFINED__ */


#ifndef __IRTCDataChannel_FWD_DEFINED__
#define __IRTCDataChannel_FWD_DEFINED__
typedef interface IRTCDataChannel IRTCDataChannel;

#endif 	/* __IRTCDataChannel_FWD_DEFINED__ */


#ifndef __IRTCDataChannelEvent_FWD_DEFINED__
#define __IRTCDataChannelEvent_FWD_DEFINED__
typedef interface IRTCDataChannelEvent IRTCDataChannelEvent;

#endif 	/* __IRTCDataChannelEvent_FWD_DEFINED__ */


#ifndef __IRTCWindow_FWD_DEFINED__
#define __IRTCWindow_FWD_DEFINED__
typedef interface IRTCWindow IRTCWindow;

#endif 	/* __IRTCWindow_FWD_DEFINED__ */


#ifndef __IRTCScreen_FWD_DEFINED__
#define __IRTCScreen_FWD_DEFINED__
typedef interface IRTCScreen IRTCScreen;

#endif 	/* __IRTCScreen_FWD_DEFINED__ */


#ifndef __IRTCDTMFSender_FWD_DEFINED__
#define __IRTCDTMFSender_FWD_DEFINED__
typedef interface IRTCDTMFSender IRTCDTMFSender;

#endif 	/* __IRTCDTMFSender_FWD_DEFINED__ */


#ifndef __IRTCTrackEvent_FWD_DEFINED__
#define __IRTCTrackEvent_FWD_DEFINED__
typedef interface IRTCTrackEvent IRTCTrackEvent;

#endif 	/* __IRTCTrackEvent_FWD_DEFINED__ */


#ifndef __IRTCRtpSender_FWD_DEFINED__
#define __IRTCRtpSender_FWD_DEFINED__
typedef interface IRTCRtpSender IRTCRtpSender;

#endif 	/* __IRTCRtpSender_FWD_DEFINED__ */


#ifndef __IRTCDTMFToneChangeEvent_FWD_DEFINED__
#define __IRTCDTMFToneChangeEvent_FWD_DEFINED__
typedef interface IRTCDTMFToneChangeEvent IRTCDTMFToneChangeEvent;

#endif 	/* __IRTCDTMFToneChangeEvent_FWD_DEFINED__ */


#ifndef __IRTCStats_FWD_DEFINED__
#define __IRTCStats_FWD_DEFINED__
typedef interface IRTCStats IRTCStats;

#endif 	/* __IRTCStats_FWD_DEFINED__ */


#ifndef __IRTCStatsReport_FWD_DEFINED__
#define __IRTCStatsReport_FWD_DEFINED__
typedef interface IRTCStatsReport IRTCStatsReport;

#endif 	/* __IRTCStatsReport_FWD_DEFINED__ */


#ifndef __IRTCRtpReceiver_FWD_DEFINED__
#define __IRTCRtpReceiver_FWD_DEFINED__
typedef interface IRTCRtpReceiver IRTCRtpReceiver;

#endif 	/* __IRTCRtpReceiver_FWD_DEFINED__ */


#ifndef __IMessageEvent_FWD_DEFINED__
#define __IMessageEvent_FWD_DEFINED__
typedef interface IMessageEvent IMessageEvent;

#endif 	/* __IMessageEvent_FWD_DEFINED__ */


#ifndef __IJsArray_FWD_DEFINED__
#define __IJsArray_FWD_DEFINED__
typedef interface IJsArray IJsArray;

#endif 	/* __IJsArray_FWD_DEFINED__ */


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


#ifndef __MediaDeviceInfo_FWD_DEFINED__
#define __MediaDeviceInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaDeviceInfo MediaDeviceInfo;
#else
typedef struct MediaDeviceInfo MediaDeviceInfo;
#endif /* __cplusplus */

#endif 	/* __MediaDeviceInfo_FWD_DEFINED__ */


#ifndef __RTCPeerConnection_FWD_DEFINED__
#define __RTCPeerConnection_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCPeerConnection RTCPeerConnection;
#else
typedef struct RTCPeerConnection RTCPeerConnection;
#endif /* __cplusplus */

#endif 	/* __RTCPeerConnection_FWD_DEFINED__ */


#ifndef __RTCSessionDescription_FWD_DEFINED__
#define __RTCSessionDescription_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCSessionDescription RTCSessionDescription;
#else
typedef struct RTCSessionDescription RTCSessionDescription;
#endif /* __cplusplus */

#endif 	/* __RTCSessionDescription_FWD_DEFINED__ */


#ifndef __RTCError_FWD_DEFINED__
#define __RTCError_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCError RTCError;
#else
typedef struct RTCError RTCError;
#endif /* __cplusplus */

#endif 	/* __RTCError_FWD_DEFINED__ */


#ifndef __RTCIceCandidate_FWD_DEFINED__
#define __RTCIceCandidate_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCIceCandidate RTCIceCandidate;
#else
typedef struct RTCIceCandidate RTCIceCandidate;
#endif /* __cplusplus */

#endif 	/* __RTCIceCandidate_FWD_DEFINED__ */


#ifndef __RTCPeerConnectionIceEvent_FWD_DEFINED__
#define __RTCPeerConnectionIceEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent;
#else
typedef struct RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent;
#endif /* __cplusplus */

#endif 	/* __RTCPeerConnectionIceEvent_FWD_DEFINED__ */


#ifndef __MediaStreamEvent_FWD_DEFINED__
#define __MediaStreamEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaStreamEvent MediaStreamEvent;
#else
typedef struct MediaStreamEvent MediaStreamEvent;
#endif /* __cplusplus */

#endif 	/* __MediaStreamEvent_FWD_DEFINED__ */


#ifndef __Empty_FWD_DEFINED__
#define __Empty_FWD_DEFINED__

#ifdef __cplusplus
typedef class Empty Empty;
#else
typedef struct Empty Empty;
#endif /* __cplusplus */

#endif 	/* __Empty_FWD_DEFINED__ */


#ifndef __RTCDataChannel_FWD_DEFINED__
#define __RTCDataChannel_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCDataChannel RTCDataChannel;
#else
typedef struct RTCDataChannel RTCDataChannel;
#endif /* __cplusplus */

#endif 	/* __RTCDataChannel_FWD_DEFINED__ */


#ifndef __RTCDataChannelEvent_FWD_DEFINED__
#define __RTCDataChannelEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCDataChannelEvent RTCDataChannelEvent;
#else
typedef struct RTCDataChannelEvent RTCDataChannelEvent;
#endif /* __cplusplus */

#endif 	/* __RTCDataChannelEvent_FWD_DEFINED__ */


#ifndef __RTCWindow_FWD_DEFINED__
#define __RTCWindow_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCWindow RTCWindow;
#else
typedef struct RTCWindow RTCWindow;
#endif /* __cplusplus */

#endif 	/* __RTCWindow_FWD_DEFINED__ */


#ifndef __RTCScreen_FWD_DEFINED__
#define __RTCScreen_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCScreen RTCScreen;
#else
typedef struct RTCScreen RTCScreen;
#endif /* __cplusplus */

#endif 	/* __RTCScreen_FWD_DEFINED__ */


#ifndef __RTCDTMFSender_FWD_DEFINED__
#define __RTCDTMFSender_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCDTMFSender RTCDTMFSender;
#else
typedef struct RTCDTMFSender RTCDTMFSender;
#endif /* __cplusplus */

#endif 	/* __RTCDTMFSender_FWD_DEFINED__ */


#ifndef __RTCTrackEvent_FWD_DEFINED__
#define __RTCTrackEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCTrackEvent RTCTrackEvent;
#else
typedef struct RTCTrackEvent RTCTrackEvent;
#endif /* __cplusplus */

#endif 	/* __RTCTrackEvent_FWD_DEFINED__ */


#ifndef __RTCRtpSender_FWD_DEFINED__
#define __RTCRtpSender_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCRtpSender RTCRtpSender;
#else
typedef struct RTCRtpSender RTCRtpSender;
#endif /* __cplusplus */

#endif 	/* __RTCRtpSender_FWD_DEFINED__ */


#ifndef __RTCDTMFToneChangeEvent_FWD_DEFINED__
#define __RTCDTMFToneChangeEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent;
#else
typedef struct RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent;
#endif /* __cplusplus */

#endif 	/* __RTCDTMFToneChangeEvent_FWD_DEFINED__ */


#ifndef __RTCStats_FWD_DEFINED__
#define __RTCStats_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCStats RTCStats;
#else
typedef struct RTCStats RTCStats;
#endif /* __cplusplus */

#endif 	/* __RTCStats_FWD_DEFINED__ */


#ifndef __RTCStatsReport_FWD_DEFINED__
#define __RTCStatsReport_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCStatsReport RTCStatsReport;
#else
typedef struct RTCStatsReport RTCStatsReport;
#endif /* __cplusplus */

#endif 	/* __RTCStatsReport_FWD_DEFINED__ */


#ifndef __RTCRtpReceiver_FWD_DEFINED__
#define __RTCRtpReceiver_FWD_DEFINED__

#ifdef __cplusplus
typedef class RTCRtpReceiver RTCRtpReceiver;
#else
typedef struct RTCRtpReceiver RTCRtpReceiver;
#endif /* __cplusplus */

#endif 	/* __RTCRtpReceiver_FWD_DEFINED__ */


#ifndef __MessageEvent_FWD_DEFINED__
#define __MessageEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageEvent MessageEvent;
#else
typedef struct MessageEvent MessageEvent;
#endif /* __cplusplus */

#endif 	/* __MessageEvent_FWD_DEFINED__ */


#ifndef __JsArray_FWD_DEFINED__
#define __JsArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class JsArray JsArray;
#else
typedef struct JsArray JsArray;
#endif /* __cplusplus */

#endif 	/* __JsArray_FWD_DEFINED__ */


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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createMediaStream( 
            /* [retval][out] */ IDispatch **ppMediaStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE bindEventListener( 
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSources( 
            /* [optional][in] */ VARIANT successCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindows( 
            /* [retval][out] */ VARIANT *winList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getScreens( 
            /* [retval][out] */ VARIANT *screenList) = 0;
        
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createMediaStream )( 
            IPlugin * This,
            /* [retval][out] */ IDispatch **ppMediaStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *bindEventListener )( 
            IPlugin * This,
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSources )( 
            IPlugin * This,
            /* [optional][in] */ VARIANT successCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindows )( 
            IPlugin * This,
            /* [retval][out] */ VARIANT *winList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getScreens )( 
            IPlugin * This,
            /* [retval][out] */ VARIANT *screenList);
        
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

#define IPlugin_createMediaStream(This,ppMediaStream)	\
    ( (This)->lpVtbl -> createMediaStream(This,ppMediaStream) ) 

#define IPlugin_bindEventListener(This,type,listenerCallback,useCapture)	\
    ( (This)->lpVtbl -> bindEventListener(This,type,listenerCallback,useCapture) ) 

#define IPlugin_getSources(This,successCallback)	\
    ( (This)->lpVtbl -> getSources(This,successCallback) ) 

#define IPlugin_getWindows(This,winList)	\
    ( (This)->lpVtbl -> getWindows(This,winList) ) 

#define IPlugin_getScreens(This,screenList)	\
    ( (This)->lpVtbl -> getScreens(This,screenList) ) 

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
            /* [optional][in] */ VARIANT constraints,
            /* [retval][out] */ VARIANT *pPromiseMediaStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE enumerateDevices( 
            /* [retval][out] */ VARIANT *pPromiseSequenceMediaDeviceInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getUserMediaPromiseHook( 
            /* [optional][in] */ VARIANT constraints,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE enumerateDevicesPromiseHook( 
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
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
            /* [optional][in] */ VARIANT constraints,
            /* [retval][out] */ VARIANT *pPromiseMediaStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *enumerateDevices )( 
            IMediaDevices * This,
            /* [retval][out] */ VARIANT *pPromiseSequenceMediaDeviceInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getUserMediaPromiseHook )( 
            IMediaDevices * This,
            /* [optional][in] */ VARIANT constraints,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *enumerateDevicesPromiseHook )( 
            IMediaDevices * This,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
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

#define IMediaDevices_enumerateDevices(This,pPromiseSequenceMediaDeviceInfo)	\
    ( (This)->lpVtbl -> enumerateDevices(This,pPromiseSequenceMediaDeviceInfo) ) 

#define IMediaDevices_getUserMediaPromiseHook(This,constraints,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> getUserMediaPromiseHook(This,constraints,successCallback,errorCallback) ) 

#define IMediaDevices_enumerateDevicesPromiseHook(This,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> enumerateDevicesPromiseHook(This,successCallback,errorCallback) ) 

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
            /* [in] */ VARIANT onFulfilled,
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE catchh( 
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *String) = 0;
        
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
            /* [in] */ VARIANT onFulfilled,
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *catchh )( 
            IPromise * This,
            /* [optional][in] */ VARIANT onRejected,
            /* [retval][out] */ VARIANT *pThePromise);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IPromise * This,
            /* [retval][out] */ BSTR *String);
        
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


#define IPromise_then(This,onFulfilled,onRejected,pThePromise)	\
    ( (This)->lpVtbl -> then(This,onFulfilled,onRejected,pThePromise) ) 

#define IPromise_catchh(This,onRejected,pThePromise)	\
    ( (This)->lpVtbl -> catchh(This,onRejected,pThePromise) ) 

#define IPromise_toString(This,String)	\
    ( (This)->lpVtbl -> toString(This,String) ) 

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
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_micLevel( 
            /* [retval][out] */ INT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE micLevelMonitoringStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE micLevelMonitoringStop( void) = 0;
        
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_micLevel )( 
            IMediaStreamTrack * This,
            /* [retval][out] */ INT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *micLevelMonitoringStart )( 
            IMediaStreamTrack * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *micLevelMonitoringStop )( 
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

#define IMediaStreamTrack_get_micLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_micLevel(This,pVal) ) 

#define IMediaStreamTrack_micLevelMonitoringStart(This)	\
    ( (This)->lpVtbl -> micLevelMonitoringStart(This) ) 

#define IMediaStreamTrack_micLevelMonitoringStop(This)	\
    ( (This)->lpVtbl -> micLevelMonitoringStop(This) ) 

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


#ifndef __IMediaDeviceInfo_INTERFACE_DEFINED__
#define __IMediaDeviceInfo_INTERFACE_DEFINED__

/* interface IMediaDeviceInfo */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaDeviceInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CAD81D85-1B8C-4E1D-AD79-0B90D0FD6421")
    IMediaDeviceInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_deviceId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_kind( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_label( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_groupId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaDeviceInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaDeviceInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaDeviceInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaDeviceInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaDeviceInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaDeviceInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaDeviceInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaDeviceInfo * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_deviceId )( 
            IMediaDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_kind )( 
            IMediaDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_label )( 
            IMediaDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_groupId )( 
            IMediaDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMediaDeviceInfoVtbl;

    interface IMediaDeviceInfo
    {
        CONST_VTBL struct IMediaDeviceInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaDeviceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaDeviceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaDeviceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaDeviceInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaDeviceInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaDeviceInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaDeviceInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaDeviceInfo_get_deviceId(This,pVal)	\
    ( (This)->lpVtbl -> get_deviceId(This,pVal) ) 

#define IMediaDeviceInfo_get_kind(This,pVal)	\
    ( (This)->lpVtbl -> get_kind(This,pVal) ) 

#define IMediaDeviceInfo_get_label(This,pVal)	\
    ( (This)->lpVtbl -> get_label(This,pVal) ) 

#define IMediaDeviceInfo_get_groupId(This,pVal)	\
    ( (This)->lpVtbl -> get_groupId(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaDeviceInfo_INTERFACE_DEFINED__ */


#ifndef __IRTCPeerConnection_INTERFACE_DEFINED__
#define __IRTCPeerConnection_INTERFACE_DEFINED__

/* interface IRTCPeerConnection */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCPeerConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2B753B0-85A5-400F-B4F6-2E04E8DF3AE7")
    IRTCPeerConnection : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createOffer( 
            /* [optional][in] */ VARIANT RTCOfferOptions,
            /* [retval][out] */ VARIANT *pPromiseRTCSessionDescriptionInit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createAnswer( 
            /* [optional][in] */ VARIANT RTCAnswerOptions,
            /* [retval][out] */ VARIANT *pPromiseRTCSessionDescriptionInit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setLocalDescription( 
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ VARIANT *pPromiseVoid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_localDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_currentLocalDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_pendingLocalDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRemoteDescription( 
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ VARIANT *pPromiseVoid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_remoteDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_currentRemoteDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_pendingRemoteDescription( 
            /* [retval][out] */ VARIANT *RTCSessionDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addIceCandidate( 
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [retval][out] */ VARIANT *pPromiseVoid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_signalingState( 
            /* [retval][out] */ BSTR *RTCSignalingState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_iceGatheringState( 
            /* [retval][out] */ BSTR *RTCIceGatheringState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_iceConnectionState( 
            /* [retval][out] */ BSTR *RTCIceConnectionState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_connectionState( 
            /* [retval][out] */ BSTR *RTCPeerConnectionState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_canTrickleIceCandidates( 
            /* [retval][out] */ VARIANT_BOOL *BooleanVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getConfiguration( 
            /* [retval][out] */ VARIANT *RTCConfiguration) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setConfiguration( 
            /* [in] */ VARIANT RTCConfiguration) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addStream( 
            /* [in] */ VARIANT MediaStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeStream( 
            /* [in] */ VARIANT MediaStream) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onnegotiationneeded( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onnegotiationneeded( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onicecandidate( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onicecandidate( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onicecandidateerror( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onicecandidateerror( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onsignalingstatechange( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onsignalingstatechange( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_oniceconnectionstatechange( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_oniceconnectionstatechange( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onicegatheringstatechange( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onicegatheringstatechange( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onconnectionstatechange( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onconnectionstatechange( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfingerprintfailure( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfingerprintfailure( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onaddstream( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onaddstream( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sctp( 
            /* [retval][out] */ VARIANT *varRTCSctpTransport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createDataChannel( 
            /* [in] */ BSTR label,
            /* [optional][in] */ VARIANT varDataChannelDict,
            /* [retval][out] */ VARIANT *varRTCDataChannel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondatachannel( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondatachannel( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getSenders( 
            /* [retval][out] */ VARIANT *varSequenceRTCRtpSender) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getReceivers( 
            /* [retval][out] */ VARIANT *varSequenceRTCRtpReceiver) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTransceivers( 
            /* [retval][out] */ VARIANT *varSequenceRTCRtpTransceiver) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addTrack( 
            /* [in] */ VARIANT varMediaStreamTrack,
            /* [optional][in] */ VARIANT varMediaStreams0,
            /* [optional][in] */ VARIANT varMediaStreams1,
            /* [optional][in] */ VARIANT varMediaStreams2,
            /* [retval][out] */ VARIANT *varRTCRtpSender) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeTrack( 
            /* [in] */ VARIANT varRTCRtpSender) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addTransceiver( 
            /* [in] */ VARIANT varMediaStreamTrackorDOMStringTrackOrKind,
            /* [optional][in] */ VARIANT varRTCRtpTransceiverInit) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ontrack( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ontrack( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getStats( 
            /* [optional][in] */ VARIANT varMediaStreamTrack,
            /* [retval][out] */ VARIANT *varPromiseRTCStatsReport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createOfferPromiseHook( 
            /* [optional][in] */ VARIANT RTCOfferOptions,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE createAnswerPromiseHook( 
            /* [optional][in] */ VARIANT RTCAnswerOptions,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setLocalDescriptionPromiseHook( 
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setRemoteDescriptionPromiseHook( 
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addIceCandidatePromiseHook( 
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getStatsPromiseHook( 
            /* [optional][in] */ VARIANT varMediaStreamTrack,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCPeerConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCPeerConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCPeerConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCPeerConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCPeerConnection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCPeerConnection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCPeerConnection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCPeerConnection * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createOffer )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT RTCOfferOptions,
            /* [retval][out] */ VARIANT *pPromiseRTCSessionDescriptionInit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createAnswer )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT RTCAnswerOptions,
            /* [retval][out] */ VARIANT *pPromiseRTCSessionDescriptionInit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setLocalDescription )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ VARIANT *pPromiseVoid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentLocalDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pendingLocalDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRemoteDescription )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [retval][out] */ VARIANT *pPromiseVoid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_remoteDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentRemoteDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pendingRemoteDescription )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCSessionDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addIceCandidate )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [retval][out] */ VARIANT *pPromiseVoid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signalingState )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ BSTR *RTCSignalingState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_iceGatheringState )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ BSTR *RTCIceGatheringState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_iceConnectionState )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ BSTR *RTCIceConnectionState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_connectionState )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ BSTR *RTCPeerConnectionState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_canTrickleIceCandidates )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT_BOOL *BooleanVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getConfiguration )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *RTCConfiguration);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setConfiguration )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCConfiguration);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IRTCPeerConnection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addStream )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT MediaStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeStream )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT MediaStream);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onnegotiationneeded )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onnegotiationneeded )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onicecandidate )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onicecandidate )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onicecandidateerror )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onicecandidateerror )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onsignalingstatechange )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onsignalingstatechange )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oniceconnectionstatechange )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_oniceconnectionstatechange )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onicegatheringstatechange )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onicegatheringstatechange )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onconnectionstatechange )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onconnectionstatechange )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onfingerprintfailure )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onfingerprintfailure )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onaddstream )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onaddstream )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sctp )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varRTCSctpTransport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createDataChannel )( 
            IRTCPeerConnection * This,
            /* [in] */ BSTR label,
            /* [optional][in] */ VARIANT varDataChannelDict,
            /* [retval][out] */ VARIANT *varRTCDataChannel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ondatachannel )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ondatachannel )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getSenders )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varSequenceRTCRtpSender);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getReceivers )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varSequenceRTCRtpReceiver);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getTransceivers )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varSequenceRTCRtpTransceiver);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addTrack )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT varMediaStreamTrack,
            /* [optional][in] */ VARIANT varMediaStreams0,
            /* [optional][in] */ VARIANT varMediaStreams1,
            /* [optional][in] */ VARIANT varMediaStreams2,
            /* [retval][out] */ VARIANT *varRTCRtpSender);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeTrack )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT varRTCRtpSender);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addTransceiver )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT varMediaStreamTrackorDOMStringTrackOrKind,
            /* [optional][in] */ VARIANT varRTCRtpTransceiverInit);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ontrack )( 
            IRTCPeerConnection * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ontrack )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getStats )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT varMediaStreamTrack,
            /* [retval][out] */ VARIANT *varPromiseRTCStatsReport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createOfferPromiseHook )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT RTCOfferOptions,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *createAnswerPromiseHook )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT RTCAnswerOptions,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setLocalDescriptionPromiseHook )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setRemoteDescriptionPromiseHook )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCSessionDescriptionInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addIceCandidatePromiseHook )( 
            IRTCPeerConnection * This,
            /* [in] */ VARIANT RTCIceCandidateInit,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getStatsPromiseHook )( 
            IRTCPeerConnection * This,
            /* [optional][in] */ VARIANT varMediaStreamTrack,
            /* [optional][in] */ VARIANT successCallback,
            /* [optional][in] */ VARIANT errorCallback);
        
        END_INTERFACE
    } IRTCPeerConnectionVtbl;

    interface IRTCPeerConnection
    {
        CONST_VTBL struct IRTCPeerConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCPeerConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCPeerConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCPeerConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCPeerConnection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCPeerConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCPeerConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCPeerConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCPeerConnection_createOffer(This,RTCOfferOptions,pPromiseRTCSessionDescriptionInit)	\
    ( (This)->lpVtbl -> createOffer(This,RTCOfferOptions,pPromiseRTCSessionDescriptionInit) ) 

#define IRTCPeerConnection_createAnswer(This,RTCAnswerOptions,pPromiseRTCSessionDescriptionInit)	\
    ( (This)->lpVtbl -> createAnswer(This,RTCAnswerOptions,pPromiseRTCSessionDescriptionInit) ) 

#define IRTCPeerConnection_setLocalDescription(This,RTCSessionDescriptionInit,pPromiseVoid)	\
    ( (This)->lpVtbl -> setLocalDescription(This,RTCSessionDescriptionInit,pPromiseVoid) ) 

#define IRTCPeerConnection_get_localDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_localDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_get_currentLocalDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_currentLocalDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_get_pendingLocalDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_pendingLocalDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_setRemoteDescription(This,RTCSessionDescriptionInit,pPromiseVoid)	\
    ( (This)->lpVtbl -> setRemoteDescription(This,RTCSessionDescriptionInit,pPromiseVoid) ) 

#define IRTCPeerConnection_get_remoteDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_remoteDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_get_currentRemoteDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_currentRemoteDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_get_pendingRemoteDescription(This,RTCSessionDescription)	\
    ( (This)->lpVtbl -> get_pendingRemoteDescription(This,RTCSessionDescription) ) 

#define IRTCPeerConnection_addIceCandidate(This,RTCIceCandidateInit,pPromiseVoid)	\
    ( (This)->lpVtbl -> addIceCandidate(This,RTCIceCandidateInit,pPromiseVoid) ) 

#define IRTCPeerConnection_get_signalingState(This,RTCSignalingState)	\
    ( (This)->lpVtbl -> get_signalingState(This,RTCSignalingState) ) 

#define IRTCPeerConnection_get_iceGatheringState(This,RTCIceGatheringState)	\
    ( (This)->lpVtbl -> get_iceGatheringState(This,RTCIceGatheringState) ) 

#define IRTCPeerConnection_get_iceConnectionState(This,RTCIceConnectionState)	\
    ( (This)->lpVtbl -> get_iceConnectionState(This,RTCIceConnectionState) ) 

#define IRTCPeerConnection_get_connectionState(This,RTCPeerConnectionState)	\
    ( (This)->lpVtbl -> get_connectionState(This,RTCPeerConnectionState) ) 

#define IRTCPeerConnection_get_canTrickleIceCandidates(This,BooleanVal)	\
    ( (This)->lpVtbl -> get_canTrickleIceCandidates(This,BooleanVal) ) 

#define IRTCPeerConnection_getConfiguration(This,RTCConfiguration)	\
    ( (This)->lpVtbl -> getConfiguration(This,RTCConfiguration) ) 

#define IRTCPeerConnection_setConfiguration(This,RTCConfiguration)	\
    ( (This)->lpVtbl -> setConfiguration(This,RTCConfiguration) ) 

#define IRTCPeerConnection_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IRTCPeerConnection_addStream(This,MediaStream)	\
    ( (This)->lpVtbl -> addStream(This,MediaStream) ) 

#define IRTCPeerConnection_removeStream(This,MediaStream)	\
    ( (This)->lpVtbl -> removeStream(This,MediaStream) ) 

#define IRTCPeerConnection_get_onnegotiationneeded(This,pVal)	\
    ( (This)->lpVtbl -> get_onnegotiationneeded(This,pVal) ) 

#define IRTCPeerConnection_put_onnegotiationneeded(This,newVal)	\
    ( (This)->lpVtbl -> put_onnegotiationneeded(This,newVal) ) 

#define IRTCPeerConnection_get_onicecandidate(This,pVal)	\
    ( (This)->lpVtbl -> get_onicecandidate(This,pVal) ) 

#define IRTCPeerConnection_put_onicecandidate(This,newVal)	\
    ( (This)->lpVtbl -> put_onicecandidate(This,newVal) ) 

#define IRTCPeerConnection_get_onicecandidateerror(This,pVal)	\
    ( (This)->lpVtbl -> get_onicecandidateerror(This,pVal) ) 

#define IRTCPeerConnection_put_onicecandidateerror(This,newVal)	\
    ( (This)->lpVtbl -> put_onicecandidateerror(This,newVal) ) 

#define IRTCPeerConnection_get_onsignalingstatechange(This,pVal)	\
    ( (This)->lpVtbl -> get_onsignalingstatechange(This,pVal) ) 

#define IRTCPeerConnection_put_onsignalingstatechange(This,newVal)	\
    ( (This)->lpVtbl -> put_onsignalingstatechange(This,newVal) ) 

#define IRTCPeerConnection_get_oniceconnectionstatechange(This,pVal)	\
    ( (This)->lpVtbl -> get_oniceconnectionstatechange(This,pVal) ) 

#define IRTCPeerConnection_put_oniceconnectionstatechange(This,newVal)	\
    ( (This)->lpVtbl -> put_oniceconnectionstatechange(This,newVal) ) 

#define IRTCPeerConnection_get_onicegatheringstatechange(This,pVal)	\
    ( (This)->lpVtbl -> get_onicegatheringstatechange(This,pVal) ) 

#define IRTCPeerConnection_put_onicegatheringstatechange(This,newVal)	\
    ( (This)->lpVtbl -> put_onicegatheringstatechange(This,newVal) ) 

#define IRTCPeerConnection_get_onconnectionstatechange(This,pVal)	\
    ( (This)->lpVtbl -> get_onconnectionstatechange(This,pVal) ) 

#define IRTCPeerConnection_put_onconnectionstatechange(This,newVal)	\
    ( (This)->lpVtbl -> put_onconnectionstatechange(This,newVal) ) 

#define IRTCPeerConnection_get_onfingerprintfailure(This,pVal)	\
    ( (This)->lpVtbl -> get_onfingerprintfailure(This,pVal) ) 

#define IRTCPeerConnection_put_onfingerprintfailure(This,newVal)	\
    ( (This)->lpVtbl -> put_onfingerprintfailure(This,newVal) ) 

#define IRTCPeerConnection_get_onaddstream(This,pVal)	\
    ( (This)->lpVtbl -> get_onaddstream(This,pVal) ) 

#define IRTCPeerConnection_put_onaddstream(This,newVal)	\
    ( (This)->lpVtbl -> put_onaddstream(This,newVal) ) 

#define IRTCPeerConnection_get_sctp(This,varRTCSctpTransport)	\
    ( (This)->lpVtbl -> get_sctp(This,varRTCSctpTransport) ) 

#define IRTCPeerConnection_createDataChannel(This,label,varDataChannelDict,varRTCDataChannel)	\
    ( (This)->lpVtbl -> createDataChannel(This,label,varDataChannelDict,varRTCDataChannel) ) 

#define IRTCPeerConnection_get_ondatachannel(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_ondatachannel(This,varEventHandler) ) 

#define IRTCPeerConnection_put_ondatachannel(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_ondatachannel(This,varEventHandler) ) 

#define IRTCPeerConnection_getSenders(This,varSequenceRTCRtpSender)	\
    ( (This)->lpVtbl -> getSenders(This,varSequenceRTCRtpSender) ) 

#define IRTCPeerConnection_getReceivers(This,varSequenceRTCRtpReceiver)	\
    ( (This)->lpVtbl -> getReceivers(This,varSequenceRTCRtpReceiver) ) 

#define IRTCPeerConnection_getTransceivers(This,varSequenceRTCRtpTransceiver)	\
    ( (This)->lpVtbl -> getTransceivers(This,varSequenceRTCRtpTransceiver) ) 

#define IRTCPeerConnection_addTrack(This,varMediaStreamTrack,varMediaStreams0,varMediaStreams1,varMediaStreams2,varRTCRtpSender)	\
    ( (This)->lpVtbl -> addTrack(This,varMediaStreamTrack,varMediaStreams0,varMediaStreams1,varMediaStreams2,varRTCRtpSender) ) 

#define IRTCPeerConnection_removeTrack(This,varRTCRtpSender)	\
    ( (This)->lpVtbl -> removeTrack(This,varRTCRtpSender) ) 

#define IRTCPeerConnection_addTransceiver(This,varMediaStreamTrackorDOMStringTrackOrKind,varRTCRtpTransceiverInit)	\
    ( (This)->lpVtbl -> addTransceiver(This,varMediaStreamTrackorDOMStringTrackOrKind,varRTCRtpTransceiverInit) ) 

#define IRTCPeerConnection_get_ontrack(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_ontrack(This,varEventHandler) ) 

#define IRTCPeerConnection_put_ontrack(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_ontrack(This,varEventHandler) ) 

#define IRTCPeerConnection_getStats(This,varMediaStreamTrack,varPromiseRTCStatsReport)	\
    ( (This)->lpVtbl -> getStats(This,varMediaStreamTrack,varPromiseRTCStatsReport) ) 

#define IRTCPeerConnection_createOfferPromiseHook(This,RTCOfferOptions,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> createOfferPromiseHook(This,RTCOfferOptions,successCallback,errorCallback) ) 

#define IRTCPeerConnection_createAnswerPromiseHook(This,RTCAnswerOptions,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> createAnswerPromiseHook(This,RTCAnswerOptions,successCallback,errorCallback) ) 

#define IRTCPeerConnection_setLocalDescriptionPromiseHook(This,RTCSessionDescriptionInit,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> setLocalDescriptionPromiseHook(This,RTCSessionDescriptionInit,successCallback,errorCallback) ) 

#define IRTCPeerConnection_setRemoteDescriptionPromiseHook(This,RTCSessionDescriptionInit,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> setRemoteDescriptionPromiseHook(This,RTCSessionDescriptionInit,successCallback,errorCallback) ) 

#define IRTCPeerConnection_addIceCandidatePromiseHook(This,RTCIceCandidateInit,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> addIceCandidatePromiseHook(This,RTCIceCandidateInit,successCallback,errorCallback) ) 

#define IRTCPeerConnection_getStatsPromiseHook(This,varMediaStreamTrack,successCallback,errorCallback)	\
    ( (This)->lpVtbl -> getStatsPromiseHook(This,varMediaStreamTrack,successCallback,errorCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCPeerConnection_INTERFACE_DEFINED__ */


#ifndef __IRTCSessionDescription_INTERFACE_DEFINED__
#define __IRTCSessionDescription_INTERFACE_DEFINED__

/* interface IRTCSessionDescription */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCSessionDescription;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3F56FD7-937E-42A6-8B00-65CB297FB8AA")
    IRTCSessionDescription : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_type( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sdp( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_sdp( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCSessionDescriptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCSessionDescription * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCSessionDescription * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCSessionDescription * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCSessionDescription * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCSessionDescription * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCSessionDescription * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCSessionDescription * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IRTCSessionDescription * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_type )( 
            IRTCSessionDescription * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sdp )( 
            IRTCSessionDescription * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sdp )( 
            IRTCSessionDescription * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IRTCSessionDescriptionVtbl;

    interface IRTCSessionDescription
    {
        CONST_VTBL struct IRTCSessionDescriptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCSessionDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCSessionDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCSessionDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCSessionDescription_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCSessionDescription_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCSessionDescription_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCSessionDescription_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCSessionDescription_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define IRTCSessionDescription_put_type(This,newVal)	\
    ( (This)->lpVtbl -> put_type(This,newVal) ) 

#define IRTCSessionDescription_get_sdp(This,pVal)	\
    ( (This)->lpVtbl -> get_sdp(This,pVal) ) 

#define IRTCSessionDescription_put_sdp(This,newVal)	\
    ( (This)->lpVtbl -> put_sdp(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCSessionDescription_INTERFACE_DEFINED__ */


#ifndef __IRTCError_INTERFACE_DEFINED__
#define __IRTCError_INTERFACE_DEFINED__

/* interface IRTCError */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48ACEE72-5B42-463A-A31D-34AD55E61DE1")
    IRTCError : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_message( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_errorDetail( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sdpLineNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_httpRequestStatusCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *String) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCError * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCError * This,
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
            IRTCError * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_message )( 
            IRTCError * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_errorDetail )( 
            IRTCError * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sdpLineNumber )( 
            IRTCError * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_httpRequestStatusCode )( 
            IRTCError * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IRTCError * This,
            /* [retval][out] */ BSTR *String);
        
        END_INTERFACE
    } IRTCErrorVtbl;

    interface IRTCError
    {
        CONST_VTBL struct IRTCErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCError_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCError_get_name(This,pVal)	\
    ( (This)->lpVtbl -> get_name(This,pVal) ) 

#define IRTCError_get_message(This,pVal)	\
    ( (This)->lpVtbl -> get_message(This,pVal) ) 

#define IRTCError_get_errorDetail(This,pVal)	\
    ( (This)->lpVtbl -> get_errorDetail(This,pVal) ) 

#define IRTCError_get_sdpLineNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_sdpLineNumber(This,pVal) ) 

#define IRTCError_get_httpRequestStatusCode(This,pVal)	\
    ( (This)->lpVtbl -> get_httpRequestStatusCode(This,pVal) ) 

#define IRTCError_toString(This,String)	\
    ( (This)->lpVtbl -> toString(This,String) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCError_INTERFACE_DEFINED__ */


#ifndef __IRTCIceCandidate_INTERFACE_DEFINED__
#define __IRTCIceCandidate_INTERFACE_DEFINED__

/* interface IRTCIceCandidate */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCIceCandidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4814FA61-92BC-4EBD-9C1E-D9B3ADB22E5A")
    IRTCIceCandidate : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_candidate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sdpMid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_sdpMLineIndex( 
            /* [retval][out] */ USHORT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_foundation( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_priority( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_port( 
            /* [retval][out] */ USHORT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_tcpType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_relatedAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_relatedPort( 
            /* [retval][out] */ USHORT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ufrag( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *String) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCIceCandidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCIceCandidate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCIceCandidate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCIceCandidate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCIceCandidate * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCIceCandidate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCIceCandidate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCIceCandidate * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_candidate )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sdpMid )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sdpMLineIndex )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ USHORT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_foundation )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_priority )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_protocol )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_port )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ USHORT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_tcpType )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relatedAddress )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relatedPort )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ USHORT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ufrag )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IRTCIceCandidate * This,
            /* [retval][out] */ BSTR *String);
        
        END_INTERFACE
    } IRTCIceCandidateVtbl;

    interface IRTCIceCandidate
    {
        CONST_VTBL struct IRTCIceCandidateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCIceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCIceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCIceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCIceCandidate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCIceCandidate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCIceCandidate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCIceCandidate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCIceCandidate_get_candidate(This,pVal)	\
    ( (This)->lpVtbl -> get_candidate(This,pVal) ) 

#define IRTCIceCandidate_get_sdpMid(This,pVal)	\
    ( (This)->lpVtbl -> get_sdpMid(This,pVal) ) 

#define IRTCIceCandidate_get_sdpMLineIndex(This,pVal)	\
    ( (This)->lpVtbl -> get_sdpMLineIndex(This,pVal) ) 

#define IRTCIceCandidate_get_foundation(This,pVal)	\
    ( (This)->lpVtbl -> get_foundation(This,pVal) ) 

#define IRTCIceCandidate_get_priority(This,pVal)	\
    ( (This)->lpVtbl -> get_priority(This,pVal) ) 

#define IRTCIceCandidate_get_protocol(This,pVal)	\
    ( (This)->lpVtbl -> get_protocol(This,pVal) ) 

#define IRTCIceCandidate_get_port(This,pVal)	\
    ( (This)->lpVtbl -> get_port(This,pVal) ) 

#define IRTCIceCandidate_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define IRTCIceCandidate_get_tcpType(This,pVal)	\
    ( (This)->lpVtbl -> get_tcpType(This,pVal) ) 

#define IRTCIceCandidate_get_relatedAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_relatedAddress(This,pVal) ) 

#define IRTCIceCandidate_get_relatedPort(This,pVal)	\
    ( (This)->lpVtbl -> get_relatedPort(This,pVal) ) 

#define IRTCIceCandidate_get_ufrag(This,pVal)	\
    ( (This)->lpVtbl -> get_ufrag(This,pVal) ) 

#define IRTCIceCandidate_toString(This,String)	\
    ( (This)->lpVtbl -> toString(This,String) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCIceCandidate_INTERFACE_DEFINED__ */


#ifndef __IRTCPeerConnectionIceEvent_INTERFACE_DEFINED__
#define __IRTCPeerConnectionIceEvent_INTERFACE_DEFINED__

/* interface IRTCPeerConnectionIceEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCPeerConnectionIceEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA821F0E-3D50-40B7-8684-60FC3DAFC262")
    IRTCPeerConnectionIceEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_candidate( 
            /* [retval][out] */ VARIANT *RTCIceCandidate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCPeerConnectionIceEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCPeerConnectionIceEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCPeerConnectionIceEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCPeerConnectionIceEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCPeerConnectionIceEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCPeerConnectionIceEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCPeerConnectionIceEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCPeerConnectionIceEvent * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IRTCPeerConnectionIceEvent * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_candidate )( 
            IRTCPeerConnectionIceEvent * This,
            /* [retval][out] */ VARIANT *RTCIceCandidate);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_url )( 
            IRTCPeerConnectionIceEvent * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IRTCPeerConnectionIceEventVtbl;

    interface IRTCPeerConnectionIceEvent
    {
        CONST_VTBL struct IRTCPeerConnectionIceEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCPeerConnectionIceEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCPeerConnectionIceEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCPeerConnectionIceEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCPeerConnectionIceEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCPeerConnectionIceEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCPeerConnectionIceEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCPeerConnectionIceEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCPeerConnectionIceEvent_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define IRTCPeerConnectionIceEvent_get_candidate(This,RTCIceCandidate)	\
    ( (This)->lpVtbl -> get_candidate(This,RTCIceCandidate) ) 

#define IRTCPeerConnectionIceEvent_get_url(This,pVal)	\
    ( (This)->lpVtbl -> get_url(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCPeerConnectionIceEvent_INTERFACE_DEFINED__ */


#ifndef __IMediaStreamEvent_INTERFACE_DEFINED__
#define __IMediaStreamEvent_INTERFACE_DEFINED__

/* interface IMediaStreamEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaStreamEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5480960F-4930-4981-8661-018094DB19E9")
    IMediaStreamEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_stream( 
            /* [retval][out] */ VARIANT *MediaStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaStreamEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaStreamEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaStreamEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaStreamEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaStreamEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaStreamEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaStreamEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaStreamEvent * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stream )( 
            IMediaStreamEvent * This,
            /* [retval][out] */ VARIANT *MediaStream);
        
        END_INTERFACE
    } IMediaStreamEventVtbl;

    interface IMediaStreamEvent
    {
        CONST_VTBL struct IMediaStreamEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaStreamEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaStreamEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaStreamEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaStreamEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaStreamEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaStreamEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaStreamEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaStreamEvent_get_stream(This,MediaStream)	\
    ( (This)->lpVtbl -> get_stream(This,MediaStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaStreamEvent_INTERFACE_DEFINED__ */


#ifndef __IEmpty_INTERFACE_DEFINED__
#define __IEmpty_INTERFACE_DEFINED__

/* interface IEmpty */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEmpty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("528305BD-AF6E-4E7A-AD37-88C1363F0A70")
    IEmpty : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IEmptyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEmpty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEmpty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEmpty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEmpty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEmpty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEmpty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEmpty * This,
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
    } IEmptyVtbl;

    interface IEmpty
    {
        CONST_VTBL struct IEmptyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEmpty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEmpty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEmpty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEmpty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEmpty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEmpty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEmpty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEmpty_INTERFACE_DEFINED__ */


#ifndef __IRTCDataChannel_INTERFACE_DEFINED__
#define __IRTCDataChannel_INTERFACE_DEFINED__

/* interface IRTCDataChannel */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCDataChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83C443DF-10BB-46DE-B5C6-5673512C660F")
    IRTCDataChannel : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_label( 
            /* [retval][out] */ BSTR *USVString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ordered( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxPacketLifeTime( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxRetransmits( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol( 
            /* [retval][out] */ BSTR *USVString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_negotiated( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_priority( 
            /* [retval][out] */ BSTR *RTCPriorityType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState( 
            /* [retval][out] */ BSTR *RTCDataChannelState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_bufferedAmount( 
            /* [retval][out] */ ULONG64 *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_bufferedAmountLowThreshold( 
            /* [retval][out] */ ULONG64 *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_bufferedAmountLowThreshold( 
            /* [in] */ ULONG64 newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_binaryType( 
            /* [retval][out] */ BSTR *DOMString) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_binaryType( 
            /* [in] */ BSTR DOMString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onopen( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onopen( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onclose( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onclose( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmessage( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmessage( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbufferedamountlow( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbufferedamountlow( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE send( 
            /* [in] */ VARIANT data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addEventListener( 
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeEventListener( 
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCDataChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCDataChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCDataChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCDataChannel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCDataChannel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCDataChannel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCDataChannel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCDataChannel * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_label )( 
            IRTCDataChannel * This,
            /* [retval][out] */ BSTR *USVString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordered )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxPacketLifeTime )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxRetransmits )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_protocol )( 
            IRTCDataChannel * This,
            /* [retval][out] */ BSTR *USVString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_negotiated )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_priority )( 
            IRTCDataChannel * This,
            /* [retval][out] */ BSTR *RTCPriorityType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_readyState )( 
            IRTCDataChannel * This,
            /* [retval][out] */ BSTR *RTCDataChannelState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bufferedAmount )( 
            IRTCDataChannel * This,
            /* [retval][out] */ ULONG64 *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bufferedAmountLowThreshold )( 
            IRTCDataChannel * This,
            /* [retval][out] */ ULONG64 *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_bufferedAmountLowThreshold )( 
            IRTCDataChannel * This,
            /* [in] */ ULONG64 newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_binaryType )( 
            IRTCDataChannel * This,
            /* [retval][out] */ BSTR *DOMString);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_binaryType )( 
            IRTCDataChannel * This,
            /* [in] */ BSTR DOMString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onopen )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onopen )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onerror )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onerror )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onclose )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onclose )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onmessage )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onmessage )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_onbufferedamountlow )( 
            IRTCDataChannel * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_onbufferedamountlow )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IRTCDataChannel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *send )( 
            IRTCDataChannel * This,
            /* [in] */ VARIANT data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addEventListener )( 
            IRTCDataChannel * This,
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeEventListener )( 
            IRTCDataChannel * This,
            /* [in] */ BSTR type,
            /* [optional][in] */ VARIANT listenerCallback,
            /* [optional][in] */ VARIANT useCapture);
        
        END_INTERFACE
    } IRTCDataChannelVtbl;

    interface IRTCDataChannel
    {
        CONST_VTBL struct IRTCDataChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCDataChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCDataChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCDataChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCDataChannel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCDataChannel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCDataChannel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCDataChannel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCDataChannel_get_label(This,USVString)	\
    ( (This)->lpVtbl -> get_label(This,USVString) ) 

#define IRTCDataChannel_get_ordered(This,pVal)	\
    ( (This)->lpVtbl -> get_ordered(This,pVal) ) 

#define IRTCDataChannel_get_maxPacketLifeTime(This,pVal)	\
    ( (This)->lpVtbl -> get_maxPacketLifeTime(This,pVal) ) 

#define IRTCDataChannel_get_maxRetransmits(This,pVal)	\
    ( (This)->lpVtbl -> get_maxRetransmits(This,pVal) ) 

#define IRTCDataChannel_get_protocol(This,USVString)	\
    ( (This)->lpVtbl -> get_protocol(This,USVString) ) 

#define IRTCDataChannel_get_negotiated(This,pVal)	\
    ( (This)->lpVtbl -> get_negotiated(This,pVal) ) 

#define IRTCDataChannel_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#define IRTCDataChannel_get_priority(This,RTCPriorityType)	\
    ( (This)->lpVtbl -> get_priority(This,RTCPriorityType) ) 

#define IRTCDataChannel_get_readyState(This,RTCDataChannelState)	\
    ( (This)->lpVtbl -> get_readyState(This,RTCDataChannelState) ) 

#define IRTCDataChannel_get_bufferedAmount(This,pVal)	\
    ( (This)->lpVtbl -> get_bufferedAmount(This,pVal) ) 

#define IRTCDataChannel_get_bufferedAmountLowThreshold(This,pVal)	\
    ( (This)->lpVtbl -> get_bufferedAmountLowThreshold(This,pVal) ) 

#define IRTCDataChannel_put_bufferedAmountLowThreshold(This,newVal)	\
    ( (This)->lpVtbl -> put_bufferedAmountLowThreshold(This,newVal) ) 

#define IRTCDataChannel_get_binaryType(This,DOMString)	\
    ( (This)->lpVtbl -> get_binaryType(This,DOMString) ) 

#define IRTCDataChannel_put_binaryType(This,DOMString)	\
    ( (This)->lpVtbl -> put_binaryType(This,DOMString) ) 

#define IRTCDataChannel_get_onopen(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_onopen(This,varEventHandler) ) 

#define IRTCDataChannel_put_onopen(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_onopen(This,varEventHandler) ) 

#define IRTCDataChannel_get_onerror(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_onerror(This,varEventHandler) ) 

#define IRTCDataChannel_put_onerror(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_onerror(This,varEventHandler) ) 

#define IRTCDataChannel_get_onclose(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_onclose(This,varEventHandler) ) 

#define IRTCDataChannel_put_onclose(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_onclose(This,varEventHandler) ) 

#define IRTCDataChannel_get_onmessage(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_onmessage(This,varEventHandler) ) 

#define IRTCDataChannel_put_onmessage(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_onmessage(This,varEventHandler) ) 

#define IRTCDataChannel_get_onbufferedamountlow(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_onbufferedamountlow(This,varEventHandler) ) 

#define IRTCDataChannel_put_onbufferedamountlow(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_onbufferedamountlow(This,varEventHandler) ) 

#define IRTCDataChannel_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IRTCDataChannel_send(This,data)	\
    ( (This)->lpVtbl -> send(This,data) ) 

#define IRTCDataChannel_addEventListener(This,type,listenerCallback,useCapture)	\
    ( (This)->lpVtbl -> addEventListener(This,type,listenerCallback,useCapture) ) 

#define IRTCDataChannel_removeEventListener(This,type,listenerCallback,useCapture)	\
    ( (This)->lpVtbl -> removeEventListener(This,type,listenerCallback,useCapture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCDataChannel_INTERFACE_DEFINED__ */


#ifndef __IRTCDataChannelEvent_INTERFACE_DEFINED__
#define __IRTCDataChannelEvent_INTERFACE_DEFINED__

/* interface IRTCDataChannelEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCDataChannelEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08D4E0DC-A254-4FAE-8B72-1CA4F89E5873")
    IRTCDataChannelEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_channel( 
            /* [retval][out] */ VARIANT *varRTCDataChannel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCDataChannelEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCDataChannelEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCDataChannelEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCDataChannelEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCDataChannelEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCDataChannelEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCDataChannelEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCDataChannelEvent * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_channel )( 
            IRTCDataChannelEvent * This,
            /* [retval][out] */ VARIANT *varRTCDataChannel);
        
        END_INTERFACE
    } IRTCDataChannelEventVtbl;

    interface IRTCDataChannelEvent
    {
        CONST_VTBL struct IRTCDataChannelEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCDataChannelEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCDataChannelEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCDataChannelEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCDataChannelEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCDataChannelEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCDataChannelEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCDataChannelEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCDataChannelEvent_get_channel(This,varRTCDataChannel)	\
    ( (This)->lpVtbl -> get_channel(This,varRTCDataChannel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCDataChannelEvent_INTERFACE_DEFINED__ */


#ifndef __IRTCWindow_INTERFACE_DEFINED__
#define __IRTCWindow_INTERFACE_DEFINED__

/* interface IRTCWindow */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("624A33DF-99D1-49AF-A476-63DA117817DB")
    IRTCWindow : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ INT_PTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCWindow * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCWindow * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCWindow * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCWindow * This,
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
            IRTCWindow * This,
            /* [retval][out] */ INT_PTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_title )( 
            IRTCWindow * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IRTCWindowVtbl;

    interface IRTCWindow
    {
        CONST_VTBL struct IRTCWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCWindow_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCWindow_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#define IRTCWindow_get_title(This,pVal)	\
    ( (This)->lpVtbl -> get_title(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCWindow_INTERFACE_DEFINED__ */


#ifndef __IRTCScreen_INTERFACE_DEFINED__
#define __IRTCScreen_INTERFACE_DEFINED__

/* interface IRTCScreen */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCScreen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E9C389F-59C1-4F67-92E3-C26C05927CE2")
    IRTCScreen : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ INT_PTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCScreenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCScreen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCScreen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCScreen * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCScreen * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCScreen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCScreen * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCScreen * This,
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
            IRTCScreen * This,
            /* [retval][out] */ INT_PTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_title )( 
            IRTCScreen * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IRTCScreenVtbl;

    interface IRTCScreen
    {
        CONST_VTBL struct IRTCScreenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCScreen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCScreen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCScreen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCScreen_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCScreen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCScreen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCScreen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCScreen_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#define IRTCScreen_get_title(This,pVal)	\
    ( (This)->lpVtbl -> get_title(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCScreen_INTERFACE_DEFINED__ */


#ifndef __IRTCDTMFSender_INTERFACE_DEFINED__
#define __IRTCDTMFSender_INTERFACE_DEFINED__

/* interface IRTCDTMFSender */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCDTMFSender;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E393A0A1-58CD-4D33-90A6-E95BEF050752")
    IRTCDTMFSender : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE insertDTMF( 
            /* [in] */ BSTR tones,
            /* [optional][in] */ VARIANT duration,
            /* [optional][in] */ VARIANT interToneGap) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ontonechange( 
            /* [retval][out] */ VARIANT *varEventHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ontonechange( 
            /* [in] */ VARIANT varEventHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_toneBuffer( 
            /* [retval][out] */ BSTR *bstrBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCDTMFSenderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCDTMFSender * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCDTMFSender * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCDTMFSender * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCDTMFSender * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCDTMFSender * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCDTMFSender * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCDTMFSender * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *insertDTMF )( 
            IRTCDTMFSender * This,
            /* [in] */ BSTR tones,
            /* [optional][in] */ VARIANT duration,
            /* [optional][in] */ VARIANT interToneGap);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ontonechange )( 
            IRTCDTMFSender * This,
            /* [retval][out] */ VARIANT *varEventHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ontonechange )( 
            IRTCDTMFSender * This,
            /* [in] */ VARIANT varEventHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_toneBuffer )( 
            IRTCDTMFSender * This,
            /* [retval][out] */ BSTR *bstrBuffer);
        
        END_INTERFACE
    } IRTCDTMFSenderVtbl;

    interface IRTCDTMFSender
    {
        CONST_VTBL struct IRTCDTMFSenderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCDTMFSender_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCDTMFSender_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCDTMFSender_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCDTMFSender_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCDTMFSender_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCDTMFSender_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCDTMFSender_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCDTMFSender_insertDTMF(This,tones,duration,interToneGap)	\
    ( (This)->lpVtbl -> insertDTMF(This,tones,duration,interToneGap) ) 

#define IRTCDTMFSender_get_ontonechange(This,varEventHandler)	\
    ( (This)->lpVtbl -> get_ontonechange(This,varEventHandler) ) 

#define IRTCDTMFSender_put_ontonechange(This,varEventHandler)	\
    ( (This)->lpVtbl -> put_ontonechange(This,varEventHandler) ) 

#define IRTCDTMFSender_get_toneBuffer(This,bstrBuffer)	\
    ( (This)->lpVtbl -> get_toneBuffer(This,bstrBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCDTMFSender_INTERFACE_DEFINED__ */


#ifndef __IRTCTrackEvent_INTERFACE_DEFINED__
#define __IRTCTrackEvent_INTERFACE_DEFINED__

/* interface IRTCTrackEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCTrackEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BADBBC8D-E670-453A-A1D1-B410F7E74737")
    IRTCTrackEvent : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCTrackEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCTrackEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCTrackEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCTrackEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCTrackEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCTrackEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCTrackEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCTrackEvent * This,
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
    } IRTCTrackEventVtbl;

    interface IRTCTrackEvent
    {
        CONST_VTBL struct IRTCTrackEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCTrackEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCTrackEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCTrackEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCTrackEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCTrackEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCTrackEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCTrackEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCTrackEvent_INTERFACE_DEFINED__ */


#ifndef __IRTCRtpSender_INTERFACE_DEFINED__
#define __IRTCRtpSender_INTERFACE_DEFINED__

/* interface IRTCRtpSender */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCRtpSender;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0ECD6D4-39AF-4D4F-8844-59BC8E56BC9E")
    IRTCRtpSender : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_track( 
            /* [retval][out] */ VARIANT *varMediaStreamTrack) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_transport( 
            /* [retval][out] */ VARIANT *varRTCDtlsTransport) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_rtcpTransport( 
            /* [retval][out] */ VARIANT *varRTCDtlsTransport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setParameters( 
            /* [optional][in] */ VARIANT varRTCRtpParameters,
            /* [retval][out] */ VARIANT *varPromiseVoid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getParameters( 
            /* [retval][out] */ VARIANT *varRTCRtpParameters) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE replaceTrack( 
            /* [in] */ VARIANT varMediaStreamTrack,
            /* [retval][out] */ VARIANT *varPromiseVoid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dtmf( 
            /* [retval][out] */ VARIANT *varRTCDTMFSender) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCRtpSenderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCRtpSender * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCRtpSender * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCRtpSender * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCRtpSender * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCRtpSender * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCRtpSender * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCRtpSender * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_track )( 
            IRTCRtpSender * This,
            /* [retval][out] */ VARIANT *varMediaStreamTrack);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_transport )( 
            IRTCRtpSender * This,
            /* [retval][out] */ VARIANT *varRTCDtlsTransport);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rtcpTransport )( 
            IRTCRtpSender * This,
            /* [retval][out] */ VARIANT *varRTCDtlsTransport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setParameters )( 
            IRTCRtpSender * This,
            /* [optional][in] */ VARIANT varRTCRtpParameters,
            /* [retval][out] */ VARIANT *varPromiseVoid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getParameters )( 
            IRTCRtpSender * This,
            /* [retval][out] */ VARIANT *varRTCRtpParameters);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *replaceTrack )( 
            IRTCRtpSender * This,
            /* [in] */ VARIANT varMediaStreamTrack,
            /* [retval][out] */ VARIANT *varPromiseVoid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dtmf )( 
            IRTCRtpSender * This,
            /* [retval][out] */ VARIANT *varRTCDTMFSender);
        
        END_INTERFACE
    } IRTCRtpSenderVtbl;

    interface IRTCRtpSender
    {
        CONST_VTBL struct IRTCRtpSenderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCRtpSender_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCRtpSender_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCRtpSender_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCRtpSender_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCRtpSender_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCRtpSender_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCRtpSender_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCRtpSender_get_track(This,varMediaStreamTrack)	\
    ( (This)->lpVtbl -> get_track(This,varMediaStreamTrack) ) 

#define IRTCRtpSender_get_transport(This,varRTCDtlsTransport)	\
    ( (This)->lpVtbl -> get_transport(This,varRTCDtlsTransport) ) 

#define IRTCRtpSender_get_rtcpTransport(This,varRTCDtlsTransport)	\
    ( (This)->lpVtbl -> get_rtcpTransport(This,varRTCDtlsTransport) ) 

#define IRTCRtpSender_setParameters(This,varRTCRtpParameters,varPromiseVoid)	\
    ( (This)->lpVtbl -> setParameters(This,varRTCRtpParameters,varPromiseVoid) ) 

#define IRTCRtpSender_getParameters(This,varRTCRtpParameters)	\
    ( (This)->lpVtbl -> getParameters(This,varRTCRtpParameters) ) 

#define IRTCRtpSender_replaceTrack(This,varMediaStreamTrack,varPromiseVoid)	\
    ( (This)->lpVtbl -> replaceTrack(This,varMediaStreamTrack,varPromiseVoid) ) 

#define IRTCRtpSender_get_dtmf(This,varRTCDTMFSender)	\
    ( (This)->lpVtbl -> get_dtmf(This,varRTCDTMFSender) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCRtpSender_INTERFACE_DEFINED__ */


#ifndef __IRTCDTMFToneChangeEvent_INTERFACE_DEFINED__
#define __IRTCDTMFToneChangeEvent_INTERFACE_DEFINED__

/* interface IRTCDTMFToneChangeEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCDTMFToneChangeEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2E33966-8DAC-4A24-928E-FF9029027D05")
    IRTCDTMFToneChangeEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_tone( 
            /* [retval][out] */ BSTR *varTone) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCDTMFToneChangeEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCDTMFToneChangeEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCDTMFToneChangeEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCDTMFToneChangeEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCDTMFToneChangeEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCDTMFToneChangeEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCDTMFToneChangeEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCDTMFToneChangeEvent * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_tone )( 
            IRTCDTMFToneChangeEvent * This,
            /* [retval][out] */ BSTR *varTone);
        
        END_INTERFACE
    } IRTCDTMFToneChangeEventVtbl;

    interface IRTCDTMFToneChangeEvent
    {
        CONST_VTBL struct IRTCDTMFToneChangeEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCDTMFToneChangeEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCDTMFToneChangeEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCDTMFToneChangeEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCDTMFToneChangeEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCDTMFToneChangeEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCDTMFToneChangeEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCDTMFToneChangeEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCDTMFToneChangeEvent_get_tone(This,varTone)	\
    ( (This)->lpVtbl -> get_tone(This,varTone) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCDTMFToneChangeEvent_INTERFACE_DEFINED__ */


#ifndef __IRTCStats_INTERFACE_DEFINED__
#define __IRTCStats_INTERFACE_DEFINED__

/* interface IRTCStats */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCStats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F0B140A-1904-44A5-9FFC-D44B42B367C3")
    IRTCStats : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_timestamp( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCStatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCStats * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCStats * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCStats * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCStats * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCStats * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCStats * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCStats * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timestamp )( 
            IRTCStats * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IRTCStats * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            IRTCStats * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IRTCStatsVtbl;

    interface IRTCStats
    {
        CONST_VTBL struct IRTCStatsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCStats_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCStats_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCStats_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCStats_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCStats_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCStats_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCStats_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCStats_get_timestamp(This,pVal)	\
    ( (This)->lpVtbl -> get_timestamp(This,pVal) ) 

#define IRTCStats_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define IRTCStats_get_id(This,pVal)	\
    ( (This)->lpVtbl -> get_id(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCStats_INTERFACE_DEFINED__ */


#ifndef __IRTCStatsReport_INTERFACE_DEFINED__
#define __IRTCStatsReport_INTERFACE_DEFINED__

/* interface IRTCStatsReport */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCStatsReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D19FE2EC-49D5-4A2D-8FE7-A8D5E459341A")
    IRTCStatsReport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE entries( 
            /* [retval][out] */ VARIANT *varIterator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE forEach( 
            /* [in] */ VARIANT varCallback,
            /* [optional][in] */ VARIANT varThisArg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get( 
            /* [in] */ VARIANT varKey,
            /* [retval][out] */ VARIANT *varEntry) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE has( 
            /* [in] */ VARIANT varKey,
            /* [retval][out] */ VARIANT_BOOL *varBool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE keys( 
            /* [retval][out] */ VARIANT *varIterator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE values( 
            /* [retval][out] */ VARIANT *varIterator) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCStatsReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCStatsReport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCStatsReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCStatsReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCStatsReport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCStatsReport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCStatsReport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCStatsReport * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *entries )( 
            IRTCStatsReport * This,
            /* [retval][out] */ VARIANT *varIterator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *forEach )( 
            IRTCStatsReport * This,
            /* [in] */ VARIANT varCallback,
            /* [optional][in] */ VARIANT varThisArg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get )( 
            IRTCStatsReport * This,
            /* [in] */ VARIANT varKey,
            /* [retval][out] */ VARIANT *varEntry);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *has )( 
            IRTCStatsReport * This,
            /* [in] */ VARIANT varKey,
            /* [retval][out] */ VARIANT_BOOL *varBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *keys )( 
            IRTCStatsReport * This,
            /* [retval][out] */ VARIANT *varIterator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *values )( 
            IRTCStatsReport * This,
            /* [retval][out] */ VARIANT *varIterator);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_size )( 
            IRTCStatsReport * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IRTCStatsReportVtbl;

    interface IRTCStatsReport
    {
        CONST_VTBL struct IRTCStatsReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCStatsReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCStatsReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCStatsReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCStatsReport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCStatsReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCStatsReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCStatsReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCStatsReport_entries(This,varIterator)	\
    ( (This)->lpVtbl -> entries(This,varIterator) ) 

#define IRTCStatsReport_forEach(This,varCallback,varThisArg)	\
    ( (This)->lpVtbl -> forEach(This,varCallback,varThisArg) ) 

#define IRTCStatsReport_get(This,varKey,varEntry)	\
    ( (This)->lpVtbl -> get(This,varKey,varEntry) ) 

#define IRTCStatsReport_has(This,varKey,varBool)	\
    ( (This)->lpVtbl -> has(This,varKey,varBool) ) 

#define IRTCStatsReport_keys(This,varIterator)	\
    ( (This)->lpVtbl -> keys(This,varIterator) ) 

#define IRTCStatsReport_values(This,varIterator)	\
    ( (This)->lpVtbl -> values(This,varIterator) ) 

#define IRTCStatsReport_get_size(This,pVal)	\
    ( (This)->lpVtbl -> get_size(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCStatsReport_INTERFACE_DEFINED__ */


#ifndef __IRTCRtpReceiver_INTERFACE_DEFINED__
#define __IRTCRtpReceiver_INTERFACE_DEFINED__

/* interface IRTCRtpReceiver */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRTCRtpReceiver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9022511-3E81-4389-9BB0-667FEA36B40C")
    IRTCRtpReceiver : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_track( 
            /* [retval][out] */ VARIANT *varMediaStreamTrack) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_transport( 
            /* [retval][out] */ VARIANT *varRTCDtlsTransport) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_rtcpTransport( 
            /* [retval][out] */ VARIANT *varRTCDtlsTransport) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getParameters( 
            /* [retval][out] */ VARIANT *varRTCRtpParameters) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getContributingSources( 
            /* [retval][out] */ VARIANT *varSequenceRTCRtpContributingSource) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRTCRtpReceiverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRTCRtpReceiver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRTCRtpReceiver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRTCRtpReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRTCRtpReceiver * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRTCRtpReceiver * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRTCRtpReceiver * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRTCRtpReceiver * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_track )( 
            IRTCRtpReceiver * This,
            /* [retval][out] */ VARIANT *varMediaStreamTrack);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_transport )( 
            IRTCRtpReceiver * This,
            /* [retval][out] */ VARIANT *varRTCDtlsTransport);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rtcpTransport )( 
            IRTCRtpReceiver * This,
            /* [retval][out] */ VARIANT *varRTCDtlsTransport);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getParameters )( 
            IRTCRtpReceiver * This,
            /* [retval][out] */ VARIANT *varRTCRtpParameters);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getContributingSources )( 
            IRTCRtpReceiver * This,
            /* [retval][out] */ VARIANT *varSequenceRTCRtpContributingSource);
        
        END_INTERFACE
    } IRTCRtpReceiverVtbl;

    interface IRTCRtpReceiver
    {
        CONST_VTBL struct IRTCRtpReceiverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRTCRtpReceiver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRTCRtpReceiver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRTCRtpReceiver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRTCRtpReceiver_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRTCRtpReceiver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRTCRtpReceiver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRTCRtpReceiver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRTCRtpReceiver_get_track(This,varMediaStreamTrack)	\
    ( (This)->lpVtbl -> get_track(This,varMediaStreamTrack) ) 

#define IRTCRtpReceiver_get_transport(This,varRTCDtlsTransport)	\
    ( (This)->lpVtbl -> get_transport(This,varRTCDtlsTransport) ) 

#define IRTCRtpReceiver_get_rtcpTransport(This,varRTCDtlsTransport)	\
    ( (This)->lpVtbl -> get_rtcpTransport(This,varRTCDtlsTransport) ) 

#define IRTCRtpReceiver_getParameters(This,varRTCRtpParameters)	\
    ( (This)->lpVtbl -> getParameters(This,varRTCRtpParameters) ) 

#define IRTCRtpReceiver_getContributingSources(This,varSequenceRTCRtpContributingSource)	\
    ( (This)->lpVtbl -> getContributingSources(This,varSequenceRTCRtpContributingSource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRTCRtpReceiver_INTERFACE_DEFINED__ */


#ifndef __IMessageEvent_INTERFACE_DEFINED__
#define __IMessageEvent_INTERFACE_DEFINED__

/* interface IMessageEvent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DE917D5-1BE6-4D0C-AE95-A35C3E03A2C8")
    IMessageEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_data( 
            /* [retval][out] */ VARIANT *varAny) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_origin( 
            /* [retval][out] */ BSTR *DOMString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_lastEventId( 
            /* [retval][out] */ BSTR *DOMString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessageEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessageEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessageEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessageEvent * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_data )( 
            IMessageEvent * This,
            /* [retval][out] */ VARIANT *varAny);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_origin )( 
            IMessageEvent * This,
            /* [retval][out] */ BSTR *DOMString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lastEventId )( 
            IMessageEvent * This,
            /* [retval][out] */ BSTR *DOMString);
        
        END_INTERFACE
    } IMessageEventVtbl;

    interface IMessageEvent
    {
        CONST_VTBL struct IMessageEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessageEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessageEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessageEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessageEvent_get_data(This,varAny)	\
    ( (This)->lpVtbl -> get_data(This,varAny) ) 

#define IMessageEvent_get_origin(This,DOMString)	\
    ( (This)->lpVtbl -> get_origin(This,DOMString) ) 

#define IMessageEvent_get_lastEventId(This,DOMString)	\
    ( (This)->lpVtbl -> get_lastEventId(This,DOMString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageEvent_INTERFACE_DEFINED__ */


#ifndef __IJsArray_INTERFACE_DEFINED__
#define __IJsArray_INTERFACE_DEFINED__

/* interface IJsArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IJsArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79DA6ABF-DD77-4C1D-93CE-E18904E5D9BD")
    IJsArray : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IJsArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJsArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJsArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJsArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJsArray * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJsArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJsArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJsArray * This,
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
    } IJsArrayVtbl;

    interface IJsArray
    {
        CONST_VTBL struct IJsArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJsArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJsArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJsArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJsArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJsArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJsArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJsArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJsArray_INTERFACE_DEFINED__ */



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

EXTERN_C const CLSID CLSID_MediaDeviceInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("B99DCC2F-D37C-4053-9C8F-82E7E5F1EDB1")
MediaDeviceInfo;
#endif

EXTERN_C const CLSID CLSID_RTCPeerConnection;

#ifdef __cplusplus

class DECLSPEC_UUID("3325022A-66CE-421A-88A0-45CB438A8A8D")
RTCPeerConnection;
#endif

EXTERN_C const CLSID CLSID_RTCSessionDescription;

#ifdef __cplusplus

class DECLSPEC_UUID("146F17F4-9310-454C-9179-4D719975C815")
RTCSessionDescription;
#endif

EXTERN_C const CLSID CLSID_RTCError;

#ifdef __cplusplus

class DECLSPEC_UUID("A7D9F96B-0FC1-4165-ADA5-BA790246BE4F")
RTCError;
#endif

EXTERN_C const CLSID CLSID_RTCIceCandidate;

#ifdef __cplusplus

class DECLSPEC_UUID("20E253DA-1FAB-458B-B73A-E8EFB8793D2A")
RTCIceCandidate;
#endif

EXTERN_C const CLSID CLSID_RTCPeerConnectionIceEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("F0B10277-5D59-428B-8EC1-E63C1D0E0714")
RTCPeerConnectionIceEvent;
#endif

EXTERN_C const CLSID CLSID_MediaStreamEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("FB701742-2F19-435F-83A5-BECF5D06E3B2")
MediaStreamEvent;
#endif

EXTERN_C const CLSID CLSID_Empty;

#ifdef __cplusplus

class DECLSPEC_UUID("B162422C-E96D-41CF-804E-C5BF4252813C")
Empty;
#endif

EXTERN_C const CLSID CLSID_RTCDataChannel;

#ifdef __cplusplus

class DECLSPEC_UUID("18001236-9A8E-4C9B-A8B4-097F9D674C22")
RTCDataChannel;
#endif

EXTERN_C const CLSID CLSID_RTCDataChannelEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("F7312F73-98C4-4317-B5BE-092EE286EF25")
RTCDataChannelEvent;
#endif

EXTERN_C const CLSID CLSID_RTCWindow;

#ifdef __cplusplus

class DECLSPEC_UUID("F7B00619-8D49-4F38-93D8-BBCF72539B37")
RTCWindow;
#endif

EXTERN_C const CLSID CLSID_RTCScreen;

#ifdef __cplusplus

class DECLSPEC_UUID("19EB10C5-4F36-4DD0-8DCD-0DCAC12FE687")
RTCScreen;
#endif

EXTERN_C const CLSID CLSID_RTCDTMFSender;

#ifdef __cplusplus

class DECLSPEC_UUID("252A3B51-DC05-48D6-B2B6-7E2FF3987380")
RTCDTMFSender;
#endif

EXTERN_C const CLSID CLSID_RTCTrackEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("7728A3F5-1805-4C18-BBB9-EF2DEDC92698")
RTCTrackEvent;
#endif

EXTERN_C const CLSID CLSID_RTCRtpSender;

#ifdef __cplusplus

class DECLSPEC_UUID("68F4CB24-B74B-4EAC-8D55-E3305D01349B")
RTCRtpSender;
#endif

EXTERN_C const CLSID CLSID_RTCDTMFToneChangeEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("65D1AD0F-E022-4BC5-A6FC-2876A666B26F")
RTCDTMFToneChangeEvent;
#endif

EXTERN_C const CLSID CLSID_RTCStats;

#ifdef __cplusplus

class DECLSPEC_UUID("BF4E13F6-1BFE-4C37-8E74-C72A26FD4E32")
RTCStats;
#endif

EXTERN_C const CLSID CLSID_RTCStatsReport;

#ifdef __cplusplus

class DECLSPEC_UUID("D344AC65-DEF1-48B2-A035-B712B43B7377")
RTCStatsReport;
#endif

EXTERN_C const CLSID CLSID_RTCRtpReceiver;

#ifdef __cplusplus

class DECLSPEC_UUID("450B8CED-6446-4074-8630-3F331C576F68")
RTCRtpReceiver;
#endif

EXTERN_C const CLSID CLSID_MessageEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("757CE69A-9AB3-4F85-AB01-97EE17E6AD61")
MessageEvent;
#endif

EXTERN_C const CLSID CLSID_JsArray;

#ifdef __cplusplus

class DECLSPEC_UUID("82E3A6DF-9233-4C74-9F75-F3215C679897")
JsArray;
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


