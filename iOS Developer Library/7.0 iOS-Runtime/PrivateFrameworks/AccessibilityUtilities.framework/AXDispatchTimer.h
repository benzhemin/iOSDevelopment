/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface AXDispatchTimer : NSObject <AXTimer> {
    BOOL _active;
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    BOOL _pending;
}

@property(getter=isActive) BOOL active;
@property BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(getter=isCancelled) BOOL cancelled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(retain) NSObject<OS_dispatch_source> * dispatchTimer;
@property(readonly) unsigned int hash;
@property(getter=isPending) BOOL pending;
@property(readonly) Class superclass;

- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2 cancelBlock:(id)arg3;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)dispatchQueue;
- (id)dispatchTimer;
- (id)init;
- (id)initWithTargetSerialQueue:(id)arg1;
- (BOOL)isActive;
- (BOOL)isCancelled;
- (BOOL)isPending;
- (void)setActive:(BOOL)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchTimer:(id)arg1;
- (void)setPending:(BOOL)arg1;

@end
