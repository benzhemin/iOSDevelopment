/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface HAPCharacteristicReadCompletionTuple : NSObject {
    NSObject<OS_dispatch_queue> *_completionQueue;
    id _handler;
}

@property(retain) NSObject<OS_dispatch_queue> * completionQueue;
@property(copy) id handler;

+ (id)readCompletionTupleWithHandler:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)handler;
- (void)setCompletionQueue:(id)arg1;
- (void)setHandler:(id)arg1;

@end
