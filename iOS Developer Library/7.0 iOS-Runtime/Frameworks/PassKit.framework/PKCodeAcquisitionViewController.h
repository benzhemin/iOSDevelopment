/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKCodeAcquisitionDelegate>, NSMutableData, NSSet, NSString, NSURLConnection, PKCaptureSession, PKReticleView, UILabel, UINavigationBar, UIProgressView;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate> {
    UILabel *_captionLabel;
    PKCaptureSession *_captureSession;
    <PKCodeAcquisitionDelegate> *_delegate;
    NSURLConnection *_downloadConnection;
    NSMutableData *_downloadData;
    long long _downloadExpectedContentSize;
    UIProgressView *_downloadProgressView;
    UILabel *_errorLabel;
    UILabel *_helpLabel;
    UINavigationBar *_navBar;
    PKReticleView *_reticleView;
    NSSet *_supportedBarcodeTypes;
}

@property(copy,readonly) NSString * debugDescription;
@property <PKCodeAcquisitionDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_cleanupDownload;
- (void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2;
- (void)_handleDownloadFailureWithReason:(id)arg1;
- (void)_handleDownloadedPass:(id)arg1;
- (void)_handleFoundCode:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)_restartCaptureSession;
- (void)_setCaptureUIState:(int)arg1 animated:(BOOL)arg2;
- (void)cancel;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(BOOL)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
