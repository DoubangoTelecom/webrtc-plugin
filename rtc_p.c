

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 13 18:33:13 2017
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
#define PROC_FORMAT_STRING_SIZE   5597                              
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

	/* Procedure getParameters */


	/* Procedure get_maxRetransmits */


	/* Procedure get_localDescription */


	/* Procedure getTracks */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0xa ),	/* 10 */
/* 962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 970 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */


	/* Parameter pVal */


	/* Parameter RTCSessionDescription */


	/* Parameter Tracks */

/* 980 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 984 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTrackById */

/* 992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0xb ),	/* 11 */
/* 1000 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1008 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter trackId */

/* 1018 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1022 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter MediaStreamTrack */

/* 1024 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1028 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 1030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 1036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0xc ),	/* 12 */
/* 1044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1052 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1066 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0xd ),	/* 13 */
/* 1082 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1090 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 1100 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1104 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_remoteDescription */


	/* Procedure clone */

/* 1112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0xe ),	/* 14 */
/* 1120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1128 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter MediaStream */

/* 1138 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1142 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1146 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_echoCancellation */


	/* Procedure get_active */

/* 1150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0xf ),	/* 15 */
/* 1158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1166 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1180 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_pendingRemoteDescription */


	/* Procedure get_onaddtrack */

/* 1188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1202 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1204 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 1214 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1218 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddtrack */

/* 1226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1234 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1242 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1256 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onended */


	/* Procedure get_onremovetrack */

/* 1264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1280 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1290 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1292 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1294 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onended */


	/* Procedure put_onremovetrack */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1318 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1328 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1332 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */

/* 1334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_width */

/* 1340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1356 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1370 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1374 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ordered */


	/* Procedure get_height */

/* 1378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1394 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1408 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_enabled */


	/* Procedure get_frameRate */

/* 1416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0xa ),	/* 10 */
/* 1424 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1432 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1444 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1446 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_facingMode */

/* 1454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0xb ),	/* 11 */
/* 1462 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_negotiated */


	/* Procedure get_muted */


	/* Procedure get_volume */

/* 1492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0xc ),	/* 12 */
/* 1500 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1508 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1522 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_port */


	/* Procedure get_sampleRate */

/* 1530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0xd ),	/* 13 */
/* 1538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1546 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1560 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sampleSize */

/* 1568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0xe ),	/* 14 */
/* 1576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1598 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_latency */

/* 1606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1614 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1636 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedPort */


	/* Procedure get_channelCount */

/* 1644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1652 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1660 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1672 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1674 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1678 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_deviceId */

/* 1682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1696 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1698 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1712 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupId */

/* 1720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1736 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1750 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure then */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1766 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1774 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 1776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter onFulfilled */

/* 1784 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1788 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter onRejected */

/* 1790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1794 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pThePromise */

/* 1796 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1800 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 1802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1804 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_origin */


	/* Procedure get_type */


	/* Procedure get_title */


	/* Procedure get_title */


	/* Procedure get_sdpMid */


	/* Procedure get_message */


	/* Procedure get_kind */


	/* Procedure get_id */

/* 1808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1816 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1822 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1824 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1834 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1836 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1838 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1842 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_lastEventId */


	/* Procedure get_id */


	/* Procedure get_url */


	/* Procedure get_errorDetail */


	/* Procedure get_sdp */


	/* Procedure get_label */


	/* Procedure get_label */

/* 1846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1854 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1860 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1862 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1872 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1874 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1876 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_enabled */

/* 1884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0xb ),	/* 11 */
/* 1892 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1894 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1900 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1912 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1914 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1918 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dtmf */


	/* Procedure get_id */


	/* Procedure get_onmute */

/* 1922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0xd ),	/* 13 */
/* 1930 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1936 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1938 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCDTMFSender */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1948 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1950 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1952 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1956 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmute */

/* 1960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0xe ),	/* 14 */
/* 1968 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1974 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1976 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1986 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1988 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1990 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 1992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1994 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentRemoteDescription */


	/* Procedure get_onunmute */

/* 1998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0xf ),	/* 15 */
/* 2006 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2014 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescription */


	/* Parameter pVal */

/* 2024 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2026 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2028 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2032 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onunmute */

/* 2036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2052 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2066 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */

/* 2074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2082 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2088 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2090 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2100 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2104 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onopen */


	/* Procedure getConstraints */

/* 2112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2128 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaTrackConstraints */

/* 2138 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2142 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2146 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSettings */

/* 2150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2166 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackSettings */

/* 2176 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2180 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure applyConstraints */

/* 2188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2204 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaTrackConstraints */

/* 2214 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onoverconstrained */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2234 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2242 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2252 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2256 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onoverconstrained */

/* 2264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2280 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2290 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2292 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2294 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 2296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2298 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clone */

/* 2302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2318 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStreamTrack */

/* 2328 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2332 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2356 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_micLevel */

/* 2372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2380 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2388 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2400 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2406 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStart */

/* 2410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2426 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure micLevelMonitoringStop */

/* 2442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2458 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toneBuffer */


	/* Procedure get_foundation */


	/* Procedure get_groupId */

/* 2474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0xa ),	/* 10 */
/* 2482 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2488 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2490 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrBuffer */


	/* Parameter pVal */


	/* Parameter pVal */

/* 2500 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2504 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createOffer */

/* 2512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2520 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2526 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2528 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCOfferOptions */

/* 2538 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2542 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseRTCSessionDescriptionInit */

/* 2544 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2548 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2552 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get */


	/* Procedure setLocalDescription */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2564 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2572 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */


	/* Parameter RTCSessionDescriptionInit */

/* 2582 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2584 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2586 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varEntry */


	/* Parameter pPromiseVoid */

/* 2588 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2592 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getContributingSources */


	/* Procedure keys */


	/* Procedure getParameters */


	/* Procedure get_currentLocalDescription */

/* 2600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0xb ),	/* 11 */
/* 2608 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2616 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpContributingSource */


	/* Parameter varIterator */


	/* Parameter varRTCRtpParameters */


	/* Parameter RTCSessionDescription */

/* 2626 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2628 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2630 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2634 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure values */


	/* Procedure get_pendingLocalDescription */

/* 2638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0xc ),	/* 12 */
/* 2646 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2652 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2654 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varIterator */


	/* Parameter RTCSessionDescription */

/* 2664 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2666 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2668 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRemoteDescription */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0xd ),	/* 13 */
/* 2684 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2690 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2692 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCSessionDescriptionInit */

/* 2702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2706 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseVoid */

/* 2708 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2712 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addIceCandidate */

/* 2720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2728 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2734 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2736 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 2738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceCandidateInit */

/* 2746 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2750 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter pPromiseVoid */

/* 2752 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2756 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 2758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2760 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ufrag */


	/* Procedure get_signalingState */

/* 2764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2778 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2780 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter RTCSignalingState */

/* 2790 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2794 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 2796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_binaryType */


	/* Procedure toString */


	/* Procedure get_iceGatheringState */

/* 2802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2818 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */


	/* Parameter String */


	/* Parameter RTCIceGatheringState */

/* 2828 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2832 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_iceConnectionState */

/* 2840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2848 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2854 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2856 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCIceConnectionState */

/* 2866 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2868 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2870 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2874 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_connectionState */

/* 2878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2886 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2894 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPeerConnectionState */

/* 2904 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2908 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_canTrickleIceCandidates */

/* 2916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2932 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter BooleanVal */

/* 2942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2946 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onerror */


	/* Procedure getConfiguration */

/* 2954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2968 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2970 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter RTCConfiguration */

/* 2980 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2984 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */


	/* Return value */

/* 2986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 2992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3000 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3008 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onclose */


	/* Procedure addStream */

/* 3024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3040 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */


	/* Parameter MediaStream */

/* 3050 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3054 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */


	/* Return value */

/* 3056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeStream */

/* 3062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3078 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MediaStream */

/* 3088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3092 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onnegotiationneeded */

/* 3100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3108 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3114 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3116 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3126 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3130 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onnegotiationneeded */

/* 3138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3154 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3164 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3168 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidate */

/* 3176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3192 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3202 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3206 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidate */

/* 3214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3230 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3240 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3244 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicecandidateerror */

/* 3252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3266 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3268 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3278 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3280 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3282 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicecandidateerror */

/* 3290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3306 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3320 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onsignalingstatechange */

/* 3328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3344 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3354 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3358 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onsignalingstatechange */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3382 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3392 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3396 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oniceconnectionstatechange */

/* 3404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3420 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3430 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3434 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_oniceconnectionstatechange */

/* 3442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3450 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3458 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3472 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onicegatheringstatechange */

/* 3480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3494 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3496 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3506 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3510 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onicegatheringstatechange */

/* 3518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3526 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3534 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3544 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3548 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onconnectionstatechange */

/* 3556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3562 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3564 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3572 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3582 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3584 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3586 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onconnectionstatechange */

/* 3594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3608 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3610 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3620 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3622 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3624 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3628 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onfingerprintfailure */

/* 3632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3640 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3646 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3648 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3658 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3662 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onfingerprintfailure */

/* 3670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3678 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3686 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3700 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3704 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onaddstream */

/* 3708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3724 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3734 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3736 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3738 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3742 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onaddstream */

/* 3746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3754 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3762 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3776 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sctp */

/* 3784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3792 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3798 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3800 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCSctpTransport */

/* 3810 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3814 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createDataChannel */

/* 3822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3830 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3836 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3838 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 3840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter label */

/* 3848 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3850 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3852 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter varDataChannelDict */

/* 3854 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3856 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3858 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCDataChannel */

/* 3860 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3862 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3864 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3868 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ondatachannel */

/* 3872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3880 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3888 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 3898 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3902 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ondatachannel */

/* 3910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3918 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3924 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3926 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 3936 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3940 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSenders */

/* 3948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3956 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3964 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpSender */

/* 3974 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3978 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 3980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getReceivers */

/* 3986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3994 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4000 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4002 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpReceiver */

/* 4012 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4016 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTransceivers */

/* 4024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4038 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4040 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varSequenceRTCRtpTransceiver */

/* 4050 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4054 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTrack */

/* 4062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x35 ),	/* 53 */
/* 4070 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4078 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 4080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4092 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams0 */

/* 4094 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4098 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams1 */

/* 4100 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4104 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varMediaStreams2 */

/* 4106 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4108 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4110 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCRtpSender */

/* 4112 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4114 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4116 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4120 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeTrack */

/* 4124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4132 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4140 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpSender */

/* 4150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4152 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4154 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addTransceiver */

/* 4162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4170 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4178 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrackorDOMStringTrackOrKind */

/* 4188 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4192 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varRTCRtpTransceiverInit */

/* 4194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4198 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ontrack */

/* 4206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4214 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4222 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4232 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4236 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontrack */

/* 4244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4250 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4258 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4260 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4270 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4274 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4278 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getStats */

/* 4282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4298 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 4300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 4308 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4312 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseRTCStatsReport */

/* 4314 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4318 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_type */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4340 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4342 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4356 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 4358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_sdp */

/* 4364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0xa ),	/* 10 */
/* 4372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4380 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4394 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 4396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sdpLineNumber */

/* 4402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0xa ),	/* 10 */
/* 4410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_httpRequestStatusCode */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0xb ),	/* 11 */
/* 4448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */


	/* Procedure toString */

/* 4478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0xc ),	/* 12 */
/* 4486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4492 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4494 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter String */

/* 4504 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4508 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */


	/* Procedure get_type */

/* 4516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0xe ),	/* 14 */
/* 4524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4532 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCPriorityType */


	/* Parameter pVal */

/* 4542 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4546 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_readyState */


	/* Procedure get_tcpType */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0xf ),	/* 15 */
/* 4562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4568 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4570 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RTCDataChannelState */


	/* Parameter pVal */

/* 4580 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4584 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 4586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relatedAddress */

/* 4592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4608 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4618 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4622 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_protocol */

/* 4630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0xb ),	/* 11 */
/* 4638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4646 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter USVString */

/* 4656 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4660 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmount */

/* 4668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4694 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4698 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bufferedAmountLowThreshold */

/* 4706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4718 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4736 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_bufferedAmountLowThreshold */

/* 4744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4760 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4774 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_binaryType */

/* 4782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4798 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DOMString */

/* 4808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4812 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 4814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onopen */

/* 4820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4836 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4846 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4850 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onclose */

/* 4858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4864 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4872 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4874 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4884 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4888 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onmessage */

/* 4896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4902 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4912 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4922 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4926 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 4928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onmessage */

/* 4934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4940 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4948 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4950 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4960 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4962 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4964 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 4966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4968 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_onbufferedamountlow */

/* 4972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4978 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4986 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4988 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 4998 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5002 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_onbufferedamountlow */

/* 5010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5024 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5026 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5036 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5038 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5040 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5044 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure close */

/* 5048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5064 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure send */

/* 5080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5096 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data */

/* 5106 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5110 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addEventListener */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5126 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5134 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5148 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter listenerCallback */

/* 5150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5154 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter useCapture */

/* 5156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5160 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5164 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeEventListener */

/* 5168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5176 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5182 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5184 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5198 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter listenerCallback */

/* 5200 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5204 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter useCapture */

/* 5206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5208 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5210 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_id */


	/* Procedure get_id */

/* 5218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5226 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5230 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5234 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 5244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5248 */	0xb8,		/* FC_INT3264 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertDTMF */

/* 5256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5264 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5270 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5272 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tones */

/* 5282 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5286 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter duration */

/* 5288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5290 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5292 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter interToneGap */

/* 5294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5296 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5298 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5302 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ontonechange */

/* 5306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5312 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5322 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varEventHandler */

/* 5332 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5334 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5336 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5340 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setParameters */

/* 5344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5350 */	NdrFcShort( 0xa ),	/* 10 */
/* 5352 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5358 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5360 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 5362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varRTCRtpParameters */

/* 5370 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5374 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseVoid */

/* 5376 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5378 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5380 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceTrack */

/* 5388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0xc ),	/* 12 */
/* 5396 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5402 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5404 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big amd64 byval param */
/* 5406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varMediaStreamTrack */

/* 5414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5418 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varPromiseVoid */

/* 5420 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5424 */	NdrFcShort( 0x3e0 ),	/* Type Offset=992 */

	/* Return value */

/* 5426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_timestamp */

/* 5432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5444 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5448 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5458 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5460 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5462 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 5464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure forEach */

/* 5470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5478 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5484 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5486 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varCallback */

/* 5496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5500 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varThisArg */

/* 5502 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5506 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 5508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5510 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure has */

/* 5514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0xa ),	/* 10 */
/* 5522 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5526 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5530 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big amd64 byval param */
/* 5532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varKey */

/* 5540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5542 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5544 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Parameter varBool */

/* 5546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5548 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5550 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5554 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_size */

/* 5558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5564 */	NdrFcShort( 0xd ),	/* 13 */
/* 5566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5594 */	0x8,		/* FC_LONG */
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
    916
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
    38,
    916,
    954,
    992,
    1036,
    1074,
    1112,
    1150,
    1188,
    1226,
    1264,
    1302,
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
    1340,
    1378,
    76,
    1416,
    1454,
    1492,
    1530,
    1568,
    1150,
    1606,
    1644,
    1682,
    1720
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
    1758,
    872
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
    1808,
    1846,
    1416,
    1884,
    1492,
    1922,
    1960,
    1998,
    2036,
    2074,
    1264,
    1302,
    530,
    2112,
    2150,
    2188,
    2226,
    2264,
    2302,
    2340,
    2372,
    2410,
    2442
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
    1808,
    1846,
    2474
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
    2512,
    872,
    2556,
    954,
    2600,
    2638,
    2676,
    1112,
    1998,
    1188,
    2720,
    2764,
    2802,
    2840,
    2878,
    2916,
    2954,
    682,
    2992,
    3024,
    3062,
    3100,
    3138,
    3176,
    3214,
    3252,
    3290,
    3328,
    3366,
    3404,
    3442,
    3480,
    3518,
    3556,
    3594,
    3632,
    3670,
    3708,
    3746,
    3784,
    3822,
    3872,
    3910,
    3948,
    3986,
    4024,
    4062,
    4124,
    4162,
    4206,
    4244,
    4282
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
    4326,
    1846,
    4364
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
    1808,
    1846,
    4402,
    4440,
    4478
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
    1808,
    76,
    2474,
    4440,
    4478,
    1530,
    4516,
    4554,
    4592,
    1644,
    2764,
    2802
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
    1846
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
    1378,
    916,
    954,
    4630,
    1492,
    1922,
    4516,
    4554,
    4668,
    4706,
    4744,
    2802,
    4782,
    2112,
    4820,
    2954,
    682,
    4858,
    3024,
    4896,
    4934,
    4972,
    5010,
    5048,
    5080,
    5118,
    5168
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
    5218,
    1808
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
    5218,
    1808
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
    5256,
    38,
    5306,
    2474
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
    5344,
    2600,
    5388,
    1922
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
    5432,
    1808,
    1846
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
    5470,
    2556,
    5514,
    2600,
    2638,
    5558
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
    954,
    2600
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
    1808,
    1846
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

