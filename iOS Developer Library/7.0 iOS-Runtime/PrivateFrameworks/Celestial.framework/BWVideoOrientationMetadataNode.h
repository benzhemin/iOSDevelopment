/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWDeviceOrientationMonitor, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BWVideoOrientationMetadataNode : BWNode <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> {
    struct OpaqueCMBlockBuffer {} *_bbufCache[5];
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    struct OpaqueCMClock { } *_clock;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    unsigned long _localIDOfOrientationMetadata;
    struct OpaqueCMClock { } *_masterClock;
    int _mostRecentDevicePortraitLandscapeOrientation;
    BOOL _recording;
    int _sourcePosition;
    NSMutableArray *_transforms;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)_queueUpCallToEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 markerBufferOrFirstSample:(BOOL)arg2;
- (void)_releaseTransformData;
- (void)_renderSampleBufferForBoxedFormatOutputAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 orientation:(int)arg2 firstSample:(BOOL)arg3;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didUpdatePortraitLandscapeOrientation:(int)arg1;
- (id)init;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSourcePosition:(int)arg1;
- (int)sourcePosition;

@end
