/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface TSWPTwoPartAction : NSObject {
    id _cancelAction;
    id _finishAction;
    BOOL _performImmediately;
    id _startAction;
}

@property BOOL performImmediately;

+ (id)actionWithStartAction:(id)arg1 cancelAction:(id)arg2 finishAction:(id)arg3;

- (void)cancel;
- (void)dealloc;
- (id)initWithStartAction:(id)arg1 cancelAction:(id)arg2 finishAction:(id)arg3;
- (void)performFinishAction;
- (BOOL)performImmediately;
- (void)performStartAction;
- (void)setPerformImmediately:(BOOL)arg1;

@end
