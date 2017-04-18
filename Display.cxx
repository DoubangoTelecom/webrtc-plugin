#include "stdafx.h"
#include "Display.h"

#include "libyuv/convert_argb.h"
#include "webrtc/api/video/i420_buffer.h"

///
/// VideoSink
///

VideoSinkResources::VideoSinkResources(int width, int height, std::function<void()> fnOnStartVideoSink, webrtc::VideoTrackInterface* track_to_render)
	: m_fnOnStartVideoSink(fnOnStartVideoSink)
	, m_Hwnd(NULL)
	, m_lpUsrData(NULL)
	, m_cs(NULL)
	, m_width(width)
	, m_height(height)
{
	m_rendered_track = track_to_render;
	m_cs = webrtc::CriticalSectionWrapper::CreateCriticalSection();
	ZeroMemory(&m_bmi, sizeof(m_bmi));
	m_bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	m_bmi.bmiHeader.biPlanes = 1;
	m_bmi.bmiHeader.biBitCount = 32;
	m_bmi.bmiHeader.biCompression = BI_RGB;
	m_bmi.bmiHeader.biWidth = width;
	m_bmi.bmiHeader.biHeight = -height;
	m_bmi.bmiHeader.biSizeImage = width * height *
		(m_bmi.bmiHeader.biBitCount >> 3);
}
VideoSinkResources::~VideoSinkResources()
{
	m_image = NULL;
	m_rendered_track = NULL;

	{
		if (m_Hwnd) {
			InvalidateRect(m_Hwnd, NULL, TRUE);
		}
	} // ~lock


	if (m_cs) {
		delete m_cs;
		m_cs = NULL;
	}
}


//
//	VideoSink
//
VideoSink::VideoSink(int width, int height, std::function<void()> fnOnStartVideoSink, webrtc::VideoTrackInterface* track_to_render)
	: m_cs(NULL)
	, resources_(new VideoSinkResources(width, height, fnOnStartVideoSink, track_to_render))

{
	m_cs = webrtc::CriticalSectionWrapper::CreateCriticalSection();
	resources_->m_rendered_track->AddOrUpdateSink(this, rtc::VideoSinkWants());
}

VideoSink::~VideoSink()
{
	if (resources_->m_rendered_track) {
		resources_->m_rendered_track->RemoveSink(this);
	}

	if (m_cs) {
		delete m_cs;
		m_cs = NULL;
	}
	resources_ = nullptr;
}


void VideoSink::SetHwnd(HWND hwnd, LONG_PTR lpUsrData)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	resources_->m_Hwnd = hwnd;
	resources_->m_lpUsrData = lpUsrData;
	if (hwnd)
	{
		SetWindowLongPtr(hwnd, GWLP_USERDATA, lpUsrData);
	}
}

HWND VideoSink::GetHwnd()
{
	return resources_->m_Hwnd;
}


// On Windows, must be called inside OnPaint()
// Requires valid m_Hwnd
bool VideoSink::PaintFrame(intptr_t layer /*= 0*/)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	const uint8_t *image = resources_->image();
	ATL_DRAWINFO* drawInfo = reinterpret_cast<ATL_DRAWINFO*>(layer);
	if ((resources_->m_Hwnd || drawInfo) && image) {
		PAINTSTRUCT ps;
		HDC hdc;
		if (resources_->m_Hwnd) {
			if (!(hdc = ::BeginPaint(resources_->m_Hwnd, &ps))) {
				return false;
			}
		}
		else {
			memset(&ps, 0, sizeof(ps));
			ps.hdc = hdc = drawInfo->hdcDraw;
		}

		RECT rc;
		if (resources_->m_Hwnd) {
			if (!::GetClientRect(resources_->m_Hwnd, &rc)) {
				::EndPaint(resources_->m_Hwnd, &ps);
				return false;
			}
		}
		else {
			rc = *(RECT*)drawInfo->prcBounds;
		}

#if WE_USE_AUTORESIZE // Flickering when resizing (in windowless mode only: https://github.com/sarandogou/webrtc-everywhere/issues/44)
		int width = resources_->m_bmi.bmiHeader.biWidth;
		int height = abs(resources_->m_bmi.bmiHeader.biHeight);

		HDC dc_mem = ::CreateCompatibleDC(ps.hdc);
		::SetStretchBltMode(dc_mem, HALFTONE);

		// Set the map mode so that the ratio will be maintained for us.
		HDC all_dc[] = { ps.hdc, dc_mem };
		for (int i = 0; i < ARRAY_SIZE(all_dc); ++i) {
			SetMapMode(all_dc[i], MM_ISOTROPIC);
			SetWindowExtEx(all_dc[i], width, height, NULL);
			SetViewportExtEx(all_dc[i], rc.right, rc.bottom, NULL);
		}

		HBITMAP bmp_mem = ::CreateCompatibleBitmap(ps.hdc, rc.right, rc.bottom);
		HGDIOBJ bmp_old = ::SelectObject(dc_mem, bmp_mem);

		POINT logical_area = { rc.right, rc.bottom };
		DPtoLP(ps.hdc, &logical_area, 1);

		HBRUSH brush = ::CreateSolidBrush(RGB(0, 0, 0));
		RECT logical_rect = { 0, 0, logical_area.x, logical_area.y };
		::FillRect(dc_mem, &logical_rect, brush);
		::DeleteObject(brush);

		int x = (logical_area.x / 2) - (width / 2);
		int y = (logical_area.y / 2) - (height / 2);

		StretchDIBits(dc_mem, x, y, width, height,
			0, 0, width, height, image, &m_bmi, DIB_RGB_COLORS, SRCCOPY);

		BitBlt(ps.hdc, 0, 0, logical_area.x, logical_area.y,
			dc_mem, 0, 0, SRCCOPY);

		// Cleanup.
		::SelectObject(dc_mem, bmp_old);
		::DeleteObject(bmp_mem);
		::DeleteDC(dc_mem);
#else /* !WE_USE_AUTORESIZE */
		static const Ratio pixelAR = { 1, 1 };
		RECT rcSrc = { 0, 0, resources_->m_bmi.bmiHeader.biWidth, abs(resources_->m_bmi.bmiHeader.biHeight) };
		rcSrc = ::CorrectAspectRatio(rcSrc, pixelAR);
		const RECT rcDest = ::LetterBoxRect(rcSrc, rc);

		HDC dc_mem = ::CreateCompatibleDC(ps.hdc);
		if (dc_mem) {
			::SetStretchBltMode(dc_mem, HALFTONE);

			// Create offscreen bmp memory
			HBITMAP bmp_mem = ::CreateCompatibleBitmap(ps.hdc, rc.right, rc.bottom);
			HGDIOBJ bmp_old = ::SelectObject(dc_mem, bmp_mem);
			if (bmp_mem && bmp_old) {
				POINT logical_area = { rc.right, rc.bottom };
				::DPtoLP(ps.hdc, &logical_area, 1);

				HBRUSH brush = ::CreateSolidBrush(RGB(0, 0, 0));
				if (brush) {
					RECT logical_rect = { 0, 0, logical_area.x, logical_area.y };
					::FillRect(dc_mem, &logical_rect, brush);
					::DeleteObject(brush);
				}

				::StretchDIBits(dc_mem, rcDest.left, rcDest.top, ::Width(rcDest), ::Height(rcDest),
					rcSrc.left, rcSrc.top, ::Width(rcSrc), ::Height(rcSrc), image, &resources_->m_bmi, DIB_RGB_COLORS, SRCCOPY);

				::BitBlt(ps.hdc, 0, 0, logical_area.x, logical_area.y, dc_mem, 0, 0, SRCCOPY);
			}

			// Cleanup.
			if (bmp_old) {
				::SelectObject(dc_mem, bmp_old);
			}
			if (bmp_mem) {
				::DeleteObject(bmp_mem);
			}
			::DeleteDC(dc_mem);
		}
		else {
			LOG(LS_ERROR) << "CreateCompatibleDC failed";
		}
#endif /* WE_USE_AUTORESIZE */

		if (resources_->m_Hwnd) {
			::EndPaint(resources_->m_Hwnd, &ps);
		}

		return true;
	}

	return false;
}

int VideoSink::GetVideoWidth()
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	return resources_->m_width;
}

int VideoSink::GetVideoHeight()
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	return resources_->m_height;
}



size_t VideoSink::CopyFromFrame(void* bufferPtr, size_t bufferSize)
{
	if (bufferPtr && bufferSize) {
		AutoLock<VideoSink> lock0(this);
		AutoLock<VideoSinkResources> lock1(resources_.get());
		size_t sizeToCopy = std::min((int)bufferSize, (resources_->m_width * resources_->m_height * 4));
		const uint8_t* image = resources_->image();
		if (image) {
			memcpy(bufferPtr, image, sizeToCopy);
			return sizeToCopy;
		}
	}
	return  0;
}

void VideoSink::SetFnQueryHwnd(std::function<HWND()> fnQueryHwnd)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	resources_->m_fnQueryHwnd = fnQueryHwnd;
}

void VideoSink::SetFnIsWindowless(std::function<BOOL()> fnIsWindowless)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	resources_->m_fnIsWindowless = fnIsWindowless;
}

void VideoSink::SetFnInvalidateWindowless(std::function<HRESULT(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase)> fnInvalidateWindowless)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	resources_->m_fnInvalidateWindowless = fnInvalidateWindowless;
}

// VideoSinkInterface implementation
void VideoSink::OnFrame(const webrtc::VideoFrame& frame)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	if (!resources_->m_image.get() || resources_->m_width != frame.width() || resources_->m_height != frame.height()) {
		SetSize(frame.width(), frame.height());
		if (!resources_->image()) {
			return;
		}
	}

	rtc::scoped_refptr<webrtc::VideoFrameBuffer> buffer(
		frame.video_frame_buffer());
	if (frame.rotation() != webrtc::kVideoRotation_0) {
		buffer = webrtc::I420Buffer::Rotate(*buffer, frame.rotation());
	}

	SetSize(buffer->width(), buffer->height());

	RTC_DCHECK(resources_->m_image.get() != NULL);
	if (buffer->StrideY() == buffer->StrideU() && buffer->StrideY() == buffer->StrideV()) { // Hack(dmi): to detect FOURCC_ARGB (frame from 'DoubangoDesktopCapturer') - NOT CORRECT
		memcpy(resources_->m_image.get(), buffer->DataY(), resources_->m_bmi.bmiHeader.biSizeImage);
	}
	else {
		libyuv::I420ToARGB(buffer->DataY(), buffer->StrideY(),
			buffer->DataU(), buffer->StrideU(),
			buffer->DataV(), buffer->StrideV(),
			resources_->m_image.get(),
			resources_->m_bmi.bmiHeader.biWidth *
			resources_->m_bmi.bmiHeader.biBitCount / 8,
			buffer->width(), buffer->height());
	}

	if (resources_->m_fnIsWindowless && resources_->m_fnIsWindowless()) {
		// windowless
		if (resources_->m_fnInvalidateWindowless) {
			resources_->m_fnInvalidateWindowless(NULL, TRUE);
		}
	}
	else {
		// windowed
		if (!resources_->m_Hwnd && resources_->m_fnQueryHwnd) {
			SetHwnd(resources_->m_fnQueryHwnd(), resources_->m_lpUsrData);
		}
		if (resources_->m_Hwnd) {
			InvalidateRect(resources_->m_Hwnd, NULL, TRUE);
		}
	}
}

void VideoSink::SetSize(int width, int height)
{
	AutoLock<VideoSink> lock0(this);
	AutoLock<VideoSinkResources> lock1(resources_.get());

	resources_->m_width = width;
	resources_->m_height = height;

	resources_->m_bmi.bmiHeader.biWidth = width;
	resources_->m_bmi.bmiHeader.biHeight = -height;
	resources_->m_bmi.bmiHeader.biSizeImage = width * height *
		(resources_->m_bmi.bmiHeader.biBitCount >> 3);
	resources_->m_image.reset(new uint8_t[resources_->m_bmi.bmiHeader.biSizeImage]);
	if (resources_->m_Hwnd) {
	}

	if (resources_->m_fnOnStartVideoSink) {
		resources_->m_fnOnStartVideoSink();
	}
}


//
//	Display
//

Display::Display()
{
	m_cs = webrtc::CriticalSectionWrapper::CreateCriticalSection();
}

Display::~Display()
{
	StopVideoSink();

	if (m_cs) {
		delete m_cs, m_cs = NULL;
	}
}

void Display::StartVideoSink(VideoTrackInterfacePtr video)
{
	AutoLock<Display> lock(this);
	if (!video) {
		StopVideoSink();
		return;
	}

	webrtc::VideoTrackInterface* _v = dynamic_cast<webrtc::VideoTrackInterface*>((webrtc::VideoTrackInterface*)video);
	if (_v) {
		std::shared_ptr<VideoSink>_video(new VideoSink(1, 1, std::bind(&Display::OnStartVideoSink, this), _v));
		if (_video.get()) {
			_video->SetFnQueryHwnd(std::bind(&Display::QueryHwnd, this));
			_video->SetFnIsWindowless(std::bind(&Display::IsWindowless, this));
			_video->SetFnInvalidateWindowless(std::bind(&Display::InvalidateWindowless, this, std::placeholders::_1, std::placeholders::_2));
			_video->SetHwnd(Handle(), reinterpret_cast<LONG_PTR>(this));
			m_renderer = _video;
		}
	}
}

void Display::StopVideoSink()
{
	AutoLock<Display> lock(this);

	if (m_renderer) {
		m_renderer->SetHwnd(m_renderer->GetHwnd(), NULL);
	}

	m_renderer = nullptr;
	OnStopVideoSink();
}


// On Windows, must be called inside OnPaint()
bool Display::PaintFrame(intptr_t layer /*= 0*/)
{
	AutoLock<Display> lock(this);

	bool ret = false;

	if (m_renderer.get()) {
		ret = m_renderer->PaintFrame(layer);
	}

	return ret;
}

int Display::GetVideoWidth()
{
	if (m_renderer.get()) {
		return m_renderer->GetVideoWidth();
	}
	return -1;
}

int Display::GetVideoHeight()
{
	AutoLock<Display> lock(this);

	if (m_renderer.get()) {
		return m_renderer->GetVideoHeight();
	}
	return -1;
}

size_t Display::CopyFromFrame(void* bufferPtr, size_t bufferSize)
{
	AutoLock<Display> lock(this);

	if (m_renderer.get()) {
		return m_renderer->CopyFromFrame(bufferPtr, bufferSize);
	}
	return 0;
}