/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MCDCarDisplayServiceProvider>, MCDBrowserViewController, MPAVController, UIWindow;

@interface MCDRootController : NSObject {
    MCDBrowserViewController *_browserViewController;
    UIWindow *_carDisplayWindow;
    MPAVController *_player;
    <MCDCarDisplayServiceProvider> *_serviceProvider;
}

@property(readonly) UIWindow * carDisplayWindow;
@property(retain) MPAVController * player;
@property <MCDCarDisplayServiceProvider> * serviceProvider;

- (void).cxx_destruct;
- (id)carDisplayWindow;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 hostTabBarController:(id)arg2;
- (id)player;
- (id)serviceProvider;
- (void)setPlayer:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)showNowPlaying;

@end
