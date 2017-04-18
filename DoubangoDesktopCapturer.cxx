#include "DoubangoDesktopCapturer.h"

#include "webrtc/base/constructormagic.h"
#include "webrtc/modules/desktop_capture/desktop_capturer.h"
#include "webrtc/modules/desktop_capture/desktop_capture_options.h"

static const int64_t kNumNanoSecsPerMilliSec = 1000000;
static const int kDefaultScreencastFps = 5;
#	define kDoubangoSharedMemoryId 85697421

class DoubangoDesktopCapturer;

class DoubangoDesktopCapturerThread : public rtc::Thread, public rtc::MessageHandler {
public:
	explicit DoubangoDesktopCapturerThread(DoubangoDesktopCapturer* capturer);

	virtual ~DoubangoDesktopCapturerThread();

	// Override virtual method of parent Thread. Context: Worker Thread.
	virtual void Run() override;

	// Override virtual method of parent MessageHandler. Context: Worker Thread.
	virtual void OnMessage(rtc::Message* /*pmsg*/) override;

	// Check if Run() is finished.
	bool Finished() const;

private:
	DoubangoDesktopCapturer* capturer_;
	mutable rtc::CriticalSection crit_;
	bool finished_;

	RTC_DISALLOW_COPY_AND_ASSIGN(DoubangoDesktopCapturerThread);
};

//
//	DoubangoARGBBuffer
//

class DoubangoARGBVideoFrameBuffer : public webrtc::VideoFrameBuffer {
public:
	DoubangoARGBVideoFrameBuffer(int width, int height, int stride)
		: webrtc::VideoFrameBuffer()
		, width_(width)
		, height_(height)
		, stride_(stride)
		, size_(static_cast<size_t>((height * stride) << 2))
		, memory_(static_cast<uint8_t*>(webrtc::AlignedMalloc(size_, 64)))
	{
		RTC_DCHECK_GT(width, 0);
		RTC_DCHECK_GT(height, 0);
		RTC_DCHECK_GE(stride, width);
	}

	virtual ~DoubangoARGBVideoFrameBuffer()
	{
		
	}

	static rtc::scoped_refptr<DoubangoARGBVideoFrameBuffer> Create(int width, int height, int stride) {
		rtc::scoped_refptr<DoubangoARGBVideoFrameBuffer> buffer = new rtc::RefCountedObject<DoubangoARGBVideoFrameBuffer>(width, height, stride);
		if (!buffer->memory_.get()) {
			return nullptr;
		}
		return buffer;
	}

	int stride() const { return stride_; }
	void copy(const uint8_t* src) { memcpy(memory_.get(), src, size_); }

	// The resolution of the frame in pixels. For formats where some planes are
	// subsampled, this is the highest-resolution plane.
	virtual int width() const override { return width_; }
	virtual int height() const override { return height_; }

	// Returns pointer to the pixel data for a given plane. The memory is owned by
	// the VideoFrameBuffer object and must not be freed by the caller.
	virtual const uint8_t* DataY() const override { return memory_.get(); }
	virtual const uint8_t* DataU() const override { return memory_.get(); }
	virtual const uint8_t* DataV() const override { return memory_.get(); }

	// Returns the number of bytes between successive rows for a given plane.
	virtual int StrideY() const override { return stride_; }
	virtual int StrideU() const override { return stride_; }
	virtual int StrideV() const override { return stride_; }

	// Return the handle of the underlying video frame. This is used when the
	// frame is backed by a texture.
	virtual void* native_handle() const override { return (void*)(this); }

	// Returns a new memory-backed frame buffer converted from this buffer's
	// native handle.
	virtual rtc::scoped_refptr<VideoFrameBuffer> NativeToI420Buffer() override { 
		RTC_NOTREACHED();
		return nullptr;
	};

private:
	int width_;
	int height_;
	int stride_;
	size_t size_;
	const std::unique_ptr<uint8_t, webrtc::AlignedFreeDeleter> memory_;
};

//
//	DoubangoSharedMemory
//

class DoubangoSharedMemory : public webrtc::SharedMemory {
public:
	DoubangoSharedMemory(char* buffer, size_t size)
		: SharedMemory(buffer, size, 0, kDoubangoSharedMemoryId),
		buffer_(buffer) {
	}
	virtual ~DoubangoSharedMemory() {
		if (buffer_) delete[] buffer_;
	}
private:
	char* buffer_;
	RTC_DISALLOW_COPY_AND_ASSIGN(DoubangoSharedMemory);
};

//
//	DoubangoSharedMemoryFactory
//

class DoubangoSharedMemoryFactory : public webrtc::SharedMemoryFactory {
public:
	DoubangoSharedMemoryFactory() {}
	virtual ~DoubangoSharedMemoryFactory() {}

	virtual std::unique_ptr<webrtc::SharedMemory> CreateSharedMemory(size_t size) override
	{
		return std::make_unique<DoubangoSharedMemory>(new char[size], size);
	}

private:
	RTC_DISALLOW_COPY_AND_ASSIGN(DoubangoSharedMemoryFactory);
};

//
//	DoubangoDesktopCapturer
//

// Fake video capturer that allows the test to manually pump in frames.
// https://chromium.googlesource.com/external/webrtc/trunk/talk/+/master/app/webrtc/objc/avfoundationvideocapturer.h
// https://chromium.googlesource.com/external/webrtc/+/master/talk/app/webrtc/objc/avfoundationvideocapturer.mm#

class DoubangoDesktopCapturer : public cricket::VideoCapturer, public webrtc::DesktopCapturer::Callback {
public:
	DoubangoDesktopCapturer()
		: running_(false)
		, curr_frame_(nullptr)
		, video_buffer_(nullptr)
		, capture_thread_(nullptr)
		, startThread_(nullptr)
		, start_time_ns_(0)
		, last_frame_timestamp_ns_(0)
		, start_read_time_ms_(0)
		, rotation_(webrtc::kVideoRotation_0)
		, orig_width_(0)
		, orig_height_(0)
	{
		webrtc::DesktopCaptureOptions options = webrtc::DesktopCaptureOptions::CreateDefault();
#if defined _WIN32
		options.set_allow_directx_capturer(true);
#endif
		capture_ = webrtc::DesktopCapturer::CreateScreenCapturer(options);
#if 0
		capture_->SetSharedMemoryFactory(std::make_unique<DoubangoSharedMemoryFactory>());
#endif

		// Default supported formats. Use ResetSupportedFormats to over write.
		std::vector<cricket::VideoFormat> formats;
#if defined _WIN32
		static enum cricket::FourCC defaultFourCC = cricket::FOURCC_ARGB;
		formats.push_back(cricket::VideoFormat(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN),
			cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
#elif defined(__APPLE__)
		static enum cricket::FourCC defaultFourCC = cricket::FOURCC_ARGB;
		CGDisplayCount displayCount;
		CGDirectDisplayID displays[MAX_DISPLAYS];
		if (CGGetActiveDisplayList(sizeof(displays) / sizeof(displays[0]), displays, &displayCount) == kCGErrorSuccess) {
			for (CGDisplayCount i = 0; i<displayCount; i++) {
				// make a snapshot of the current display
				// CGImageRef image = CGDisplayCreateImage(displays[i]);
				formats.push_back(cricket::VideoFormat((int)CGDisplayPixelsWide(displays[i]), (int)CGDisplayPixelsHigh(displays[i]),
					cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
			}
		}
#endif
		formats.push_back(cricket::VideoFormat(1280, 720,
			cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
		formats.push_back(cricket::VideoFormat(640, 480,
			cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
		formats.push_back(cricket::VideoFormat(320, 240,
			cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
		formats.push_back(cricket::VideoFormat(160, 120,
			cricket::VideoFormat::FpsToInterval(kDefaultScreencastFps), defaultFourCC));
		ResetSupportedFormats(formats);
	}

	virtual ~DoubangoDesktopCapturer()
	{
		signalDestroyed_(this);
		capture_ = nullptr;
		capture_thread_ = nullptr;
		curr_frame_ = nullptr;
		startThread_ = nullptr;
		
		/* curr_frame_ is a struct without allocated pointers */
	}

	void ResetSupportedFormats(const std::vector<cricket::VideoFormat>& formats)
	{
		SetSupportedFormats(formats);
	}

	bool GetNextFrame(int* waiting_time_ms)
	{
		CaptureFrame();
		*waiting_time_ms = 1000 / GetCaptureFormat()->framerate();
		return true;
	}

	bool CaptureFrame()
	{
		start_read_time_ms_ = rtc::Time();
		capture_->CaptureFrame();
		return IsRunning();
	}

	virtual bool GetPreferredFourccs(std::vector<uint32_t>* fourccs) override
	{
		fourccs->push_back(cricket::FOURCC_I420);
		return true;
	}

	virtual cricket::CaptureState Start(const cricket::VideoFormat& capture_format) override
	{
		if (running_)  {
			LOG(LS_ERROR) << "DoubangoDesktopCapturer '" << GetId() << "' already running";
			SetCaptureState(cricket::CS_FAILED);
			return cricket::CS_FAILED;
		}

		cricket::VideoFormat supported;
		if (GetBestCaptureFormat(capture_format, &supported)) {
			SetCaptureFormat(&supported);
		}
		orig_width_ = supported.width;
		orig_height_ = supported.height;

		// Create the capture thread
		capture_thread_ = std::make_shared<DoubangoDesktopCapturerThread>(this);

		SetCaptureState(cricket::CS_RUNNING);
		capture_->Start(this);

		// Keep track of which thread capture started on. This is the thread that
		// frames need to be sent to.
		RTC_DCHECK(!startThread_);
		startThread_ = rtc::Thread::Current();

		start_time_ns_ = kNumNanoSecsPerMilliSec * static_cast<int64_t>(rtc::Time());

		bool ret = capture_thread_->Start();
		if (ret) {
			LOG(LS_INFO) << "DoubangoDesktopCapturer '" << GetId() << "' started";
		}
		else {
			LOG(LS_ERROR) << "DoubangoDesktopCapturer '" << GetId() << "' failed to start";
			SetCaptureState(cricket::CS_FAILED);
			SetCaptureFormat(nullptr);
			return cricket::CS_FAILED;
		}

		running_ = true;
		return cricket::CS_RUNNING;
	}

	virtual void Stop() override
	{
		running_ = false;
		if (capture_thread_) {
			capture_thread_->Stop();
			capture_thread_ = nullptr;
			LOG(LS_INFO) << "DoubangoDesktopCapturer '" << GetId() << "' stopped";
		}
		SetCaptureFormat(nullptr);
		SetCaptureState(cricket::CS_STOPPED);
		startThread_ = nullptr;
	}
	
	virtual bool IsRunning() override
	{
		return running_ && capture_thread_ && !capture_thread_->Finished();
	}
	
	virtual bool IsScreencast() const override
	{
		return true;
	}

private:
	static size_t I420SizeOf(size_t w, size_t h) {
		return w * h + ((w + 1) / 2) * ((h + 1) / 2) * 2;
	}

	virtual void OnCaptureResult(webrtc::DesktopCapturer::Result result, std::unique_ptr<webrtc::DesktopFrame> desktopFrame) override
	{
		if (result == webrtc::DesktopCapturer::Result::SUCCESS) {
			if (IsRunning() && desktopFrame) {
				if (GetCaptureFormat()->fourcc != cricket::FOURCC_ARGB) {
					LOG(LS_ERROR) << "DoubangoDesktopCapturer '" << GetId() << "' Unsupported FOURCC " << GetCaptureFormat()->fourcc;
					return;
				}

				if (!video_buffer_.get() || !curr_frame_.get() || video_buffer_->width() != desktopFrame->size().width() || video_buffer_->height() != desktopFrame->size().height() || video_buffer_->stride() != desktopFrame->stride() >> 2) {
					video_buffer_ = DoubangoARGBVideoFrameBuffer::Create(desktopFrame->size().width(), desktopFrame->size().height(), desktopFrame->stride() >> 2);
					curr_frame_ = std::make_shared<webrtc::VideoFrame>(video_buffer_, 0, 0, webrtc::VideoRotation::kVideoRotation_0);
					if (!curr_frame_) {
						return;
					}
				}
				if (curr_frame_.get()) {
					video_buffer_->copy(desktopFrame->data());
					curr_frame_->set_timestamp(static_cast<uint32_t>(kNumNanoSecsPerMilliSec *
						start_read_time_ms_));
					OnFrame(*curr_frame_.get(), orig_width_, orig_height_);
				}
			}
		}
	}

private:
	sigslot::signal1<DoubangoDesktopCapturer*> signalDestroyed_;
	std::unique_ptr<webrtc::DesktopCapturer>  capture_;
	bool running_;
	webrtc::VideoRotation rotation_;
	std::shared_ptr<DoubangoDesktopCapturerThread> capture_thread_;
	std::shared_ptr<webrtc::VideoFrame> curr_frame_;
	rtc::Thread* startThread_;  // Set in Start(), unset in Stop().
	int64_t start_time_ns_;  // Time when the video capturer starts.
	int64_t last_frame_timestamp_ns_;  // Timestamp of last read frame.
	int64_t start_read_time_ms_; // Timestamp we requested screenshot
	RTC_DISALLOW_COPY_AND_ASSIGN(DoubangoDesktopCapturer);
	int orig_width_;
	int orig_height_;
	rtc::scoped_refptr<DoubangoARGBVideoFrameBuffer> video_buffer_;
};


//
//	DoubangoDesktopCapturerThread
//


DoubangoDesktopCapturerThread:: DoubangoDesktopCapturerThread(DoubangoDesktopCapturer* capturer)
	: capturer_(capturer)
	, finished_(false)
{
}

DoubangoDesktopCapturerThread::~DoubangoDesktopCapturerThread()
{
	Stop();
}

// Override virtual method of parent Thread. Context: Worker Thread.
void DoubangoDesktopCapturerThread::DoubangoDesktopCapturerThread::Run()
{
	// Read the first frame and start the message pump. The pump runs until
	// Stop() is called externally or Quit() is called by OnMessage().
	int waiting_time_ms = 0;
	if (capturer_ && capturer_->GetNextFrame(&waiting_time_ms)) {
		PostDelayed(RTC_FROM_HERE, waiting_time_ms, this);
		Thread::Run();
	}

	rtc::CritScope cs(&crit_);
	finished_ = true;
}

// Override virtual method of parent MessageHandler. Context: Worker Thread.
void DoubangoDesktopCapturerThread::OnMessage(rtc::Message* /*pmsg*/)
{
	int waiting_time_ms = 0;
	if (capturer_ && capturer_->GetNextFrame(&waiting_time_ms)) {
		PostDelayed(RTC_FROM_HERE, waiting_time_ms, this);
	}
	else {
		Quit();
	}
}

// Check if Run() is finished.
bool DoubangoDesktopCapturerThread::Finished() const
{
	rtc::CritScope cs(&crit_);
	return finished_;
}


//
//	DoubangoDesktopCapturerFactory
//

cricket::VideoCapturer* DoubangoDesktopCapturerFactory::Create()
{
	return new DoubangoDesktopCapturer();
}

