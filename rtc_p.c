

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jun 22 18:53:55 2017
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

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

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

#define TYPE_FORMAT_STRING_SIZE   1059                              
#define PROC_FORMAT_STRING_SIZE   5991                              
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


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IJsArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJsArray_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

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

/* 26 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

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

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_transport */


	/* Procedure get_transport */


	/* Procedure get_ontonechange */


	/* Procedure get_candidate */


	/* Procedure getAudioTracks */


	/* Procedure get_mediaDevices */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDtlsTransport */


	/* Parameter varRTCDtlsTransport */


	/* Parameter varEventHandler */


	/* Parameter RTCIceCandidate */


	/* Parameter Tracks */


	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sdpMLineIndex */


	/* Procedure get_aspectRatio */


	/* Procedure get_isWebRtcPlugin */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x22 ),	/* 34 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDisplay */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDisplay */

/* 140 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createSessionDescription */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xb ),	/* 11 */
/* 160 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 166 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 168 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 182 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter ppSdp */

/* 184 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 188 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDictOptions */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0xc ),	/* 12 */
/* 204 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDictOptions */

/* 222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createPeerConnection */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0xd ),	/* 13 */
/* 242 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 250 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCConfiguration */

/* 260 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 264 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter MediaConstraints */

/* 266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 270 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter ppPeerConnection */

/* 272 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 280 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createIceCandidate */

/* 284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0xe ),	/* 14 */
/* 292 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 300 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 310 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 314 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter ppIceCandidate */

/* 316 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 320 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createMediaStreamTrack */

/* 328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0xf ),	/* 15 */
/* 336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 344 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMediaStreamTrack */

/* 354 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 358 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createMediaStream */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x10 ),	/* 16 */
/* 374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 382 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMediaStream */

/* 392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 396 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Return value */

/* 398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindEventListener */

/* 404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x11 ),	/* 17 */
/* 412 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 420 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 434 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter listenerCallback */

/* 436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 440 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter useCapture */

/* 442 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 446 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSources */

/* 454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x12 ),	/* 18 */
/* 462 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 470 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter successCallback */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 484 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getWindows */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x13 ),	/* 19 */
/* 500 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 508 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter winList */

/* 518 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 522 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCapabilities */


	/* Procedure get_oninactive */


	/* Procedure getScreens */

/* 530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x14 ),	/* 20 */
/* 538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 546 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackCapabilities */


	/* Parameter pVal */


	/* Parameter screenList */

/* 556 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 560 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_oninactive */


	/* Procedure put_src */

/* 568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x15 ),	/* 21 */
/* 576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 582 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 584 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 598 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_videoWidth */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x16 ),	/* 22 */
/* 614 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_videoHeight */

/* 644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x17 ),	/* 23 */
/* 652 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x24 ),	/* 36 */
/* 658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 660 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 672 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 678 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onerror */


	/* Procedure setConfiguration */


	/* Procedure fillImageData */

/* 682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x18 ),	/* 24 */
/* 690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 696 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 698 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter RTCConfiguration */


	/* Parameter imageData */

/* 708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 712 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getScreenShot */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x19 ),	/* 25 */
/* 728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 734 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base64BitmapData */

/* 746 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 750 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_logSeverity */

/* 758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x1a ),	/* 26 */
/* 766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 774 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 784 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 788 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_logSeverity */

/* 796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x1b ),	/* 27 */
/* 804 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 810 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 812 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 822 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_data */


	/* Procedure get_track */


	/* Procedure entries */


	/* Procedure get_track */


	/* Procedure get_channel */


	/* Procedure get_stream */


	/* Procedure getSupportedConstraints */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x7 ),	/* 7 */
/* 842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varAny */


	/* Parameter varMediaStreamTrack */


	/* Parameter varIterator */


	/* Parameter varMediaStreamTrack */


	/* Parameter varRTCDataChannel */


	/* Parameter MediaStream */


	/* Parameter pConstraints */

/* 860 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createAnswer */


	/* Procedure catchh */


	/* Procedure getUserMedia */

/* 872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 888 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCAnswerOptions */


	/* Parameter onRejected */


	/* Parameter constraints */

/* 898 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 902 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseRTCSessionDescriptionInit */


	/* Parameter pThePromise */


	/* Parameter pPromiseMediaStream */

/* 904 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 908 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rtcpTransport */


	/* Procedure get_rtcpTransport */


	/* Procedure get_maxPacketLifeTime */


	/* Procedure getVideoTracks */


	/* Procedure enumerateDevices */

/* 916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x9 ),	/* 9 */
/* 924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 932 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDtlsTransport */


	/* Parameter varRTCDtlsTransport */


	/* Parameter pVal */


	/* Parameter Tracks */


	/* Parameter pPromiseSequenceMediaDeviceInfo */

/* 942 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 946 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUserMediaPromiseHook */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0xa ),	/* 10 */
/* 962 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 970 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter constraints */

/* 980 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 984 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 986 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 990 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 992 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 994 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 996 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1000 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure enumerateDevicesPromiseHook */

/* 1004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0xb ),	/* 11 */
/* 1012 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1020 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter successCallback */

/* 1030 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1034 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 1036 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1040 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParameters */


	/* Procedure get_maxRetransmits */


	/* Procedure get_localDescription */


	/* Procedure getTracks */

/* 1048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0xa ),	/* 10 */
/* 1056 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1062 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1064 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */


	/* Parameter pVal */


	/* Parameter RTCSessionDescription */


	/* Parameter Tracks */

/* 1074 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1078 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTrackById */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0xb ),	/* 11 */
/* 1094 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1100 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1102 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter trackId */

/* 1112 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1116 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter MediaStreamTrack */

/* 1118 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1122 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 1124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 1130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0xc ),	/* 12 */
/* 1138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1144 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1146 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1160 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1164 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 1168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0xd ),	/* 13 */
/* 1176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1182 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1184 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1198 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_remoteDescription */


	/* Procedure clone */

/* 1206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0xe ),	/* 14 */
/* 1214 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1222 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter MediaStream */

/* 1232 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1236 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_echoCancellation */


	/* Procedure get_active */

/* 1244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0xf ),	/* 15 */
/* 1252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1260 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1270 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1274 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1278 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_pendingRemoteDescription */


	/* Procedure get_onaddtrack */

/* 1282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1298 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 1308 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1312 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddtrack */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1328 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1336 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1346 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1350 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onended */


	/* Procedure get_onremovetrack */

/* 1358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1374 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1384 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1388 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onended */


	/* Procedure put_onremovetrack */

/* 1396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1412 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1422 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1426 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_width */

/* 1434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1450 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1464 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ordered */


	/* Procedure get_height */

/* 1472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1480 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1488 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1500 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1502 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_enabled */


	/* Procedure get_frameRate */

/* 1510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0xa ),	/* 10 */
/* 1518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1526 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1538 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1540 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_facingMode */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0xb ),	/* 11 */
/* 1556 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1562 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1564 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1578 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_negotiated */


	/* Procedure get_muted */


	/* Procedure get_volume */

/* 1586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0xc ),	/* 12 */
/* 1594 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1602 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1614 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1616 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1620 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_port */


	/* Procedure get_sampleRate */

/* 1624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0xd ),	/* 13 */
/* 1632 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1640 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1654 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sampleSize */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0xe ),	/* 14 */
/* 1670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1678 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1690 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1692 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1696 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_latency */

/* 1700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1714 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1716 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1730 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedPort */


	/* Procedure get_channelCount */

/* 1738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1746 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1754 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1764 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1768 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_deviceId */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1784 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1792 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1802 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1804 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1806 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1810 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupId */

/* 1814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1828 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1830 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1844 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1848 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure then */

/* 1852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1860 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1868 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 1870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter onFulfilled */

/* 1878 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1880 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1882 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter onRejected */

/* 1884 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1886 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1888 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pThePromise */

/* 1890 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1892 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1894 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1898 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_lastEventId */


	/* Procedure get_id */


	/* Procedure get_url */


	/* Procedure get_errorDetail */


	/* Procedure get_sdp */


	/* Procedure get_label */


	/* Procedure get_label */


	/* Procedure toString */

/* 1902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1916 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1918 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter String */

/* 1928 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1932 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_origin */


	/* Procedure get_type */


	/* Procedure get_title */


	/* Procedure get_title */


	/* Procedure get_sdpMid */


	/* Procedure get_message */


	/* Procedure get_kind */


	/* Procedure get_id */

/* 1940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1954 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1956 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1966 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1970 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_enabled */

/* 1978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0xb ),	/* 11 */
/* 1986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2008 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dtmf */


	/* Procedure get_id */


	/* Procedure get_onmute */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0xd ),	/* 13 */
/* 2024 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2032 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDTMFSender */


	/* Parameter pVal */


	/* Parameter pVal */

/* 2042 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2044 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2046 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmute */

/* 2054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0xe ),	/* 14 */
/* 2062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2070 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2080 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2084 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentRemoteDescription */


	/* Procedure get_onunmute */

/* 2092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0xf ),	/* 15 */
/* 2100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2108 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 2118 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2122 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onunmute */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2160 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2164 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */

/* 2168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2184 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2194 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2198 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onopen */


	/* Procedure getConstraints */

/* 2206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2214 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2222 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaTrackConstraints */

/* 2232 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2236 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSettings */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2258 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2260 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackSettings */

/* 2270 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2274 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2278 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure applyConstraints */

/* 2282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2298 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackConstraints */

/* 2308 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2312 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onoverconstrained */

/* 2320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2328 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2336 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2346 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2350 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onoverconstrained */

/* 2358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2372 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2374 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2388 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clone */

/* 2396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2412 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 2422 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2426 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 2434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2450 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_micLevel */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2480 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStart */

/* 2504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2520 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStop */

/* 2536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2544 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2552 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toneBuffer */


	/* Procedure get_foundation */


	/* Procedure get_groupId */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0xa ),	/* 10 */
/* 2576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2584 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrBuffer */


	/* Parameter pVal */


	/* Parameter pVal */

/* 2594 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2598 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createOffer */

/* 2606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2614 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2620 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2622 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCOfferOptions */

/* 2632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2636 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseRTCSessionDescriptionInit */

/* 2638 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2642 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2646 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get */


	/* Procedure setLocalDescription */

/* 2650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2658 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2664 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2666 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */


	/* Parameter RTCSessionDescriptionInit */

/* 2676 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2680 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varEntry */


	/* Parameter pPromiseVoid */

/* 2682 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2686 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getContributingSources */


	/* Procedure keys */


	/* Procedure getParameters */


	/* Procedure get_currentLocalDescription */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0xb ),	/* 11 */
/* 2702 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2710 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpContributingSource */


	/* Parameter varIterator */


	/* Parameter varRTCRtpParameters */


	/* Parameter RTCSessionDescription */

/* 2720 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2722 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2724 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2728 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure values */


	/* Procedure get_pendingLocalDescription */

/* 2732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0xc ),	/* 12 */
/* 2740 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2746 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2748 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varIterator */


	/* Parameter RTCSessionDescription */

/* 2758 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2762 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRemoteDescription */

/* 2770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0xd ),	/* 13 */
/* 2778 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2784 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2786 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 2796 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2800 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseVoid */

/* 2802 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2804 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2806 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addIceCandidate */

/* 2814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2828 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2830 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 2840 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2844 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseVoid */

/* 2846 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2848 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2850 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2854 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ufrag */


	/* Procedure get_signalingState */

/* 2858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2872 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2874 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter RTCSignalingState */

/* 2884 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2888 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_binaryType */


	/* Procedure toString */


	/* Procedure get_iceGatheringState */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2912 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter String */


	/* Parameter RTCIceGatheringState */

/* 2922 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2926 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_iceConnectionState */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2948 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2950 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceConnectionState */

/* 2960 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2962 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2964 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2968 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_connectionState */

/* 2972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2986 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2988 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPeerConnectionState */

/* 2998 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3002 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 3004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_canTrickleIceCandidates */

/* 3010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3024 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3026 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter BooleanVal */

/* 3036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3038 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3040 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onerror */


	/* Procedure getConfiguration */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3056 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3062 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3064 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter RTCConfiguration */

/* 3074 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3078 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 3080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3082 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 3086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3102 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onclose */


	/* Procedure addStream */

/* 3118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3134 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaStream */

/* 3144 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3148 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */

/* 3150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeStream */

/* 3156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3172 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStream */

/* 3182 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3186 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onnegotiationneeded */

/* 3194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3210 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3220 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3224 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onnegotiationneeded */

/* 3232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3248 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3258 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3262 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidate */

/* 3270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3286 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3296 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3300 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidate */

/* 3308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3316 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3324 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3334 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3338 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidateerror */

/* 3346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3354 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3362 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3372 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3376 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidateerror */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3400 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3410 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3412 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3414 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onsignalingstatechange */

/* 3422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3436 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3438 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3448 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3450 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3452 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3456 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onsignalingstatechange */

/* 3460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3476 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3486 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3490 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oniceconnectionstatechange */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3514 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3524 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3528 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_oniceconnectionstatechange */

/* 3536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3550 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3552 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3562 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3566 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3570 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicegatheringstatechange */

/* 3574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3582 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3590 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3600 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3604 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3608 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicegatheringstatechange */

/* 3612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3626 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3628 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3642 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onconnectionstatechange */

/* 3650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3658 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3664 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3666 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3676 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3680 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onconnectionstatechange */

/* 3688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3696 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3704 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3718 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3722 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onfingerprintfailure */

/* 3726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3734 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3740 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3742 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3752 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3756 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onfingerprintfailure */

/* 3764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3780 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3794 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onaddstream */

/* 3802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3818 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3828 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3832 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddstream */

/* 3840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3848 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3856 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3868 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3870 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3874 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sctp */

/* 3878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3886 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3894 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCSctpTransport */

/* 3904 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3908 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDataChannel */

/* 3916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3924 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3930 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3932 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 3934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter label */

/* 3942 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3946 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter varDataChannelDict */

/* 3948 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3952 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCDataChannel */

/* 3954 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3956 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3958 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3962 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ondatachannel */

/* 3966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3972 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3974 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3980 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3982 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 3992 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3994 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3996 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4000 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ondatachannel */

/* 4004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x31 ),	/* 49 */
/* 4012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4020 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4030 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4034 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSenders */

/* 4042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x32 ),	/* 50 */
/* 4050 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4056 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4058 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpSender */

/* 4068 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4072 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getReceivers */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x33 ),	/* 51 */
/* 4088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpReceiver */

/* 4106 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4110 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTransceivers */

/* 4118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4134 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpTransceiver */

/* 4144 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4148 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 4156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4162 */	NdrFcShort( 0x35 ),	/* 53 */
/* 4164 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4170 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4172 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 4174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4182 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4186 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams0 */

/* 4188 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4192 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams1 */

/* 4194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4198 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams2 */

/* 4200 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4204 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCRtpSender */

/* 4206 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4208 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4210 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4214 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 4218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4226 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4234 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpSender */

/* 4244 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4248 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTransceiver */

/* 4256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4264 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4270 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4272 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrackorDOMStringTrackOrKind */

/* 4282 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4286 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCRtpTransceiverInit */

/* 4288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4290 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4292 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4296 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ontrack */

/* 4300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4308 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4316 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4326 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4330 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4334 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontrack */

/* 4338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4354 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4364 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4368 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getStats */

/* 4376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4382 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4384 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4390 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4392 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 4394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4406 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseRTCStatsReport */

/* 4408 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4412 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4416 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createOfferPromiseHook */

/* 4420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4428 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4436 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCOfferOptions */

/* 4446 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4448 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4450 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4452 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4454 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4456 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4458 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4460 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4462 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4466 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createAnswerPromiseHook */

/* 4470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4478 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4484 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4486 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCAnswerOptions */

/* 4496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4500 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4502 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4506 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4508 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4510 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4512 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4516 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalDescriptionPromiseHook */

/* 4520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x3d ),	/* 61 */
/* 4528 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4536 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 4546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4550 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4556 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4560 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4562 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4566 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRemoteDescriptionPromiseHook */

/* 4570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x3e ),	/* 62 */
/* 4578 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4586 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 4596 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4600 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4602 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4604 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4606 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4608 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4610 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4612 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4616 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addIceCandidatePromiseHook */

/* 4620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x3f ),	/* 63 */
/* 4628 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4636 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 4646 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4648 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4650 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4652 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4654 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4656 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4658 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4660 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4662 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4666 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getStatsPromiseHook */

/* 4670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4676 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4678 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4686 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4700 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter successCallback */

/* 4702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4704 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4706 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter errorCallback */

/* 4708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4710 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4712 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4716 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_type */

/* 4720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4736 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4750 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_sdp */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0xa ),	/* 10 */
/* 4766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4774 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4788 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 4790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sdpLineNumber */

/* 4796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0xa ),	/* 10 */
/* 4804 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4812 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_httpRequestStatusCode */

/* 4834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0xb ),	/* 11 */
/* 4842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4850 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */


	/* Procedure toString */

/* 4872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0xc ),	/* 12 */
/* 4880 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4888 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter String */

/* 4898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4902 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_type */

/* 4910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0xe ),	/* 14 */
/* 4918 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4926 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPriorityType */


	/* Parameter pVal */

/* 4936 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4940 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */


	/* Procedure get_tcpType */

/* 4948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0xf ),	/* 15 */
/* 4956 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4964 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCDataChannelState */


	/* Parameter pVal */

/* 4974 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4978 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedAddress */

/* 4986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4994 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5000 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5002 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5012 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5016 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */

/* 5024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0xb ),	/* 11 */
/* 5032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5038 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5040 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter USVString */

/* 5050 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5054 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmount */

/* 5062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5078 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5092 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmountLowThreshold */

/* 5100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5108 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5116 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5130 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bufferedAmountLowThreshold */

/* 5138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5148 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 5164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5168 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_binaryType */

/* 5176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5182 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5192 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */

/* 5202 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5206 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 5208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onopen */

/* 5214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5230 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5240 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5244 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onclose */

/* 5252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5266 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5268 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5278 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5280 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5282 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onmessage */

/* 5290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5296 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5306 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5316 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5320 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmessage */

/* 5328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5334 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5342 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5344 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5354 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5358 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onbufferedamountlow */

/* 5366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5382 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5392 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5396 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onbufferedamountlow */

/* 5404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5420 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5430 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5434 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 5442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5448 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5458 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure send */

/* 5474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5480 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5482 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5490 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data */

/* 5500 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5504 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addEventListener */

/* 5512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5520 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5528 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5538 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5542 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter listenerCallback */

/* 5544 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5548 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter useCapture */

/* 5550 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5552 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5554 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5558 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeEventListener */

/* 5562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5570 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5576 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5578 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5592 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter listenerCallback */

/* 5594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5598 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter useCapture */

/* 5600 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5604 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_id */


	/* Procedure get_id */

/* 5612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5624 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5628 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5642 */	0xb8,		/* FC_INT3264 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertDTMF */

/* 5650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5656 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5658 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5664 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5666 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tones */

/* 5676 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5680 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter duration */

/* 5682 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5686 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter interToneGap */

/* 5688 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5692 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5696 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontonechange */

/* 5700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5716 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5730 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setParameters */

/* 5738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0xa ),	/* 10 */
/* 5746 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5754 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 5756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */

/* 5764 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5768 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseVoid */

/* 5770 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5774 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5778 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceTrack */

/* 5782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5788 */	NdrFcShort( 0xc ),	/* 12 */
/* 5790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5796 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5798 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 5800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 5808 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5812 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseVoid */

/* 5814 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5818 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_timestamp */

/* 5826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5834 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5840 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5842 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5856 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 5858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure forEach */

/* 5864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5872 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5880 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varCallback */

/* 5890 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5894 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varThisArg */

/* 5896 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5900 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure has */

/* 5908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5914 */	NdrFcShort( 0xa ),	/* 10 */
/* 5916 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5920 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5924 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */

/* 5934 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5938 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varBool */

/* 5940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5944 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_size */

/* 5952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0xd ),	/* 13 */
/* 5960 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5966 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5968 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5988 */	0x8,		/* FC_LONG */
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
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 44 */	NdrFcShort( 0x3b4 ),	/* Offset= 948 (992) */
/* 46 */	
			0x13, 0x0,	/* FC_OP */
/* 48 */	NdrFcShort( 0x39c ),	/* Offset= 924 (972) */
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
/* 152 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (898) */
/* 154 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 158 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (898) */
/* 160 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 164 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (902) */
/* 166 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 170 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (906) */
/* 172 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 176 */	NdrFcShort( 0x2de ),	/* Offset= 734 (910) */
/* 178 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 182 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (914) */
/* 184 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 188 */	NdrFcShort( 0x2da ),	/* Offset= 730 (918) */
/* 190 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 194 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (922) */
/* 196 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 200 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (906) */
/* 202 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 206 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (910) */
/* 208 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 212 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (926) */
/* 214 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 218 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (922) */
/* 220 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 224 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (930) */
/* 226 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 230 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (934) */
/* 232 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 236 */	NdrFcShort( 0x2be ),	/* Offset= 702 (938) */
/* 238 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 242 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (942) */
/* 244 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 248 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (946) */
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
/* 290 */	NdrFcShort( 0x298 ),	/* Offset= 664 (954) */
/* 292 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 296 */	NdrFcShort( 0x29c ),	/* Offset= 668 (964) */
/* 298 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 302 */	NdrFcShort( 0x29a ),	/* Offset= 666 (968) */
/* 304 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 308 */	NdrFcShort( 0x256 ),	/* Offset= 598 (906) */
/* 310 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 314 */	NdrFcShort( 0x254 ),	/* Offset= 596 (910) */
/* 316 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 320 */	NdrFcShort( 0x252 ),	/* Offset= 594 (914) */
/* 322 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 326 */	NdrFcShort( 0x248 ),	/* Offset= 584 (910) */
/* 328 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 332 */	NdrFcShort( 0x242 ),	/* Offset= 578 (910) */
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
/* 396 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (880) */
/* 398 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 400 */	NdrFcShort( 0x20 ),	/* 32 */
/* 402 */	NdrFcShort( 0xa ),	/* 10 */
/* 404 */	NdrFcLong( 0x8 ),	/* 8 */
/* 408 */	NdrFcShort( 0x50 ),	/* Offset= 80 (488) */
/* 410 */	NdrFcLong( 0xd ),	/* 13 */
/* 414 */	NdrFcShort( 0x70 ),	/* Offset= 112 (526) */
/* 416 */	NdrFcLong( 0x9 ),	/* 9 */
/* 420 */	NdrFcShort( 0x90 ),	/* Offset= 144 (564) */
/* 422 */	NdrFcLong( 0xc ),	/* 12 */
/* 426 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (602) */
/* 428 */	NdrFcLong( 0x24 ),	/* 36 */
/* 432 */	NdrFcShort( 0x102 ),	/* Offset= 258 (690) */
/* 434 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 438 */	NdrFcShort( 0x11e ),	/* Offset= 286 (724) */
/* 440 */	NdrFcLong( 0x10 ),	/* 16 */
/* 444 */	NdrFcShort( 0x138 ),	/* Offset= 312 (756) */
/* 446 */	NdrFcLong( 0x2 ),	/* 2 */
/* 450 */	NdrFcShort( 0x14e ),	/* Offset= 334 (784) */
/* 452 */	NdrFcLong( 0x3 ),	/* 3 */
/* 456 */	NdrFcShort( 0x164 ),	/* Offset= 356 (812) */
/* 458 */	NdrFcLong( 0x14 ),	/* 20 */
/* 462 */	NdrFcShort( 0x17a ),	/* Offset= 378 (840) */
/* 464 */	NdrFcShort( 0xffff ),	/* Offset= -1 (463) */
/* 466 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 476 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 480 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 482 */	
			0x13, 0x0,	/* FC_OP */
/* 484 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (22) */
/* 486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 488 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 490 */	NdrFcShort( 0x10 ),	/* 16 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x6 ),	/* Offset= 6 (500) */
/* 496 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 498 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 500 */	
			0x11, 0x0,	/* FC_RP */
/* 502 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (466) */
/* 504 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 514 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 518 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 520 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 522 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (354) */
/* 524 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 526 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x10 ),	/* 16 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x6 ),	/* Offset= 6 (538) */
/* 534 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 536 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 538 */	
			0x11, 0x0,	/* FC_RP */
/* 540 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (504) */
/* 542 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 552 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 556 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 558 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 560 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (372) */
/* 562 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 564 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 566 */	NdrFcShort( 0x10 ),	/* 16 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x6 ),	/* Offset= 6 (576) */
/* 572 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 574 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 576 */	
			0x11, 0x0,	/* FC_RP */
/* 578 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (542) */
/* 580 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 590 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 594 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 596 */	
			0x13, 0x0,	/* FC_OP */
/* 598 */	NdrFcShort( 0x176 ),	/* Offset= 374 (972) */
/* 600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 602 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x10 ),	/* 16 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x6 ),	/* Offset= 6 (614) */
/* 610 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 612 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 614 */	
			0x11, 0x0,	/* FC_RP */
/* 616 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (580) */
/* 618 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 620 */	NdrFcLong( 0x2f ),	/* 47 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 632 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 634 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 636 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 640 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 642 */	NdrFcShort( 0x4 ),	/* 4 */
/* 644 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 646 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 648 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x18 ),	/* 24 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xa ),	/* Offset= 10 (664) */
/* 656 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 658 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (618) */
/* 662 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 664 */	
			0x13, 0x0,	/* FC_OP */
/* 666 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (636) */
/* 668 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 678 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 682 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 684 */	
			0x13, 0x0,	/* FC_OP */
/* 686 */	NdrFcShort( 0xffda ),	/* Offset= -38 (648) */
/* 688 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 690 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x10 ),	/* 16 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x6 ),	/* Offset= 6 (702) */
/* 698 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 700 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 702 */	
			0x11, 0x0,	/* FC_RP */
/* 704 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (668) */
/* 706 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 712 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 714 */	NdrFcShort( 0x10 ),	/* 16 */
/* 716 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 718 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 720 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (706) */
			0x5b,		/* FC_END */
/* 724 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x20 ),	/* 32 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xa ),	/* Offset= 10 (740) */
/* 732 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 734 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 736 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (712) */
			0x5b,		/* FC_END */
/* 740 */	
			0x11, 0x0,	/* FC_RP */
/* 742 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (504) */
/* 744 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 754 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 756 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x6 ),	/* Offset= 6 (768) */
/* 764 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 766 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 768 */	
			0x13, 0x0,	/* FC_OP */
/* 770 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (744) */
/* 772 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 774 */	NdrFcShort( 0x2 ),	/* 2 */
/* 776 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x10 ),	/* 16 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x6 ),	/* Offset= 6 (796) */
/* 792 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 794 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 796 */	
			0x13, 0x0,	/* FC_OP */
/* 798 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (772) */
/* 800 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 812 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x6 ),	/* Offset= 6 (824) */
/* 820 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 822 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 824 */	
			0x13, 0x0,	/* FC_OP */
/* 826 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (800) */
/* 828 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 838 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 840 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x6 ),	/* Offset= 6 (852) */
/* 848 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 850 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 852 */	
			0x13, 0x0,	/* FC_OP */
/* 854 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (828) */
/* 856 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 862 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 864 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 868 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 870 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 872 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0xffec ),	/* Offset= -20 (856) */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x38 ),	/* 56 */
/* 884 */	NdrFcShort( 0xffec ),	/* Offset= -20 (864) */
/* 886 */	NdrFcShort( 0x0 ),	/* Offset= 0 (886) */
/* 888 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 890 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 892 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 894 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (398) */
			0x5b,		/* FC_END */
/* 898 */	
			0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (648) */
/* 902 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 904 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 908 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 912 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 916 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 920 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 924 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 926 */	
			0x13, 0x0,	/* FC_OP */
/* 928 */	NdrFcShort( 0xfdbc ),	/* Offset= -580 (348) */
/* 930 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 932 */	NdrFcShort( 0xfc62 ),	/* Offset= -926 (6) */
/* 934 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 936 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (354) */
/* 938 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 940 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (372) */
/* 942 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 944 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (390) */
/* 946 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 948 */	NdrFcShort( 0x2 ),	/* Offset= 2 (950) */
/* 950 */	
			0x13, 0x0,	/* FC_OP */
/* 952 */	NdrFcShort( 0x14 ),	/* Offset= 20 (972) */
/* 954 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 958 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 960 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 962 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 964 */	
			0x13, 0x0,	/* FC_OP */
/* 966 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (954) */
/* 968 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 970 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 972 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 974 */	NdrFcShort( 0x20 ),	/* 32 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* Offset= 0 (978) */
/* 980 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 982 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 984 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 986 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 988 */	NdrFcShort( 0xfc56 ),	/* Offset= -938 (50) */
/* 990 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 992 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 996 */	NdrFcShort( 0x18 ),	/* 24 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0xfc46 ),	/* Offset= -954 (46) */
/* 1002 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1004 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1006 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1008 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (372) */
/* 1010 */	
			0x11, 0x0,	/* FC_RP */
/* 1012 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1018) */
/* 1014 */	
			0x12, 0x0,	/* FC_UP */
/* 1016 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (972) */
/* 1018 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1022 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1014) */
/* 1028 */	
			0x12, 0x0,	/* FC_UP */
/* 1030 */	NdrFcShort( 0xfc10 ),	/* Offset= -1008 (22) */
/* 1032 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1028) */
/* 1042 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1044 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1046 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1048 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1052 */	0xb8,		/* FC_INT3264 */
			0x5c,		/* FC_PAD */
/* 1054 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1056 */	0xc,		/* FC_DOUBLE */
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
    38,
    76,
    114,
    152,
    196,
    234,
    284,
    328,
    366,
    404,
    454,
    492,
    530,
    568,
    606,
    644,
    682,
    720,
    758,
    796
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
    834,
    872,
    916,
    954,
    1004
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
CINTERFACE_PROXY_VTABLE(12) _IMediaDevicesProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* IMediaDevices::enumerateDevices */ ,
    (void *) (INT_PTR) -1 /* IMediaDevices::getUserMediaPromiseHook */ ,
    (void *) (INT_PTR) -1 /* IMediaDevices::enumerateDevicesPromiseHook */
};


static const PRPC_STUB_FUNCTION IMediaDevices_table[] =
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

CInterfaceStubVtbl _IMediaDevicesStubVtbl =
{
    &IID_IMediaDevices,
    &IMediaDevices_ServerInfo,
    12,
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
    38,
    916,
    1048,
    1086,
    1130,
    1168,
    1206,
    1244,
    1282,
    1320,
    1358,
    1396,
    530,
    568
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
    1434,
    1472,
    76,
    1510,
    1548,
    1586,
    1624,
    1662,
    1244,
    1700,
    1738,
    1776,
    1814
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
    1852,
    872,
    1902
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
CINTERFACE_PROXY_VTABLE(10) _IPromiseProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* IPromise::catchh */ ,
    (void *) (INT_PTR) -1 /* IPromise::toString */
};


static const PRPC_STUB_FUNCTION IPromise_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPromiseStubVtbl =
{
    &IID_IPromise,
    &IPromise_ServerInfo,
    10,
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
    1940,
    1902,
    1510,
    1978,
    1586,
    2016,
    2054,
    2092,
    2130,
    2168,
    1358,
    1396,
    530,
    2206,
    2244,
    2282,
    2320,
    2358,
    2396,
    2434,
    2466,
    2504,
    2536
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
    1940,
    1902,
    2568
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
    2606,
    872,
    2650,
    1048,
    2694,
    2732,
    2770,
    1206,
    2092,
    1282,
    2814,
    2858,
    2896,
    2934,
    2972,
    3010,
    3048,
    682,
    3086,
    3118,
    3156,
    3194,
    3232,
    3270,
    3308,
    3346,
    3384,
    3422,
    3460,
    3498,
    3536,
    3574,
    3612,
    3650,
    3688,
    3726,
    3764,
    3802,
    3840,
    3878,
    3916,
    3966,
    4004,
    4042,
    4080,
    4118,
    4156,
    4218,
    4256,
    4300,
    4338,
    4376,
    4420,
    4470,
    4520,
    4570,
    4620,
    4670
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
CINTERFACE_PROXY_VTABLE(65) _IRTCPeerConnectionProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getStats */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::createOfferPromiseHook */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::createAnswerPromiseHook */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::setLocalDescriptionPromiseHook */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::setRemoteDescriptionPromiseHook */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::addIceCandidatePromiseHook */ ,
    (void *) (INT_PTR) -1 /* IRTCPeerConnection::getStatsPromiseHook */
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
    65,
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
    4720,
    1902,
    4758
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
    1940,
    1902,
    4796,
    4834,
    4872
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
    1940,
    76,
    2568,
    4834,
    4872,
    1624,
    4910,
    4948,
    4986,
    1738,
    2858,
    2896
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
    38,
    1902
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
    834
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
    1472,
    916,
    1048,
    5024,
    1586,
    2016,
    4910,
    4948,
    5062,
    5100,
    5138,
    2896,
    5176,
    2206,
    5214,
    3048,
    682,
    5252,
    3118,
    5290,
    5328,
    5366,
    5404,
    5442,
    5474,
    5512,
    5562
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
    834
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
    5612,
    1940
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
    5612,
    1940
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
    5650,
    38,
    5700,
    2568
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
    834,
    38,
    916,
    5738,
    2694,
    5782,
    2016
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
    5826,
    1940,
    1902
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
    834,
    5864,
    2650,
    5908,
    2694,
    2732,
    5952
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
    834,
    38,
    916,
    1048,
    2694
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
    834,
    1940,
    1902
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


/* Object interface: IJsArray, ver. 0.0,
   GUID={0x79DA6ABF,0xDD77,0x4C1D,{0x93,0xCE,0xE1,0x89,0x04,0xE5,0xD9,0xBD}} */

#pragma code_seg(".orpc")
static const unsigned short IJsArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IJsArray_ProxyInfo =
    {
    &Object_StubDesc,
    rtc__MIDL_ProcFormatString.Format,
    &IJsArray_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IJsArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    rtc__MIDL_ProcFormatString.Format,
    &IJsArray_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IJsArrayProxyVtbl = 
{
    0,
    &IID_IJsArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IJsArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IJsArrayStubVtbl =
{
    &IID_IJsArray,
    &IJsArray_ServerInfo,
    7,
    &IJsArray_table[-3],
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
    ( CInterfaceProxyVtbl *) &_IJsArrayProxyVtbl,
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
    ( CInterfaceStubVtbl *) &_IJsArrayStubVtbl,
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
    "IJsArray",
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
    &IID_IDispatch,
    0
};


#define _rtc_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _rtc, pIID, n)

int __stdcall _rtc_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _rtc, 29, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _rtc, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _rtc, 29, *pIndex )
    
}

const ExtendedProxyFileInfo rtc_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _rtc_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _rtc_StubVtblList,
    (const PCInterfaceName * ) & _rtc_InterfaceNamesList,
    (const IID ** ) & _rtc_BaseIIDList,
    & _rtc_IID_Lookup, 
    29,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

