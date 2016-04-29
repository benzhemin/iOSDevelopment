/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSTimer, SBFDeviceLockController;

@interface SBFDeviceBlockTimer : NSObject {
    NSString *_cachedLocalizedPlatformName;
    SBFDeviceLockController *_deviceLockController;
    BOOL _enabled;
    id _handler;
    NSString *_subtitleText;
    NSTimer *_timer;
    NSString *_titleText;
}

@property(copy) NSString * cachedLocalizedPlatformName;
@property(retain) SBFDeviceLockController * deviceLockController;
@property BOOL enabled;
@property(copy) id handler;
@property(copy) NSString * subtitleText;
@property(retain) NSTimer * timer;
@property(copy) NSString * titleText;

- (void)_clearTimer;
- (id)_localizedPlatformName;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (id)cachedLocalizedPlatformName;
- (void)dealloc;
- (id)deviceLockController;
- (BOOL)enabled;
- (id)handler;
- (id)initWithDeviceLockController:(id)arg1;
- (void)invalidate;
- (void)setCachedLocalizedPlatformName:(id)arg1;
- (void)setDeviceLockController:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHandler:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)start;
- (id)subtitleText;
- (id)timer;
- (id)titleText;

@end
