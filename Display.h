#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/api/video/video_frame.h"
#include "webrtc/media/base/videosinkinterface.h"
#include "webrtc/system_wrappers/include/critical_section_wrapper.h"

class VideoSink;

class VideoSinkResources
{
	friend class VideoSink;
public:
	VideoSinkResources(int width, int height, std::function<void()> fnOnStartVideoSink, webrtc::VideoTrackInterface* track_to_render);
	virtual ~VideoSinkResources();
	void Enter() { m_cs->Enter(); }
	void Leave() { m_cs->Leave(); }

	const uint8_t* image() const { return m_image.get(); }

private:
	enum {
		SET_SIZE,
		RENDER_FRAME,
	};

	HWND m_Hwnd;
	LONG_PTR m_lpUsrData;
	BITMAPINFO m_bmi;
	std::function<HWND()> m_fnQueryHwnd;
	std::function<BOOL()> m_fnIsWindowless;
	std::function<HRESULT(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase)> m_fnInvalidateWindowless;

	int m_width;
	int m_height;
	std::function<void()> m_fnOnStartVideoSink;
	webrtc::CriticalSectionWrapper *m_cs;
	std::unique_ptr<uint8_t[]> m_image;
	rtc::scoped_refptr<webrtc::VideoTrackInterface> m_rendered_track;
};

class VideoSink : public rtc::VideoSinkInterface<webrtc::VideoFrame>
{
public:
	VideoSink(int width, int height, std::function<void()> fnOnStartVideoSink, webrtc::VideoTrackInterface* track_to_render);
	virtual ~VideoSink();

	void Enter() { m_cs->Enter(); }
	void Leave() { m_cs->Leave(); }

	void SetHwnd(HWND hwnd, LONG_PTR lpUsrData);
	HWND GetHwnd();

	bool PaintFrame(intptr_t layer = 0);
	int GetVideoWidth();
	int GetVideoHeight();
	size_t CopyFromFrame(void* bufferPtr, size_t bufferSize);

	void SetFnQueryHwnd(std::function<HWND()> fnQueryHwnd);
	void SetFnIsWindowless(std::function<BOOL()> fnIsWindowless);
	void SetFnInvalidateWindowless(std::function<HRESULT(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase)> fnInvalidateWindowless);

	// VideoSinkInterface implementation
	void OnFrame(const webrtc::VideoFrame& frame) override;

	virtual std::shared_ptr<VideoSinkResources> resources() { return resources_; }

private:
	void SetSize(int width, int height);

private:
	webrtc::CriticalSectionWrapper *m_cs;
	std::shared_ptr<VideoSinkResources> resources_;
};

class Display
{
protected:
	Display();
public:
	virtual ~Display();

	void Enter() { m_cs->Enter(); }
	void Leave() { m_cs->Leave(); }

	virtual void OnStartVideoSink() {};
	virtual void OnStopVideoSink() {};
	virtual void OnNewFrame(const void* rgb32_ptr, int width, int height) {}

	void StartVideoSink(VideoTrackInterfacePtr video);
	void StopVideoSink();
	bool PaintFrame(intptr_t layer = 0);

	int GetVideoWidth();
	int GetVideoHeight();
	size_t CopyFromFrame(void* bufferPtr, size_t bufferSize);

	virtual HWND Handle() = 0;
	virtual BOOL IsWindowless() { return FALSE; };
	virtual HRESULT InvalidateWindowless(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase) {
		assert(IsWindowless());
		return S_OK;
	}
	virtual HWND QueryHwnd()
	{
		return Handle();
	}


private:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	std::shared_ptr<VideoSink> m_renderer;
	webrtc::CriticalSectionWrapper *m_cs;
#if _MSC_VER
#pragma warning(pop)
#endif
};

static inline LONG Width(const RECT& r)
{
	return r.right - r.left;
}

static inline LONG Height(const RECT& r)
{
	return r.bottom - r.top;
}

typedef struct Ratio {
	DWORD Numerator;
	DWORD Denominator;
} Ratio;

//-----------------------------------------------------------------------------
// CorrectAspectRatio
//
// Converts a rectangle from the source's pixel aspect ratio (PAR) to 1:1 PAR.
// Returns the corrected rectangle.
//
// For example, a 720 x 486 rect with a PAR of 9:10, when converted to 1x1 PAR,
// is stretched to 720 x 540.
// Copyright (C) Microsoft
//-----------------------------------------------------------------------------

static inline RECT CorrectAspectRatio(const RECT& src, const Ratio& srcPAR)
{
	// Start with a rectangle the same size as src, but offset to the origin (0,0).
	RECT rc = { 0, 0, src.right - src.left, src.bottom - src.top };

	if ((srcPAR.Numerator != 1) || (srcPAR.Denominator != 1))
	{
		// Correct for the source's PAR.

		if (srcPAR.Numerator > srcPAR.Denominator)
		{
			// The source has "wide" pixels, so stretch the width.
			rc.right = MulDiv(rc.right, srcPAR.Numerator, srcPAR.Denominator);
		}
		else if (srcPAR.Numerator < srcPAR.Denominator)
		{
			// The source has "tall" pixels, so stretch the height.
			rc.bottom = MulDiv(rc.bottom, srcPAR.Denominator, srcPAR.Numerator);
		}
		// else: PAR is 1:1, which is a no-op.
	}
	return rc;
}

//-------------------------------------------------------------------
// LetterBoxDstRect
//
// Takes a src rectangle and constructs the largest possible
// destination rectangle within the specifed destination rectangle
// such thatthe video maintains its current shape.
//
// This function assumes that pels are the same shape within both the
// source and destination rectangles.
// Copyright (C) Microsoft
//-------------------------------------------------------------------

static inline RECT LetterBoxRect(const RECT& rcSrc, const RECT& rcDst)
{
	// figure out src/dest scale ratios
	int iSrcWidth = Width(rcSrc);
	int iSrcHeight = Height(rcSrc);

	int iDstWidth = Width(rcDst);
	int iDstHeight = Height(rcDst);

	int iDstLBWidth;
	int iDstLBHeight;

	if (MulDiv(iSrcWidth, iDstHeight, iSrcHeight) <= iDstWidth) {

		// Column letter boxing ("pillar box")

		iDstLBWidth = MulDiv(iDstHeight, iSrcWidth, iSrcHeight);
		iDstLBHeight = iDstHeight;
	}
	else {

		// Row letter boxing.

		iDstLBWidth = iDstWidth;
		iDstLBHeight = MulDiv(iDstWidth, iSrcHeight, iSrcWidth);
	}


	// Create a centered rectangle within the current destination rect

	RECT rc;

	LONG left = rcDst.left + ((iDstWidth - iDstLBWidth) >> 1);
	LONG top = rcDst.top + ((iDstHeight - iDstLBHeight) >> 1);

	SetRect(&rc, left, top, left + iDstLBWidth, top + iDstLBHeight);

	return rc;
}
