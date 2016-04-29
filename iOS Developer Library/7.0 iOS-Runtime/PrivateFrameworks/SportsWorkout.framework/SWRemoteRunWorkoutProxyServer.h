/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class CPDistributedMessagingCenter, CPDistributedNotificationCenter, NSTimer, SWLocalRunWorkoutProxy;

@interface SWRemoteRunWorkoutProxyServer : NSObject {
    CPDistributedMessagingCenter *_messagingCenter;
    CPDistributedNotificationCenter *_notificationCenter;
    NSTimer *_propertyUpdateTimer;
    SWLocalRunWorkoutProxy *_workoutProxy;
}

- (void)_clientDidCheckin;
- (void)_handlePropertyUpdateTimer:(id)arg1;
- (void)_nowPlayingChanged:(id)arg1;
- (void)_postPropertyUpdateNotification;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_workoutStateChanged:(id)arg1;
- (void)activateWorkout;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)dealloc;
- (void)endSeeking;
- (void)endWorkout;
- (void)getGoing;
- (void)goToNowPlaying;
- (id)init;
- (void)pauseMusic;
- (void)pauseWorkout;
- (void)playMusic;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (void)prepareToActivateWorkout;
- (void)selectNextSong;
- (void)selectPreviousSong;

@end
