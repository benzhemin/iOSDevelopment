/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MMCSPutFile : MMCSSimpleFile {
    id _block;
    id _updateBlock;
}

@property(copy) id completionBlock;
@property(copy) id progressUpdateBlock;

- (id)completionBlock;
- (void)dealloc;
- (id)progressUpdateBlock;
- (void)setCompletionBlock:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressUpdateBlock:(id)arg1;

@end
