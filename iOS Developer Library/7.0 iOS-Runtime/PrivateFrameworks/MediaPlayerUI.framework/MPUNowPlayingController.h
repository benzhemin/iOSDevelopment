/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUNowPlayingDelegate>, NSDictionary, NSObject<OS_dispatch_source>, NSString, UIImage;

@interface MPUNowPlayingController : NSObject {
    BOOL _cachedArtworkDirty;
    UIImage *_cachedNowPlayingArtwork;
    double _currentDuration;
    double _currentElapsed;
    NSString *_currentNowPlayingAppDisplayID;
    BOOL _currentNowPlayingAppIsRunning;
    NSDictionary *_currentNowPlayingInfo;
    <MPUNowPlayingDelegate> *_delegate;
    int _isPlaying;
    BOOL _isRegisteredForNowPlayingNotifications;
    BOOL _isUpdatingNowPlayingApp;
    BOOL _isUpdatingNowPlayingInfo;
    BOOL _isUpdatingPlaybackState;
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    double _timeInformationUpdateInterval;
}

@property(readonly) double currentDuration;
@property(readonly) double currentElapsed;
@property(readonly) UIImage * currentNowPlayingArtwork;
@property(readonly) NSDictionary * currentNowPlayingInfo;
@property <MPUNowPlayingDelegate> * delegate;
@property(readonly) BOOL isPlaying;
@property(readonly) NSString * nowPlayingAppDisplayID;
@property double timeInformationUpdateInterval;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_updateCurrentNowPlaying;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updatePlaybackState;
- (void)_updateTimeInformation;
- (double)currentDuration;
- (double)currentElapsed;
- (id)currentNowPlayingArtwork;
- (id)currentNowPlayingInfo;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isPlaying;
- (id)nowPlayingAppDisplayID;
- (void)setDelegate:(id)arg1;
- (void)setTimeInformationUpdateInterval:(double)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (double)timeInformationUpdateInterval;
- (void)update;

@end
