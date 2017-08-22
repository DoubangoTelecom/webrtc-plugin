**webrtc-plugin** is an open source project to add support for WebRTC features to Internet Explorer (Windows).

# Downloads
 - <a href="https://doubango.org/rtc-plugin/setup.exe" target="_blank">Windows</a>

## Online samples ##

### getUserMedia ###
 - [Basic getUserMedia demo](https://doubango.org/rtc-plugin/samples/src/content/getusermedia/gum/)
 - [getUserMedia with resolution constraints](https://doubango.org/rtc-plugin/samples/src/content/getusermedia/resolution/)
 - [getUserMedia with Desktop sharing](https://doubango.org/rtc-plugin/samples/src/content/getusermedia/desktop/)
 - [getUserMedia with Window sharing](https://doubango.org/rtc-plugin/samples/src/content/getusermedia/window/)
 - [getUserMedia with Microphone level](https://doubango.org/rtc-plugin/samples/src/content/getusermedia/miclevel/)

### Devices ###
 - [getUserMedia with camera, mic and speaker selection](https://doubango.org/rtc-plugin/samples/src/content/devices/input-output/)

### RTCPeerConnection ###
 - [Basic peer connection](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/pc1/)
 - [Multiple peer connections at once](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/multiple/)
 - [Forward output of one peer connection into another](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/multiple-relay/)
 - [Munge SDP parameters](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/munge-sdp/)
 - [Use pranswer when setting up a peer connection](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/pr-answer/)
 - [Display peer connection states](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/states/)
 - [Trickle ICE](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/trickle-ice/)
 - [Dtmf](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/dtmf/)
 - [Bandwidth](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/bandwidth/)
 - [Adjust constraints, view stats](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/constraints/)
 - [Video call + ScreenShare (LifeSize)](https://doubango.org/rtc-plugin/samples/src/content/peerconnection/screen-share/)

### RTCDataChannel ###
 - [Transmit text](https://doubango.org/rtc-plugin/samples/src/content/datachannel/basic/)
 - [Transfer a file](https://doubango.org/rtc-plugin/samples/src/content/datachannel/filetransfer/)
 - [Transfer data](https://doubango.org/rtc-plugin/samples/src/content/datachannel/datatransfer/)

# Using our plugin in your own project
 - Download and install the plugin for <a href="https://doubango.org/rtc-plugin/setup.exe" target="_blank">Windows</a>
 - Include <a href="https://doubango.org/rtc-plugin/adapter/adapter-latest.js" target="_blank">adapter-latest.js</a> in your code.
 - Change the code you're using to attach a stream to a &lt;audio/&gt; or &lt;video /&gt; HTML5 element: <br />
 from:
 ```
 document.getElementById("eltId").src = mediaStream;
  ```
 <br /> to:
  ```
 attachMediaStream(document.getElementById("eltId"), mediaStream);
  ```


# Building source code
 - We require branch 58 (```git checkout branch-heads/58```)
 - You'll need to apply [this patch](/webrtc.patch)

