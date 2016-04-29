/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADCountdownButton, ADInterstitialAd;

@interface ADInterstitialAdPresentationViewController : UIViewController {
    ADCountdownButton *_closeButton;
    ADInterstitialAd *_interstitialAd;
}

@property(retain) ADCountdownButton * closeButton;
@property(readonly) ADInterstitialAd * interstitialAd;

- (id)closeButton;
- (void)dealloc;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (void)setCloseButton:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)wantsFullScreenLayout;

@end
