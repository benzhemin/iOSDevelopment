/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue;

@interface CKDPCSFetchAggregator : NSObject {
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSOperationQueue *_queue;
    NSMutableArray *_queuedFetches;
    NSMutableArray *_runningFetches;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property CKDClientContext * context;
@property(retain) NSObject<OS_dispatch_queue> * opQueue;
@property(retain) NSOperationQueue * queue;
@property(retain) NSMutableArray * queuedFetches;
@property(retain) NSMutableArray * runningFetches;
@property(retain) NSObject<OS_dispatch_source> * timerSource;

- (void).cxx_destruct;
- (void)_lockedFireReadyQueuedFetches;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1;
- (void)_lockedRescheduleQueuedFetchesTimer;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)opQueue;
- (id)queue;
- (id)queuedFetches;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id)arg3;
- (id)runningFetches;
- (void)setContext:(id)arg1;
- (void)setOpQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedFetches:(id)arg1;
- (void)setRunningFetches:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
