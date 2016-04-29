/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class <TRTCPConnectionDelegate>, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, TRTCPConnectionStream;

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _closed;
    TRTCPConnectionStream *_connectionStream;
    <TRTCPConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_source> *_keepAliveTimer;
    NSArray *_relevantPacketEventClasses;
    int _uniqueID;
}

@property(copy,readonly) NSString * debugDescription;
@property(readonly) <TRTCPConnectionDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) int uniqueID;

- (void).cxx_destruct;
- (void)_handleReceivedPacketEvent:(id)arg1;
- (id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2;
- (void)_performNextRead;
- (void)close;
- (void)connectionStreamDidClose:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)sendPacketEvent:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (int)uniqueID;

@end
