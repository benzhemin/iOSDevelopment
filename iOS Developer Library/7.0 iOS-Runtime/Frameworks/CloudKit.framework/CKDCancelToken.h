/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CKDCancelToken : NSObject <CKDCancelling> {
    id _cancelAction;
    BOOL _isCancelled;
}

@property(copy) id cancelAction;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelAction;
- (BOOL)isCancelled;
- (void)setCancelAction:(id)arg1;

@end
