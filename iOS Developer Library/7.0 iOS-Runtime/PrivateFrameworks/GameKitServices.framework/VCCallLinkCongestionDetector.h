/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCallLinkCongestionDetector : NSObject {
    BOOL isLinkCongested;
    double lossRateThreshold;
    double rttThreshold;
}

@property BOOL isLinkCongested;

- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;
- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;
- (BOOL)isLinkCongested;
- (void)setIsLinkCongested:(BOOL)arg1;

@end
