/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKReaderViewControllerDelegate>, NSAttributedString, NSString, UITextView;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {
    <CKReaderViewControllerDelegate> *_delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

@property(copy,readonly) NSString * debugDescription;
@property <CKReaderViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * messageGUID;
@property(readonly) Class superclass;
@property(copy) NSAttributedString * text;
@property(retain) UITextView * textView;
@property struct _NSRange { unsigned int x1; unsigned int x2; } visibleRange;

- (BOOL)ckCanDismissWhenSuspending;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)messageGUID;
- (void)setDelegate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (id)text;
- (id)textView;
- (void)viewWillDisappear:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleRange;

@end
