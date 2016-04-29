/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection, SBCClientConfiguration, SBCXPCServiceInterface;

@interface SBCXPCService : NSObject {
    SBCXPCServiceInterface *_XPCServiceInterface;
    id _applicationWillTerminateObserver;
    SBCClientConfiguration *_clientConfiguration;
    BOOL _isConnecting;
    NSMutableDictionary *_pendingReplyBlockCompletionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
    id _serviceProxy;
    NSXPCConnection *_xpcConnection;
}

@property(readonly) SBCXPCServiceInterface * XPCServiceInterface;
@property(readonly) id applicationWillTerminateObserver;
@property(readonly) SBCClientConfiguration * clientConfiguration;
@property(readonly) BOOL isConnecting;
@property(readonly) NSMutableDictionary * pendingReplyBlockCompletionHandlers;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) id serviceProxy;
@property(readonly) NSXPCConnection * xpcConnection;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;

- (void).cxx_destruct;
- (id)XPCServiceInterface;
- (void)_dequeueReplyBlockMessageWithEnqueuedToken:(id)arg1;
- (id)_enqueueReplyBlockMessageWithSelector:(SEL)arg1 withClientCompletionHandler:(id)arg2;
- (void)_invalidateOutstandingRequests:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;
- (void)_openServiceConnection;
- (id)_serviceProxy;
- (id)applicationWillTerminateObserver;
- (id)clientConfiguration;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (BOOL)isConnecting;
- (id)newServiceConnection;
- (id)pendingReplyBlockCompletionHandlers;
- (id)queue;
- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2 messageBlock:(id)arg3;
- (id)serviceProxy;
- (oneway void)setClientConfiguration:(id)arg1;
- (id)xpcConnection;

@end
