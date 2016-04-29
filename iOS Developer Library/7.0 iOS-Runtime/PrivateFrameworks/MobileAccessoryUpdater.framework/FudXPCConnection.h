/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface FudXPCConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    BOOL didStop;
    id messageHandler;
    int notifyToken;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)createConnection;
- (BOOL)createSession;
- (void)dealloc;
- (id)initWithClientName:(id)arg1 replyHandlerQueue:(id)arg2 messageHandler:(id)arg3;
- (BOOL)registerForBSDNotifications;
- (void)sendMessageToFud:(id)arg1 reply:(id)arg2;
- (void)sendMessageToFud:(id)arg1;
- (void)stop;

@end
