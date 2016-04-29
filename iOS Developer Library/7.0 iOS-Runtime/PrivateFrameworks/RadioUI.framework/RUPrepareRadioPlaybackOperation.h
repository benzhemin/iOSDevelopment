/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLock, RURadioGetTracksOperation, RadioRequestContext, RadioStation;

@interface RUPrepareRadioPlaybackOperation : NSOperation {
    id _firstTrackBlock;
    RURadioGetTracksOperation *_getTracksOperation;
    NSLock *_lock;
    id _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
}

@property(copy) id preparedBlock;
@property(copy) RadioRequestContext * requestContext;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStation:(id)arg1;
- (void)main;
- (id)preparedBlock;
- (id)requestContext;
- (void)setPreparedBlock:(id)arg1;
- (void)setRequestContext:(id)arg1;

@end
