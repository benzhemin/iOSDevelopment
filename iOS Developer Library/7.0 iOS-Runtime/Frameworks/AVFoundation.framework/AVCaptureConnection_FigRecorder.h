/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnectionInternal_FigRecorder, AVCaptureOutput_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, NSArray;

@interface AVCaptureConnection_FigRecorder : NSObject {
    AVCaptureConnectionInternal_FigRecorder *_internal;
}

@property(getter=isActive,readonly) BOOL active;
@property(readonly) NSArray * audioChannels;
@property BOOL automaticallyAdjustsVideoMirroring;
@property(getter=isEnabled) BOOL enabled;
@property BOOL enablesVideoStabilizationWhenAvailable;
@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput_FigRecorder * output;
@property(getter=isVideoMaxFrameDurationSupported,readonly) BOOL supportsVideoMaxFrameDuration;
@property(getter=isVideoMinFrameDurationSupported,readonly) BOOL supportsVideoMinFrameDuration;
@property(getter=isVideoMirroringSupported,readonly) BOOL supportsVideoMirroring;
@property(getter=isVideoOrientationSupported,readonly) BOOL supportsVideoOrientation;
@property(getter=isVideoStabilizationSupported,readonly) BOOL supportsVideoStabilization;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(readonly) float videoMaxScaleAndCropFactor;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMirrored) BOOL videoMirrored;
@property int videoOrientation;
@property(readonly) AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
@property float videoScaleAndCropFactor;
@property(getter=isVideoStabilizationEnabled,readonly) BOOL videoStabilizationEnabled;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoMirrored:(BOOL)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (int)activeVideoStabilizationMode;
- (id)audioChannels;
- (BOOL)automaticallyAdjustsVideoMirroring;
- (void)dealloc;
- (id)description;
- (BOOL)enablesVideoStabilizationWhenAvailable;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (void)initCommonStorage;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)inputPorts;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isEnabled;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isLive;
- (BOOL)isVideoMaxFrameDurationSet;
- (BOOL)isVideoMaxFrameDurationSupported;
- (BOOL)isVideoMinFrameDurationSet;
- (BOOL)isVideoMinFrameDurationSupported;
- (BOOL)isVideoMirrored;
- (BOOL)isVideoMirroringSupported;
- (BOOL)isVideoOrientationSupported;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (BOOL)isVideoStabilizationEnabled;
- (BOOL)isVideoStabilizationSupported;
- (id)mediaType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)output;
- (int)preferredVideoStabilizationMode;
- (id)session;
- (void)setActive:(BOOL)arg1;
- (void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1;
- (void)setPreferredVideoStabilizationMode:(int)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoScaleAndCropFactor:(float)arg1;
- (id)sourceDevice;
- (BOOL)sourcesFromFrontFacingCamera;
- (void)updateAudioChannelsArray;
- (void)updateAudioLevelsArray;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (float)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (int)videoOrientation;
- (id)videoPreviewLayer;
- (int)videoRetainedBufferCountHint;
- (float)videoScaleAndCropFactor;

@end
