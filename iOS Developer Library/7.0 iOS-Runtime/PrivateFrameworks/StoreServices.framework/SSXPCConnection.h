/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface SSXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    id _disconnectBlock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _messageBlock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property(copy) id disconnectBlock;
@property(copy) id messageBlock;

- (id)_initSSXPCConnection;
- (void)_reloadEventHandler;
- (id)copyReplyQueue;
- (id)createXPCEndpoint;
- (void)dealloc;
- (id)disconnectBlock;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id)messageBlock;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendSynchronousMessage:(id)arg1 withReply:(id)arg2;
- (void)setDisconnectBlock:(id)arg1;
- (void)setMessageBlock:(id)arg1;
- (void)setReplyQueue:(id)arg1;

@end
