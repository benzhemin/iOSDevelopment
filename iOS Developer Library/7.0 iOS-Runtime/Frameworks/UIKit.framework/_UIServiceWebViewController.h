/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, WebUIBrowserLoadingController, _UIServiceWebView;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {
    WebUIBrowserLoadingController *_loadingController;
    _UIServiceWebView *_uiWebView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (BOOL)_isInternalInstall;
- (id)_makeAlertView;
- (void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 decisionHandler:(id)arg4;
- (void)_remotelyDispatchDidDismissViewController;
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
- (void)browserLoadingControllerDidStartLoading:(id)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(id)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(id)arg1;
- (void)configureWithEncodedSettings:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)goBack;
- (void)goForward;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadEncodedRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadUserTypedAddress:(id)arg1;
- (void)loadView;
- (void)reload;
- (void)setShouldDecidePolicyRemotely:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)stopLoading;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
