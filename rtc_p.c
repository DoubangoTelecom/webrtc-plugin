

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon May 22 22:35:03 2017
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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "rtc_i.h"

#define TYPE_FORMAT_STRING_SIZE   1101                              
#define PROC_FORMAT_STRING_SIZE   5311                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _rtc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rtc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rtc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rtc_MIDL_PROC_FORMAT_STRING;

typedef struct _rtc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rtc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const rtc_MIDL_TYPE_FORMAT_STRING rtc__MIDL_TypeFormatString;
extern const rtc_MIDL_PROC_FORMAT_STRING rtc__MIDL_ProcFormatString;
extern const rtc_MIDL_EXPR_FORMAT_STRING rtc__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPlugin_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPlugin_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaDevices_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaDevices_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaStreamDoubango_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaStreamDoubango_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaTrackSupportedConstraints_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaTrackSupportedConstraints_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPromise_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPromise_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IErrorMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IErrorMessage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaStreamTrack_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaStreamTrack_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaTrackConstraints_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaTrackConstraints_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaDeviceInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaDeviceInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCPeerConnection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCPeerConnection_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCSessionDescription_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCSessionDescription_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCError_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCError_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCIceCandidate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCIceCandidate_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCPeerConnectionIceEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCPeerConnectionIceEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMediaStreamEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMediaStreamEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEmpty_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEmpty_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCDataChannel_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCDataChannel_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCDataChannelEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCDataChannelEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCWindow_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCWindow_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCScreen_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCScreen_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCDTMFSender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCDTMFSender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCTrackEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCTrackEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCRtpSender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCRtpSender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCDTMFToneChangeEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCDTMFToneChangeEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCStats_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCStats_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCStatsReport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCStatsReport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRTCRtpReceiver_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRTCRtpReceiver_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMessageEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMessageEvent_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const rtc_MIDL_PROC_FORMAT_STRING rtc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_tone */


	/* Procedure get_label */


	/* Procedure get_type */


	/* Procedure get_candidate */


	/* Procedure get_name */


	/* Procedure get_type */


	/* Procedure get_deviceId */


	/* Procedure get_kind */


	/* Procedure get_name */


	/* Procedure get_id */


	/* Procedure get_versionName */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varTone */


	/* Parameter USVString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_transport */


	/* Procedure get_transport */


	/* Procedure get_ontonechange */


	/* Procedure get_candidate */


	/* Procedure getAudioTracks */


	/* Procedure get_mediaDevices */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDtlsTransport */


	/* Parameter varRTCDtlsTransport */


	/* Parameter varEventHandler */


	/* Parameter RTCIceCandidate */


	/* Parameter Tracks */


	/* Parameter pVal */

/* 60 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sdpMLineIndex */


	/* Procedure get_aspectRatio */


	/* Procedure get_isWebRtcPlugin */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x22 ),	/* 34 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDisplay */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDisplay */

/* 132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createSessionDescription */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 160 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter ppSdp */

/* 174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDictOptions */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0xc ),	/* 12 */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDictOptions */

/* 210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createPeerConnection */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xd ),	/* 13 */
/* 230 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 238 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCConfiguration */

/* 246 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter MediaConstraints */

/* 252 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 256 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter ppPeerConnection */

/* 258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 260 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 262 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createIceCandidate */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0xe ),	/* 14 */
/* 278 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter ppIceCandidate */

/* 300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 302 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 304 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createMediaStreamTrack */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0xf ),	/* 15 */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMediaStreamTrack */

/* 336 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createMediaStream */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMediaStream */

/* 372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindEventListener */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x11 ),	/* 17 */
/* 392 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 400 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter listenerCallback */

/* 414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter useCapture */

/* 420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 422 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 424 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSources */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x12 ),	/* 18 */
/* 440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 448 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter successCallback */

/* 456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getWindows */

/* 468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x13 ),	/* 19 */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 484 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter winList */

/* 492 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCapabilities */


	/* Procedure get_oninactive */


	/* Procedure getScreens */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x14 ),	/* 20 */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 520 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackCapabilities */


	/* Parameter pVal */


	/* Parameter screenList */

/* 528 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_oninactive */


	/* Procedure put_src */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x15 ),	/* 21 */
/* 548 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 556 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */


	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_videoWidth */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x16 ),	/* 22 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x24 ),	/* 36 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_videoHeight */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x17 ),	/* 23 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x24 ),	/* 36 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onerror */


	/* Procedure setConfiguration */


	/* Procedure fillImageData */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x18 ),	/* 24 */
/* 656 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter RTCConfiguration */


	/* Parameter imageData */

/* 672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getScreenShot */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x19 ),	/* 25 */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 700 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base64BitmapData */

/* 708 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_logSeverity */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1a ),	/* 26 */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 734 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 744 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_logSeverity */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x1b ),	/* 27 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_data */


	/* Procedure get_track */


	/* Procedure entries */


	/* Procedure get_track */


	/* Procedure get_channel */


	/* Procedure get_stream */


	/* Procedure getSupportedConstraints */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x7 ),	/* 7 */
/* 800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varAny */


	/* Parameter varMediaStreamTrack */


	/* Parameter varIterator */


	/* Parameter varMediaStreamTrack */


	/* Parameter varRTCDataChannel */


	/* Parameter MediaStream */


	/* Parameter pConstraints */

/* 816 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createAnswer */


	/* Procedure catchh */


	/* Procedure getUserMedia */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 844 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCAnswerOptions */


	/* Parameter onRejected */


	/* Parameter constraints */

/* 852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 856 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter pPromiseRTCSessionDescriptionInit */


	/* Parameter pThePromise */


	/* Parameter pPromiseMediaStream */

/* 858 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rtcpTransport */


	/* Procedure get_rtcpTransport */


	/* Procedure get_maxPacketLifeTime */


	/* Procedure getVideoTracks */


	/* Procedure enumerateDevices */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x9 ),	/* 9 */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 886 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDtlsTransport */


	/* Parameter varRTCDtlsTransport */


	/* Parameter pVal */


	/* Parameter Tracks */


	/* Parameter pPromiseSequenceMediaDeviceInfo */

/* 894 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParameters */


	/* Procedure get_maxRetransmits */


	/* Procedure get_localDescription */


	/* Procedure getTracks */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xa ),	/* 10 */
/* 914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */


	/* Parameter pVal */


	/* Parameter RTCSessionDescription */


	/* Parameter Tracks */

/* 930 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTrackById */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0xb ),	/* 11 */
/* 950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 958 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter trackId */

/* 966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter MediaStreamTrack */

/* 972 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xc ),	/* 12 */
/* 992 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1000 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0xd ),	/* 13 */
/* 1028 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_remoteDescription */


	/* Procedure clone */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0xe ),	/* 14 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter MediaStream */

/* 1080 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_echoCancellation */


	/* Procedure get_active */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0xf ),	/* 15 */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_pendingRemoteDescription */


	/* Procedure get_onaddtrack */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1144 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 1152 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddtrack */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1172 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1180 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1192 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onended */


	/* Procedure get_onremovetrack */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1216 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1224 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onended */


	/* Procedure put_onremovetrack */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1252 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */


	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_width */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ordered */


	/* Procedure get_height */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1336 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_enabled */


	/* Procedure get_frameRate */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0xa ),	/* 10 */
/* 1352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_facingMode */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0xb ),	/* 11 */
/* 1388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_negotiated */


	/* Procedure get_muted */


	/* Procedure get_volume */

/* 1416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0xc ),	/* 12 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1444 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_port */


	/* Procedure get_sampleRate */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0xd ),	/* 13 */
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sampleSize */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0xe ),	/* 14 */
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_latency */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedPort */


	/* Procedure get_channelCount */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_deviceId */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupId */

/* 1632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1660 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure then */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1676 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1682 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1684 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter onFulfilled */

/* 1692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1696 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter onRejected */

/* 1698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1700 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1702 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter pThePromise */

/* 1704 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1706 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1708 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_origin */


	/* Procedure get_type */


	/* Procedure get_title */


	/* Procedure get_title */


	/* Procedure get_sdpMid */


	/* Procedure get_message */


	/* Procedure get_kind */


	/* Procedure get_id */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1740 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1744 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_lastEventId */


	/* Procedure get_id */


	/* Procedure get_url */


	/* Procedure get_errorDetail */


	/* Procedure get_sdp */


	/* Procedure get_label */


	/* Procedure get_label */

/* 1752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1766 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1768 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1776 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1780 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_enabled */

/* 1788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0xb ),	/* 11 */
/* 1796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1798 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1816 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dtmf */


	/* Procedure get_id */


	/* Procedure get_onmute */

/* 1824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0xd ),	/* 13 */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1838 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1840 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDTMFSender */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1848 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1852 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmute */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0xe ),	/* 14 */
/* 1868 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1876 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 1890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1892 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentRemoteDescription */


	/* Procedure get_onunmute */

/* 1896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0xf ),	/* 15 */
/* 1904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1912 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 1920 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1924 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onunmute */

/* 1932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1940 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1948 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1956 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1960 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 1962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1964 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */

/* 1968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1982 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1984 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1992 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1996 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onopen */


	/* Procedure getConstraints */

/* 2004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2018 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2020 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaTrackConstraints */

/* 2028 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2032 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSettings */

/* 2040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2054 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2056 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackSettings */

/* 2064 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2068 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure applyConstraints */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2084 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2092 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackConstraints */

/* 2100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2108 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onoverconstrained */

/* 2112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2128 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2136 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2140 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onoverconstrained */

/* 2148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2156 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2164 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2176 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clone */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2200 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 2208 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 2220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_micLevel */

/* 2250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2274 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStart */

/* 2286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStop */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toneBuffer */


	/* Procedure get_foundation */


	/* Procedure get_groupId */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0xa ),	/* 10 */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2362 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrBuffer */


	/* Parameter pVal */


	/* Parameter pVal */

/* 2370 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createOffer */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2390 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2398 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCOfferOptions */

/* 2406 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter pPromiseRTCSessionDescriptionInit */

/* 2412 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2414 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2416 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get */


	/* Procedure setLocalDescription */

/* 2424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2432 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2438 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2440 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */


	/* Parameter RTCSessionDescriptionInit */

/* 2448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2452 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varEntry */


	/* Parameter pPromiseVoid */

/* 2454 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2456 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2458 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getContributingSources */


	/* Procedure keys */


	/* Procedure getParameters */


	/* Procedure get_currentLocalDescription */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0xb ),	/* 11 */
/* 2474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2480 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2482 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpContributingSource */


	/* Parameter varIterator */


	/* Parameter varRTCRtpParameters */


	/* Parameter RTCSessionDescription */

/* 2490 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2494 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure values */


	/* Procedure get_pendingLocalDescription */

/* 2502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0xc ),	/* 12 */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2516 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2518 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varIterator */


	/* Parameter RTCSessionDescription */

/* 2526 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2530 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRemoteDescription */

/* 2538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0xd ),	/* 13 */
/* 2546 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2552 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2554 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 2562 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2566 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter pPromiseVoid */

/* 2568 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2570 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2572 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2576 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addIceCandidate */

/* 2580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2588 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2594 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2596 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 2604 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2608 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter pPromiseVoid */

/* 2610 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2612 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2614 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2618 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ufrag */


	/* Procedure get_signalingState */

/* 2622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2636 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2638 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter RTCSignalingState */

/* 2646 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2650 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 2652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_binaryType */


	/* Procedure toString */


	/* Procedure get_iceGatheringState */

/* 2658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2672 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2674 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter String */


	/* Parameter RTCIceGatheringState */

/* 2682 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2686 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_iceConnectionState */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2710 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceConnectionState */

/* 2718 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_connectionState */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2746 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPeerConnectionState */

/* 2754 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2758 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_canTrickleIceCandidates */

/* 2766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter BooleanVal */

/* 2790 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2794 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onerror */


	/* Procedure getConfiguration */

/* 2802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2818 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter RTCConfiguration */

/* 2826 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2830 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */


	/* Return value */

/* 2832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 2838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onclose */


	/* Procedure addStream */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2876 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2884 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaStream */

/* 2892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */


	/* Return value */

/* 2898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2900 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeStream */

/* 2904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2912 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2918 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2920 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStream */

/* 2928 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onnegotiationneeded */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2964 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2968 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onnegotiationneeded */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2984 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2992 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3000 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3008 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidate */

/* 3012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3028 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3036 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3040 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidate */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3056 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3064 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3080 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidateerror */

/* 3084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3100 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3108 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3112 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidateerror */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3128 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3136 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3148 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onsignalingstatechange */

/* 3156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3170 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3172 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3180 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3184 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onsignalingstatechange */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3208 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oniceconnectionstatechange */

/* 3228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3244 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3252 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_oniceconnectionstatechange */

/* 3264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3292 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicegatheringstatechange */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3316 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3324 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3328 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicegatheringstatechange */

/* 3336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3344 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3360 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3364 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onconnectionstatechange */

/* 3372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3386 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3388 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3396 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3400 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onconnectionstatechange */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3416 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3424 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3432 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onfingerprintfailure */

/* 3444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3458 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3460 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3468 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3472 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onfingerprintfailure */

/* 3480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3496 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3508 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onaddstream */

/* 3516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3532 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3540 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3544 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddstream */

/* 3552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3560 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3566 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3568 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3576 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3580 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sctp */

/* 3588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3604 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCSctpTransport */

/* 3612 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3616 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDataChannel */

/* 3624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3632 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3638 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3640 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter label */

/* 3648 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3652 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter varDataChannelDict */

/* 3654 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3658 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varRTCDataChannel */

/* 3660 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3662 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3664 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3668 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ondatachannel */

/* 3672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3686 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3688 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 3696 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3700 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ondatachannel */

/* 3708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3716 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3724 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 3732 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3736 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSenders */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3760 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpSender */

/* 3768 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getReceivers */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3796 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpReceiver */

/* 3804 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTransceivers */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3832 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpTransceiver */

/* 3840 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 3852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3860 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3868 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 3876 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3880 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varMediaStreams0 */

/* 3882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3884 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3886 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varMediaStreams1 */

/* 3888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3890 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3892 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varMediaStreams2 */

/* 3894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3896 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 3898 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varRTCRtpSender */

/* 3900 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3902 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 3904 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3920 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3928 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpSender */

/* 3936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTransceiver */

/* 3948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3956 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3962 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrackorDOMStringTrackOrKind */

/* 3972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3976 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varRTCRtpTransceiverInit */

/* 3978 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3980 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3982 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 3984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3986 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ontrack */

/* 3990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4004 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4006 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4014 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4018 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 4020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontrack */

/* 4026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4042 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4054 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getStats */

/* 4062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4070 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4078 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4090 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varPromiseRTCStatsReport */

/* 4092 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4094 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4096 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 4098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4100 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_type */

/* 4104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4120 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4132 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 4134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_sdp */

/* 4140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4146 */	NdrFcShort( 0xa ),	/* 10 */
/* 4148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4156 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4168 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 4170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4172 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sdpLineNumber */

/* 4176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0xa ),	/* 10 */
/* 4184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_httpRequestStatusCode */

/* 4212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0xb ),	/* 11 */
/* 4220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */


	/* Procedure toString */

/* 4248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0xc ),	/* 12 */
/* 4256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4264 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter String */

/* 4272 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4276 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_type */

/* 4284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0xe ),	/* 14 */
/* 4292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4298 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4300 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPriorityType */


	/* Parameter pVal */

/* 4308 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4312 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */


	/* Procedure get_tcpType */

/* 4320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0xf ),	/* 15 */
/* 4328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4336 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCDataChannelState */


	/* Parameter pVal */

/* 4344 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4348 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedAddress */

/* 4356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4370 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4372 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4380 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4384 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */

/* 4392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0xb ),	/* 11 */
/* 4400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4406 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4408 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter USVString */

/* 4416 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4420 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmount */

/* 4428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4456 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmountLowThreshold */

/* 4464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4492 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bufferedAmountLowThreshold */

/* 4500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4510 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4528 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_binaryType */

/* 4536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4550 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4552 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */

/* 4560 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4564 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 4566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onopen */

/* 4572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4588 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4596 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4600 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4604 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onclose */

/* 4608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4624 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4632 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4636 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onmessage */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4660 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4668 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmessage */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4696 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4708 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onbufferedamountlow */

/* 4716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4740 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4744 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 4746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onbufferedamountlow */

/* 4752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4760 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4766 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4768 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4780 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure send */

/* 4818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4826 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4834 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data */

/* 4842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4846 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4850 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addEventListener */

/* 4854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4862 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4870 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 4878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4882 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter listenerCallback */

/* 4884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4888 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter useCapture */

/* 4890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4892 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4894 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4898 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeEventListener */

/* 4902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4910 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4918 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 4926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter listenerCallback */

/* 4932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4936 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter useCapture */

/* 4938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4940 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4942 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 4944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4946 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_id */


	/* Procedure get_id */

/* 4950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4982 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertDTMF */

/* 4986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4994 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5002 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tones */

/* 5010 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5014 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter duration */

/* 5016 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5020 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter interToneGap */

/* 5022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5024 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5026 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 5028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5030 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontonechange */

/* 5034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5042 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5048 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5050 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5062 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 5064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5066 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setParameters */

/* 5070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0xa ),	/* 10 */
/* 5078 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5084 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5086 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5098 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varPromiseVoid */

/* 5100 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5102 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5104 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceTrack */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0xc ),	/* 12 */
/* 5120 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5126 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5128 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 5136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5140 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varPromiseVoid */

/* 5142 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5144 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5146 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 5148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5150 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_timestamp */

/* 5154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 5184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure forEach */

/* 5190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5198 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5206 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varCallback */

/* 5214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5218 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varThisArg */

/* 5220 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5222 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5224 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 5226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5228 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure has */

/* 5232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0xa ),	/* 10 */
/* 5240 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5244 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5248 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */

/* 5256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5260 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Parameter varBool */

/* 5262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5264 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5266 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5270 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_size */

/* 5274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0xd ),	/* 13 */
/* 5282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5290 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const rtc_MIDL_TYPE_FORMAT_STRING rtc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 44 */	NdrFcShort( 0x3e6 ),	/* Offset= 998 (1042) */
/* 46 */	
			0x13, 0x0,	/* FC_OP */
/* 48 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (1022) */
/* 50 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 52 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	NdrFcShort( 0x10 ),	/* 16 */
/* 62 */	NdrFcShort( 0x2f ),	/* 47 */
/* 64 */	NdrFcLong( 0x14 ),	/* 20 */
/* 68 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 70 */	NdrFcLong( 0x3 ),	/* 3 */
/* 74 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 76 */	NdrFcLong( 0x11 ),	/* 17 */
/* 80 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 82 */	NdrFcLong( 0x2 ),	/* 2 */
/* 86 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 88 */	NdrFcLong( 0x4 ),	/* 4 */
/* 92 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 94 */	NdrFcLong( 0x5 ),	/* 5 */
/* 98 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 100 */	NdrFcLong( 0xb ),	/* 11 */
/* 104 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 106 */	NdrFcLong( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 112 */	NdrFcLong( 0x6 ),	/* 6 */
/* 116 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (348) */
/* 118 */	NdrFcLong( 0x7 ),	/* 7 */
/* 122 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 124 */	NdrFcLong( 0x8 ),	/* 8 */
/* 128 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (6) */
/* 130 */	NdrFcLong( 0xd ),	/* 13 */
/* 134 */	NdrFcShort( 0xdc ),	/* Offset= 220 (354) */
/* 136 */	NdrFcLong( 0x9 ),	/* 9 */
/* 140 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (372) */
/* 142 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 146 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (390) */
/* 148 */	NdrFcLong( 0x24 ),	/* 36 */
/* 152 */	NdrFcShort( 0x31c ),	/* Offset= 796 (948) */
/* 154 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 158 */	NdrFcShort( 0x316 ),	/* Offset= 790 (948) */
/* 160 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 164 */	NdrFcShort( 0x314 ),	/* Offset= 788 (952) */
/* 166 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 170 */	NdrFcShort( 0x312 ),	/* Offset= 786 (956) */
/* 172 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 176 */	NdrFcShort( 0x310 ),	/* Offset= 784 (960) */
/* 178 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 182 */	NdrFcShort( 0x30e ),	/* Offset= 782 (964) */
/* 184 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 188 */	NdrFcShort( 0x30c ),	/* Offset= 780 (968) */
/* 190 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 194 */	NdrFcShort( 0x30a ),	/* Offset= 778 (972) */
/* 196 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 200 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (956) */
/* 202 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 206 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (960) */
/* 208 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 212 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (976) */
/* 214 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 218 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (972) */
/* 220 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 224 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (980) */
/* 226 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 230 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (984) */
/* 232 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 236 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (988) */
/* 238 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 242 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (992) */
/* 244 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 248 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (996) */
/* 250 */	NdrFcLong( 0x10 ),	/* 16 */
/* 254 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 256 */	NdrFcLong( 0x12 ),	/* 18 */
/* 260 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 262 */	NdrFcLong( 0x13 ),	/* 19 */
/* 266 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 268 */	NdrFcLong( 0x15 ),	/* 21 */
/* 272 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 274 */	NdrFcLong( 0x16 ),	/* 22 */
/* 278 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 280 */	NdrFcLong( 0x17 ),	/* 23 */
/* 284 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 286 */	NdrFcLong( 0xe ),	/* 14 */
/* 290 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1004) */
/* 292 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 296 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1014) */
/* 298 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 302 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1018) */
/* 304 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 308 */	NdrFcShort( 0x288 ),	/* Offset= 648 (956) */
/* 310 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 314 */	NdrFcShort( 0x286 ),	/* Offset= 646 (960) */
/* 316 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 320 */	NdrFcShort( 0x284 ),	/* Offset= 644 (964) */
/* 322 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 326 */	NdrFcShort( 0x27a ),	/* Offset= 634 (960) */
/* 328 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 332 */	NdrFcShort( 0x274 ),	/* Offset= 628 (960) */
/* 334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* Offset= 0 (338) */
/* 340 */	NdrFcLong( 0x1 ),	/* 1 */
/* 344 */	NdrFcShort( 0x0 ),	/* Offset= 0 (344) */
/* 346 */	NdrFcShort( 0xffff ),	/* Offset= -1 (345) */
/* 348 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 352 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 354 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 372 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 374 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 384 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 388 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 390 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (394) */
/* 394 */	
			0x13, 0x0,	/* FC_OP */
/* 396 */	NdrFcShort( 0x216 ),	/* Offset= 534 (930) */
/* 398 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 400 */	NdrFcShort( 0x18 ),	/* 24 */
/* 402 */	NdrFcShort( 0xa ),	/* 10 */
/* 404 */	NdrFcLong( 0x8 ),	/* 8 */
/* 408 */	NdrFcShort( 0x5a ),	/* Offset= 90 (498) */
/* 410 */	NdrFcLong( 0xd ),	/* 13 */
/* 414 */	NdrFcShort( 0x7e ),	/* Offset= 126 (540) */
/* 416 */	NdrFcLong( 0x9 ),	/* 9 */
/* 420 */	NdrFcShort( 0x9e ),	/* Offset= 158 (578) */
/* 422 */	NdrFcLong( 0xc ),	/* 12 */
/* 426 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (626) */
/* 428 */	NdrFcLong( 0x24 ),	/* 36 */
/* 432 */	NdrFcShort( 0x124 ),	/* Offset= 292 (724) */
/* 434 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 438 */	NdrFcShort( 0x140 ),	/* Offset= 320 (758) */
/* 440 */	NdrFcLong( 0x10 ),	/* 16 */
/* 444 */	NdrFcShort( 0x15a ),	/* Offset= 346 (790) */
/* 446 */	NdrFcLong( 0x2 ),	/* 2 */
/* 450 */	NdrFcShort( 0x174 ),	/* Offset= 372 (822) */
/* 452 */	NdrFcLong( 0x3 ),	/* 3 */
/* 456 */	NdrFcShort( 0x18e ),	/* Offset= 398 (854) */
/* 458 */	NdrFcLong( 0x14 ),	/* 20 */
/* 462 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (886) */
/* 464 */	NdrFcShort( 0xffff ),	/* Offset= -1 (463) */
/* 466 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 470 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 476 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	0x13, 0x0,	/* FC_OP */
/* 492 */	NdrFcShort( 0xfe2a ),	/* Offset= -470 (22) */
/* 494 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 496 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 498 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 502 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 508 */	NdrFcShort( 0x4 ),	/* 4 */
/* 510 */	0x11, 0x0,	/* FC_RP */
/* 512 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (466) */
/* 514 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 516 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 518 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 528 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 532 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 534 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 536 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (354) */
/* 538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x6 ),	/* Offset= 6 (552) */
/* 548 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 552 */	
			0x11, 0x0,	/* FC_RP */
/* 554 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (518) */
/* 556 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 566 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 570 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 572 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (372) */
/* 576 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 578 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x6 ),	/* Offset= 6 (590) */
/* 586 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 590 */	
			0x11, 0x0,	/* FC_RP */
/* 592 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (556) */
/* 594 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 596 */	NdrFcShort( 0x4 ),	/* 4 */
/* 598 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 604 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 606 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0x13, 0x0,	/* FC_OP */
/* 620 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1022) */
/* 622 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 624 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 626 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x6 ),	/* Offset= 6 (638) */
/* 634 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x11, 0x0,	/* FC_RP */
/* 640 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (594) */
/* 642 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 644 */	NdrFcLong( 0x2f ),	/* 47 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 654 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 656 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 658 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 660 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 664 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 666 */	NdrFcShort( 0x4 ),	/* 4 */
/* 668 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 670 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 672 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 674 */	NdrFcShort( 0x10 ),	/* 16 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0xa ),	/* Offset= 10 (688) */
/* 680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 682 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 684 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (642) */
/* 686 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 688 */	
			0x13, 0x0,	/* FC_OP */
/* 690 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (660) */
/* 692 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 694 */	NdrFcShort( 0x4 ),	/* 4 */
/* 696 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 704 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	0x13, 0x0,	/* FC_OP */
/* 718 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (672) */
/* 720 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 722 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 724 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x6 ),	/* Offset= 6 (736) */
/* 732 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x11, 0x0,	/* FC_RP */
/* 738 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (692) */
/* 740 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 744 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 746 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 750 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 752 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 754 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (740) */
			0x5b,		/* FC_END */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x18 ),	/* 24 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0xa ),	/* Offset= 10 (774) */
/* 766 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 768 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (746) */
/* 772 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 774 */	
			0x11, 0x0,	/* FC_RP */
/* 776 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (518) */
/* 778 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 782 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 788 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 790 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 796 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	0x13, 0x0,	/* FC_OP */
/* 804 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (778) */
/* 806 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 808 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 810 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 812 */	NdrFcShort( 0x2 ),	/* 2 */
/* 814 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 820 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 822 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 828 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	0x13, 0x0,	/* FC_OP */
/* 836 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (810) */
/* 838 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 840 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 842 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 846 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 852 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 854 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 860 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 864 */	NdrFcShort( 0x4 ),	/* 4 */
/* 866 */	0x13, 0x0,	/* FC_OP */
/* 868 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (842) */
/* 870 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 872 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 874 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 878 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 884 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 886 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 898 */	0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (874) */
/* 902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 906 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 910 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 912 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 914 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 920 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 922 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 924 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0xffec ),	/* Offset= -20 (906) */
/* 928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 930 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 932 */	NdrFcShort( 0x28 ),	/* 40 */
/* 934 */	NdrFcShort( 0xffec ),	/* Offset= -20 (914) */
/* 936 */	NdrFcShort( 0x0 ),	/* Offset= 0 (936) */
/* 938 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 940 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 942 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 944 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (398) */
/* 946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 948 */	
			0x13, 0x0,	/* FC_OP */
/* 950 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (672) */
/* 952 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 954 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 958 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 962 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 964 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 966 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 970 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 972 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 974 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 976 */	
			0x13, 0x0,	/* FC_OP */
/* 978 */	NdrFcShort( 0xfd8a ),	/* Offset= -630 (348) */
/* 980 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 982 */	NdrFcShort( 0xfc30 ),	/* Offset= -976 (6) */
/* 984 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 986 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (354) */
/* 988 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 990 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (372) */
/* 992 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 994 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (390) */
/* 996 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 998 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1000) */
/* 1000 */	
			0x13, 0x0,	/* FC_OP */
/* 1002 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1022) */
/* 1004 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1008 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1010 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1012 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1014 */	
			0x13, 0x0,	/* FC_OP */
/* 1016 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1004) */
/* 1018 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1020 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1022 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1024 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1028) */
/* 1030 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1032 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1034 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1036 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1038 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (50) */
/* 1040 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1042 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1046 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (46) */
/* 1052 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1054 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1056 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1058 */	NdrFcShort( 0xfd52 ),	/* Offset= -686 (372) */
/* 1060 */	
			0x12, 0x0,	/* FC_UP */
/* 1062 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1022) */
/* 1064 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1060) */
/* 1074 */	
			0x12, 0x0,	/* FC_UP */
/* 1076 */	NdrFcShort( 0xfbe2 ),	/* Offset= -1054 (22) */
/* 1078 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1074) */
/* 1088 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1090 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1094 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1098 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPlugin, ver. 0.0,
   GUID={0xE7924A16,0x1A24,0x472D,{0xB4,0x81,0x92,0xD7,0xC2,0x53,0x3F,0x55}} */

#pragma code_seg(".orpc")
static const unsigned short IPlugin_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    108,
    144,
    186,
    222,
    270,
    312,
    348,
    384,
    432,
    468,
    504,
    540,
    576,
    612,
    648,
    684,
    720,
    756
    };

static const MIDL_STUBLESS_PROXY_INFO IPlugin_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPlugin_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(28) _IPluginProxyVtbl = 
{
    &IPlugin_ProxyInfo,
    &IID_IPlugin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_versionName */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_mediaDevices */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_isWebRtcPlugin */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createDisplay */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createSessionDescription */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createDictOptions */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createPeerConnection */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createIceCandidate */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createMediaStreamTrack */ ,
    (void *) (INT_PTR) -1 /* IPlugin::createMediaStream */ ,
    (void *) (INT_PTR) -1 /* IPlugin::bindEventListener */ ,
    (void *) (INT_PTR) -1 /* IPlugin::getSources */ ,
    (void *) (INT_PTR) -1 /* IPlugin::getWindows */ ,
    (void *) (INT_PTR) -1 /* IPlugin::getScreens */ ,
    (void *) (INT_PTR) -1 /* IPlugin::put_src */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_videoWidth */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_videoHeight */ ,
    (void *) (INT_PTR) -1 /* IPlugin::fillImageData */ ,
    (void *) (INT_PTR) -1 /* IPlugin::getScreenShot */ ,
    (void *) (INT_PTR) -1 /* IPlugin::get_logSeverity */ ,
    (void *) (INT_PTR) -1 /* IPlugin::put_logSeverity */
};


static const PRPC_STUB_FUNCTION IPlugin_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPluginStubVtbl =
{
    &IID_IPlugin,
    &IPlugin_ServerInfo,
    28,
    &IPlugin_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaDevices, ver. 0.0,
   GUID={0x2785B9BD,0xCA2D,0x44DA,{0x87,0x9B,0xFD,0x15,0xF9,0xBA,0x1D,0x5F}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaDevices_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792,
    828,
    870
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaDevices_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaDevices_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaDevices_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaDevices_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IMediaDevicesProxyVtbl = 
{
    &IMediaDevices_ProxyInfo,
    &IID_IMediaDevices,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaDevices::getSupportedConstraints */ ,
    (void *) (INT_PTR) -1 /* IMediaDevices::getUserMedia */ ,
    (void *) (INT_PTR) -1 /* IMediaDevices::enumerateDevices */
};


static const PRPC_STUB_FUNCTION IMediaDevices_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaDevicesStubVtbl =
{
    &IID_IMediaDevices,
    &IMediaDevices_ServerInfo,
    10,
    &IMediaDevices_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaStreamDoubango, ver. 0.0,
   GUID={0x39C30596,0x997E,0x434C,{0x81,0x71,0x85,0xB2,0x73,0x0A,0x9C,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaStreamDoubango_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    870,
    906,
    942,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1200,
    1236,
    504,
    540
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaStreamDoubango_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamDoubango_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaStreamDoubango_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamDoubango_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IMediaStreamDoubangoProxyVtbl = 
{
    &IMediaStreamDoubango_ProxyInfo,
    &IID_IMediaStreamDoubango,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::get_id */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::getAudioTracks */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::getVideoTracks */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::getTracks */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::getTrackById */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::addTrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::removeTrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::clone */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::get_active */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::get_onaddtrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::put_onaddtrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::get_onremovetrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::put_onremovetrack */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::get_oninactive */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamDoubango::put_oninactive */
};


static const PRPC_STUB_FUNCTION IMediaStreamDoubango_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaStreamDoubangoStubVtbl =
{
    &IID_IMediaStreamDoubango,
    &IMediaStreamDoubango_ServerInfo,
    22,
    &IMediaStreamDoubango_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaTrackSupportedConstraints, ver. 0.0,
   GUID={0x212555EE,0xF2DC,0x4E4A,{0xB2,0x7C,0x51,0x7D,0x29,0xE0,0xB7,0xA4}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaTrackSupportedConstraints_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1272,
    1308,
    72,
    1344,
    1380,
    1416,
    1452,
    1488,
    1092,
    1524,
    1560,
    1596,
    1632
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaTrackSupportedConstraints_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaTrackSupportedConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaTrackSupportedConstraints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaTrackSupportedConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _IMediaTrackSupportedConstraintsProxyVtbl = 
{
    &IMediaTrackSupportedConstraints_ProxyInfo,
    &IID_IMediaTrackSupportedConstraints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_width */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_height */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_aspectRatio */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_frameRate */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_facingMode */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_volume */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_sampleRate */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_sampleSize */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_echoCancellation */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_latency */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_channelCount */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_deviceId */ ,
    (void *) (INT_PTR) -1 /* IMediaTrackSupportedConstraints::get_groupId */
};


static const PRPC_STUB_FUNCTION IMediaTrackSupportedConstraints_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaTrackSupportedConstraintsStubVtbl =
{
    &IID_IMediaTrackSupportedConstraints,
    &IMediaTrackSupportedConstraints_ServerInfo,
    20,
    &IMediaTrackSupportedConstraints_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPromise, ver. 0.0,
   GUID={0x59C63051,0x0B14,0x4D44,{0x80,0x15,0xBD,0x42,0xBB,0xCE,0x49,0x64}} */

#pragma code_seg(".orpc")
static const unsigned short IPromise_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1668,
    828
    };

static const MIDL_STUBLESS_PROXY_INFO IPromise_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IPromise_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPromise_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IPromise_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IPromiseProxyVtbl = 
{
    &IPromise_ProxyInfo,
    &IID_IPromise,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPromise::then */ ,
    (void *) (INT_PTR) -1 /* IPromise::catchh */
};


static const PRPC_STUB_FUNCTION IPromise_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPromiseStubVtbl =
{
    &IID_IPromise,
    &IPromise_ServerInfo,
    9,
    &IPromise_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IErrorMessage, ver. 0.0,
   GUID={0x97C09588,0x9992,0x4809,{0x90,0x0B,0xE7,0x31,0x9C,0x61,0x5D,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short IErrorMessage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IErrorMessage_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IErrorMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IErrorMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IErrorMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IErrorMessageProxyVtbl = 
{
    &IErrorMessage_ProxyInfo,
    &IID_IErrorMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IErrorMessage::get_name */
};


static const PRPC_STUB_FUNCTION IErrorMessage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IErrorMessageStubVtbl =
{
    &IID_IErrorMessage,
    &IErrorMessage_ServerInfo,
    8,
    &IErrorMessage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaStreamTrack, ver. 0.0,
   GUID={0x8F5B0823,0x989F,0x4E6F,{0xA4,0x86,0x8A,0xBF,0xD5,0x23,0xB2,0x2D}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaStreamTrack_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1716,
    1752,
    1344,
    1788,
    1416,
    1824,
    1860,
    1896,
    1932,
    1968,
    1200,
    1236,
    504,
    2004,
    2040,
    2076,
    2112,
    2148,
    2184,
    2220,
    2250,
    2286,
    2316
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaStreamTrack_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamTrack_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaStreamTrack_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamTrack_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(31) _IMediaStreamTrackProxyVtbl = 
{
    &IMediaStreamTrack_ProxyInfo,
    &IID_IMediaStreamTrack,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_kind */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_id */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_label */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_enabled */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::put_enabled */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_muted */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_onmute */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::put_onmute */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_onunmute */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::put_onunmute */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_readyState */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_onended */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::put_onended */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::getCapabilities */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::getConstraints */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::getSettings */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::applyConstraints */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_onoverconstrained */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::put_onoverconstrained */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::clone */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::stop */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::get_micLevel */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::micLevelMonitoringStart */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamTrack::micLevelMonitoringStop */
};


static const PRPC_STUB_FUNCTION IMediaStreamTrack_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaStreamTrackStubVtbl =
{
    &IID_IMediaStreamTrack,
    &IMediaStreamTrack_ServerInfo,
    31,
    &IMediaStreamTrack_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaTrackConstraints, ver. 0.0,
   GUID={0xCA8FD86D,0x739E,0x49E3,{0x81,0xDB,0x4D,0xE7,0x0F,0x63,0xB8,0x92}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaTrackConstraints_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaTrackConstraints_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaTrackConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaTrackConstraints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaTrackConstraints_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMediaTrackConstraintsProxyVtbl = 
{
    0,
    &IID_IMediaTrackConstraints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IMediaTrackConstraints_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMediaTrackConstraintsStubVtbl =
{
    &IID_IMediaTrackConstraints,
    &IMediaTrackConstraints_ServerInfo,
    7,
    &IMediaTrackConstraints_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaDeviceInfo, ver. 0.0,
   GUID={0xCAD81D85,0x1B8C,0x4E1D,{0xAD,0x79,0x0B,0x90,0xD0,0xFD,0x64,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaDeviceInfo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1716,
    1752,
    2346
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaDeviceInfo_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaDeviceInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaDeviceInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaDeviceInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IMediaDeviceInfoProxyVtbl = 
{
    &IMediaDeviceInfo_ProxyInfo,
    &IID_IMediaDeviceInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaDeviceInfo::get_deviceId */ ,
    (void *) (INT_PTR) -1 /* IMediaDeviceInfo::get_kind */ ,
    (void *) (INT_PTR) -1 /* IMediaDeviceInfo::get_label */ ,
    (void *) (INT_PTR) -1 /* IMediaDeviceInfo::get_groupId */
};


static const PRPC_STUB_FUNCTION IMediaDeviceInfo_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaDeviceInfoStubVtbl =
{
    &IID_IMediaDeviceInfo,
    &IMediaDeviceInfo_ServerInfo,
    11,
    &IMediaDeviceInfo_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCPeerConnection, ver. 0.0,
   GUID={0xB2B753B0,0x85A5,0x400F,{0xB4,0xF6,0x2E,0x04,0xE8,0xDF,0x3A,0xE7}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCPeerConnection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2382,
    828,
    2424,
    906,
    2466,
    2502,
    2538,
    1056,
    1896,
    1128,
    2580,
    2622,
    2658,
    2694,
    2730,
    2766,
    2802,
    648,
    2838,
    2868,
    2904,
    2940,
    2976,
    3012,
    3048,
    3084,
    3120,
    3156,
    3192,
    3228,
    3264,
    3300,
    3336,
    3372,
    3408,
    3444,
    3480,
    3516,
    3552,
    3588,
    3624,
    3672,
    3708,
    3744,
    3780,
    3816,
    3852,
    3912,
    3948,
    3990,
    4026,
    4062
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCPeerConnection_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCPeerConnection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCPeerConnection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCPeerConnection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(59) _IRTCPeerConnectionProxyVtbl = 
{
    &IRTCPeerConnection_ProxyInfo,
    &IID_IRTCPeerConnection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::createOffer */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::createAnswer */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::setLocalDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_localDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_currentLocalDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_pendingLocalDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::setRemoteDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_remoteDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_currentRemoteDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_pendingRemoteDescription */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::addIceCandidate */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_signalingState */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_iceGatheringState */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_iceConnectionState */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_connectionState */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_canTrickleIceCandidates */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getConfiguration */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::setConfiguration */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::close */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::addStream */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::removeStream */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onnegotiationneeded */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onnegotiationneeded */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onicecandidate */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onicecandidate */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onicecandidateerror */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onicecandidateerror */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onsignalingstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onsignalingstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_oniceconnectionstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_oniceconnectionstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onicegatheringstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onicegatheringstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onconnectionstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onconnectionstatechange */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onfingerprintfailure */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onfingerprintfailure */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_onaddstream */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_onaddstream */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_sctp */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::createDataChannel */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_ondatachannel */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_ondatachannel */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getSenders */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getReceivers */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getTransceivers */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::addTrack */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::removeTrack */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::addTransceiver */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::get_ontrack */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::put_ontrack */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getStats */
};


static const PRPC_STUB_FUNCTION IRTCPeerConnection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCPeerConnectionStubVtbl =
{
    &IID_IRTCPeerConnection,
    &IRTCPeerConnection_ServerInfo,
    59,
    &IRTCPeerConnection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCSessionDescription, ver. 0.0,
   GUID={0xC3F56FD7,0x937E,0x42A6,{0x8B,0x00,0x65,0xCB,0x29,0x7F,0xB8,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCSessionDescription_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    4104,
    1752,
    4140
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCSessionDescription_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCSessionDescription_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCSessionDescription_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCSessionDescription_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IRTCSessionDescriptionProxyVtbl = 
{
    &IRTCSessionDescription_ProxyInfo,
    &IID_IRTCSessionDescription,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCSessionDescription::get_type */ ,
    (void *) (INT_PTR) -1 /* IRTCSessionDescription::put_type */ ,
    (void *) (INT_PTR) -1 /* IRTCSessionDescription::get_sdp */ ,
    (void *) (INT_PTR) -1 /* IRTCSessionDescription::put_sdp */
};


static const PRPC_STUB_FUNCTION IRTCSessionDescription_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCSessionDescriptionStubVtbl =
{
    &IID_IRTCSessionDescription,
    &IRTCSessionDescription_ServerInfo,
    11,
    &IRTCSessionDescription_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCError, ver. 0.0,
   GUID={0x48ACEE72,0x5B42,0x463A,{0xA3,0x1D,0x34,0xAD,0x55,0xE6,0x1D,0xE1}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCError_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1716,
    1752,
    4176,
    4212,
    4248
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCError_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCError_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCError_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCError_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IRTCErrorProxyVtbl = 
{
    &IRTCError_ProxyInfo,
    &IID_IRTCError,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCError::get_name */ ,
    (void *) (INT_PTR) -1 /* IRTCError::get_message */ ,
    (void *) (INT_PTR) -1 /* IRTCError::get_errorDetail */ ,
    (void *) (INT_PTR) -1 /* IRTCError::get_sdpLineNumber */ ,
    (void *) (INT_PTR) -1 /* IRTCError::get_httpRequestStatusCode */ ,
    (void *) (INT_PTR) -1 /* IRTCError::toString */
};


static const PRPC_STUB_FUNCTION IRTCError_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCErrorStubVtbl =
{
    &IID_IRTCError,
    &IRTCError_ServerInfo,
    13,
    &IRTCError_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCIceCandidate, ver. 0.0,
   GUID={0x4814FA61,0x92BC,0x4EBD,{0x9C,0x1E,0xD9,0xB3,0xAD,0xB2,0x2E,0x5A}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCIceCandidate_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1716,
    72,
    2346,
    4212,
    4248,
    1452,
    4284,
    4320,
    4356,
    1560,
    2622,
    2658
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCIceCandidate_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCIceCandidate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCIceCandidate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCIceCandidate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(20) _IRTCIceCandidateProxyVtbl = 
{
    &IRTCIceCandidate_ProxyInfo,
    &IID_IRTCIceCandidate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_candidate */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_sdpMid */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_sdpMLineIndex */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_foundation */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_priority */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_protocol */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_port */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_type */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_tcpType */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_relatedAddress */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_relatedPort */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::get_ufrag */ ,
    (void *) (INT_PTR) -1 /* IRTCIceCandidate::toString */
};


static const PRPC_STUB_FUNCTION IRTCIceCandidate_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCIceCandidateStubVtbl =
{
    &IID_IRTCIceCandidate,
    &IRTCIceCandidate_ServerInfo,
    20,
    &IRTCIceCandidate_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCPeerConnectionIceEvent, ver. 0.0,
   GUID={0xCA821F0E,0x3D50,0x40B7,{0x86,0x84,0x60,0xFC,0x3D,0xAF,0xC2,0x62}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCPeerConnectionIceEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    1752
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCPeerConnectionIceEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCPeerConnectionIceEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCPeerConnectionIceEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCPeerConnectionIceEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IRTCPeerConnectionIceEventProxyVtbl = 
{
    &IRTCPeerConnectionIceEvent_ProxyInfo,
    &IID_IRTCPeerConnectionIceEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnectionIceEvent::get_type */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnectionIceEvent::get_candidate */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnectionIceEvent::get_url */
};


static const PRPC_STUB_FUNCTION IRTCPeerConnectionIceEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCPeerConnectionIceEventStubVtbl =
{
    &IID_IRTCPeerConnectionIceEvent,
    &IRTCPeerConnectionIceEvent_ServerInfo,
    10,
    &IRTCPeerConnectionIceEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMediaStreamEvent, ver. 0.0,
   GUID={0x5480960F,0x4930,0x4981,{0x86,0x61,0x01,0x80,0x94,0xDB,0x19,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short IMediaStreamEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792
    };

static const MIDL_STUBLESS_PROXY_INFO IMediaStreamEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMediaStreamEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMediaStreamEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IMediaStreamEventProxyVtbl = 
{
    &IMediaStreamEvent_ProxyInfo,
    &IID_IMediaStreamEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMediaStreamEvent::get_stream */
};


static const PRPC_STUB_FUNCTION IMediaStreamEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IMediaStreamEventStubVtbl =
{
    &IID_IMediaStreamEvent,
    &IMediaStreamEvent_ServerInfo,
    8,
    &IMediaStreamEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEmpty, ver. 0.0,
   GUID={0x528305BD,0xAF6E,0x4E7A,{0xAD,0x37,0x88,0xC1,0x36,0x3F,0x0A,0x70}} */

#pragma code_seg(".orpc")
static const unsigned short IEmpty_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEmpty_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IEmpty_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEmpty_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IEmpty_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IEmptyProxyVtbl = 
{
    0,
    &IID_IEmpty,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IEmpty_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IEmptyStubVtbl =
{
    &IID_IEmpty,
    &IEmpty_ServerInfo,
    7,
    &IEmpty_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCDataChannel, ver. 0.0,
   GUID={0x83C443DF,0x10BB,0x46DE,{0xB5,0xC6,0x56,0x73,0x51,0x2C,0x66,0x0F}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCDataChannel_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1308,
    870,
    906,
    4392,
    1416,
    1824,
    4284,
    4320,
    4428,
    4464,
    4500,
    2658,
    4536,
    2004,
    4572,
    2802,
    648,
    4608,
    2868,
    4644,
    4680,
    4716,
    4752,
    4788,
    4818,
    4854,
    4902
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCDataChannel_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDataChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCDataChannel_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDataChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(35) _IRTCDataChannelProxyVtbl = 
{
    &IRTCDataChannel_ProxyInfo,
    &IID_IRTCDataChannel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_label */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_ordered */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_maxPacketLifeTime */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_maxRetransmits */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_protocol */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_negotiated */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_id */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_priority */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_readyState */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_bufferedAmount */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_bufferedAmountLowThreshold */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_bufferedAmountLowThreshold */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_binaryType */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_binaryType */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_onopen */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_onopen */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_onerror */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_onerror */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_onclose */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_onclose */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_onmessage */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_onmessage */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::get_onbufferedamountlow */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::put_onbufferedamountlow */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::close */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::send */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::addEventListener */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannel::removeEventListener */
};


static const PRPC_STUB_FUNCTION IRTCDataChannel_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCDataChannelStubVtbl =
{
    &IID_IRTCDataChannel,
    &IRTCDataChannel_ServerInfo,
    35,
    &IRTCDataChannel_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCDataChannelEvent, ver. 0.0,
   GUID={0x08D4E0DC,0xA254,0x4FAE,{0x8B,0x72,0x1C,0xA4,0xF8,0x9E,0x58,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCDataChannelEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCDataChannelEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDataChannelEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCDataChannelEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDataChannelEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IRTCDataChannelEventProxyVtbl = 
{
    &IRTCDataChannelEvent_ProxyInfo,
    &IID_IRTCDataChannelEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCDataChannelEvent::get_channel */
};


static const PRPC_STUB_FUNCTION IRTCDataChannelEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCDataChannelEventStubVtbl =
{
    &IID_IRTCDataChannelEvent,
    &IRTCDataChannelEvent_ServerInfo,
    8,
    &IRTCDataChannelEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCWindow, ver. 0.0,
   GUID={0x624A33DF,0x99D1,0x49AF,{0xA4,0x76,0x63,0xDA,0x11,0x78,0x17,0xDB}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCWindow_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4950,
    1716
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCWindow_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IRTCWindowProxyVtbl = 
{
    &IRTCWindow_ProxyInfo,
    &IID_IRTCWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCWindow::get_id */ ,
    (void *) (INT_PTR) -1 /* IRTCWindow::get_title */
};


static const PRPC_STUB_FUNCTION IRTCWindow_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCWindowStubVtbl =
{
    &IID_IRTCWindow,
    &IRTCWindow_ServerInfo,
    9,
    &IRTCWindow_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCScreen, ver. 0.0,
   GUID={0x4E9C389F,0x59C1,0x4F67,{0x92,0xE3,0xC2,0x6C,0x05,0x92,0x7C,0xE2}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCScreen_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4950,
    1716
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCScreen_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCScreen_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCScreen_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCScreen_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IRTCScreenProxyVtbl = 
{
    &IRTCScreen_ProxyInfo,
    &IID_IRTCScreen,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCScreen::get_id */ ,
    (void *) (INT_PTR) -1 /* IRTCScreen::get_title */
};


static const PRPC_STUB_FUNCTION IRTCScreen_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCScreenStubVtbl =
{
    &IID_IRTCScreen,
    &IRTCScreen_ServerInfo,
    9,
    &IRTCScreen_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCDTMFSender, ver. 0.0,
   GUID={0xE393A0A1,0x58CD,0x4D33,{0x90,0xA6,0xE9,0x5B,0xEF,0x05,0x07,0x52}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCDTMFSender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4986,
    36,
    5034,
    2346
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCDTMFSender_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDTMFSender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCDTMFSender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDTMFSender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IRTCDTMFSenderProxyVtbl = 
{
    &IRTCDTMFSender_ProxyInfo,
    &IID_IRTCDTMFSender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCDTMFSender::insertDTMF */ ,
    (void *) (INT_PTR) -1 /* IRTCDTMFSender::get_ontonechange */ ,
    (void *) (INT_PTR) -1 /* IRTCDTMFSender::put_ontonechange */ ,
    (void *) (INT_PTR) -1 /* IRTCDTMFSender::get_toneBuffer */
};


static const PRPC_STUB_FUNCTION IRTCDTMFSender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCDTMFSenderStubVtbl =
{
    &IID_IRTCDTMFSender,
    &IRTCDTMFSender_ServerInfo,
    11,
    &IRTCDTMFSender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCTrackEvent, ver. 0.0,
   GUID={0xBADBBC8D,0xE670,0x453A,{0xA1,0xD1,0xB4,0x10,0xF7,0xE7,0x47,0x37}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCTrackEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCTrackEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCTrackEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCTrackEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCTrackEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IRTCTrackEventProxyVtbl = 
{
    0,
    &IID_IRTCTrackEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IRTCTrackEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IRTCTrackEventStubVtbl =
{
    &IID_IRTCTrackEvent,
    &IRTCTrackEvent_ServerInfo,
    7,
    &IRTCTrackEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCRtpSender, ver. 0.0,
   GUID={0xC0ECD6D4,0x39AF,0x4D4F,{0x88,0x44,0x59,0xBC,0x8E,0x56,0xBC,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCRtpSender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792,
    36,
    870,
    5070,
    2466,
    5112,
    1824
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCRtpSender_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCRtpSender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCRtpSender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCRtpSender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IRTCRtpSenderProxyVtbl = 
{
    &IRTCRtpSender_ProxyInfo,
    &IID_IRTCRtpSender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::get_track */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::get_transport */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::get_rtcpTransport */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::setParameters */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::getParameters */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::replaceTrack */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpSender::get_dtmf */
};


static const PRPC_STUB_FUNCTION IRTCRtpSender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCRtpSenderStubVtbl =
{
    &IID_IRTCRtpSender,
    &IRTCRtpSender_ServerInfo,
    14,
    &IRTCRtpSender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCDTMFToneChangeEvent, ver. 0.0,
   GUID={0xC2E33966,0x8DAC,0x4A24,{0x92,0x8E,0xFF,0x90,0x29,0x02,0x7D,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCDTMFToneChangeEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCDTMFToneChangeEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDTMFToneChangeEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCDTMFToneChangeEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCDTMFToneChangeEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IRTCDTMFToneChangeEventProxyVtbl = 
{
    &IRTCDTMFToneChangeEvent_ProxyInfo,
    &IID_IRTCDTMFToneChangeEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCDTMFToneChangeEvent::get_tone */
};


static const PRPC_STUB_FUNCTION IRTCDTMFToneChangeEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCDTMFToneChangeEventStubVtbl =
{
    &IID_IRTCDTMFToneChangeEvent,
    &IRTCDTMFToneChangeEvent_ServerInfo,
    8,
    &IRTCDTMFToneChangeEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCStats, ver. 0.0,
   GUID={0x0F0B140A,0x1904,0x44A5,{0x9F,0xFC,0xD4,0x4B,0x42,0xB3,0x67,0xC3}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCStats_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5154,
    1716,
    1752
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCStats_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCStats_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCStats_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCStats_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IRTCStatsProxyVtbl = 
{
    &IRTCStats_ProxyInfo,
    &IID_IRTCStats,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCStats::get_timestamp */ ,
    (void *) (INT_PTR) -1 /* IRTCStats::get_type */ ,
    (void *) (INT_PTR) -1 /* IRTCStats::get_id */
};


static const PRPC_STUB_FUNCTION IRTCStats_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCStatsStubVtbl =
{
    &IID_IRTCStats,
    &IRTCStats_ServerInfo,
    10,
    &IRTCStats_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCStatsReport, ver. 0.0,
   GUID={0xD19FE2EC,0x49D5,0x4A2D,{0x8F,0xE7,0xA8,0xD5,0xE4,0x59,0x34,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCStatsReport_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792,
    5190,
    2424,
    5232,
    2466,
    2502,
    5274
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCStatsReport_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCStatsReport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCStatsReport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCStatsReport_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IRTCStatsReportProxyVtbl = 
{
    &IRTCStatsReport_ProxyInfo,
    &IID_IRTCStatsReport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::entries */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::forEach */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::get */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::has */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::keys */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::values */ ,
    (void *) (INT_PTR) -1 /* IRTCStatsReport::get_size */
};


static const PRPC_STUB_FUNCTION IRTCStatsReport_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCStatsReportStubVtbl =
{
    &IID_IRTCStatsReport,
    &IRTCStatsReport_ServerInfo,
    14,
    &IRTCStatsReport_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRTCRtpReceiver, ver. 0.0,
   GUID={0xB9022511,0x3E81,0x4389,{0x9B,0xB0,0x66,0x7F,0xEA,0x36,0xB4,0x0C}} */

#pragma code_seg(".orpc")
static const unsigned short IRTCRtpReceiver_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792,
    36,
    870,
    906,
    2466
    };

static const MIDL_STUBLESS_PROXY_INFO IRTCRtpReceiver_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCRtpReceiver_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRTCRtpReceiver_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IRTCRtpReceiver_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IRTCRtpReceiverProxyVtbl = 
{
    &IRTCRtpReceiver_ProxyInfo,
    &IID_IRTCRtpReceiver,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpReceiver::get_track */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpReceiver::get_transport */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpReceiver::get_rtcpTransport */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpReceiver::getParameters */ ,
    (void *) (INT_PTR) -1 /* IRTCRtpReceiver::getContributingSources */
};


static const PRPC_STUB_FUNCTION IRTCRtpReceiver_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRTCRtpReceiverStubVtbl =
{
    &IID_IRTCRtpReceiver,
    &IRTCRtpReceiver_ServerInfo,
    12,
    &IRTCRtpReceiver_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMessageEvent, ver. 0.0,
   GUID={0x1DE917D5,0x1BE6,0x4D0C,{0xAE,0x95,0xA3,0x5C,0x3E,0x03,0xA2,0xC8}} */

#pragma code_seg(".orpc")
static const unsigned short IMessageEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    792,
    1716,
    1752
    };

static const MIDL_STUBLESS_PROXY_INFO IMessageEvent_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IMessageEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMessageEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IMessageEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IMessageEventProxyVtbl = 
{
    &IMessageEvent_ProxyInfo,
    &IID_IMessageEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMessageEvent::get_data */ ,
    (void *) (INT_PTR) -1 /* IMessageEvent::get_origin */ ,
    (void *) (INT_PTR) -1 /* IMessageEvent::get_lastEventId */
};


static const PRPC_STUB_FUNCTION IMessageEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMessageEventStubVtbl =
{
    &IID_IMessageEvent,
    &IMessageEvent_ServerInfo,
    10,
    &IMessageEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    rtc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _rtc_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IRTCStatsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCPeerConnectionIceEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaStreamEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCRtpReceiverProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPluginProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaStreamTrackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPromiseProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCIceCandidateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCDTMFToneChangeEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaTrackConstraintsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCErrorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaDeviceInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IErrorMessageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCTrackEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaStreamDoubangoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCScreenProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCDTMFSenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCPeerConnectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEmptyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaDevicesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCRtpSenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMessageEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCSessionDescriptionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCDataChannelEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCDataChannelProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRTCStatsReportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMediaTrackSupportedConstraintsProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _rtc_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IRTCStatsStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCPeerConnectionIceEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaStreamEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCRtpReceiverStubVtbl,
    ( CInterfaceStubVtbl *) &_IPluginStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaStreamTrackStubVtbl,
    ( CInterfaceStubVtbl *) &_IPromiseStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCIceCandidateStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCDTMFToneChangeEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaTrackConstraintsStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCErrorStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaDeviceInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IErrorMessageStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCTrackEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaStreamDoubangoStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCScreenStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCDTMFSenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCPeerConnectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IEmptyStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaDevicesStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCRtpSenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IMessageEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCSessionDescriptionStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCDataChannelEventStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCDataChannelStubVtbl,
    ( CInterfaceStubVtbl *) &_IRTCStatsReportStubVtbl,
    ( CInterfaceStubVtbl *) &_IMediaTrackSupportedConstraintsStubVtbl,
    0
};

PCInterfaceName const _rtc_InterfaceNamesList[] = 
{
    "IRTCStats",
    "IRTCPeerConnectionIceEvent",
    "IMediaStreamEvent",
    "IRTCRtpReceiver",
    "IPlugin",
    "IMediaStreamTrack",
    "IPromise",
    "IRTCIceCandidate",
    "IRTCDTMFToneChangeEvent",
    "IMediaTrackConstraints",
    "IRTCError",
    "IMediaDeviceInfo",
    "IErrorMessage",
    "IRTCTrackEvent",
    "IMediaStreamDoubango",
    "IRTCScreen",
    "IRTCDTMFSender",
    "IRTCPeerConnection",
    "IEmpty",
    "IMediaDevices",
    "IRTCRtpSender",
    "IMessageEvent",
    "IRTCSessionDescription",
    "IRTCDataChannelEvent",
    "IRTCWindow",
    "IRTCDataChannel",
    "IRTCStatsReport",
    "IMediaTrackSupportedConstraints",
    0
};

const IID *  const _rtc_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _rtc_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _rtc, pIID, n)

int __stdcall _rtc_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _rtc, 28, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _rtc, 28, *pIndex )
    
}

const ExtendedProxyFileInfo rtc_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _rtc_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _rtc_StubVtblList,
    (const PCInterfaceName * ) & _rtc_InterfaceNamesList,
    (const IID ** ) & _rtc_BaseIIDList,
    & _rtc_IID_Lookup, 
    28,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

