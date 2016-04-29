/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBXpcConnectionDelegate>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>;

@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
    <CBXpcConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _type;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
}

@property(getter=isSetupOnUIThread,readonly) BOOL setupOnUIThread;

- (id)allocXpcArrayWithNSArray:(id)arg1;
- (id)allocXpcDictionaryWithNSDictionary:(id)arg1;
- (id)allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (id)allocXpcObjectWithNSObject:(id)arg1;
- (void)checkIn;
- (void)checkOut;
- (void)dealloc;
- (void)disconnect;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleFinalized;
- (void)handleInvalid;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleReset;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;
- (BOOL)isSetupOnUIThread;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)nsDictionaryFromXpcDictionary:(id)arg1 extraCapacity:(unsigned int)arg2;
- (id)nsObjectWithXpcObject:(id)arg1;
- (void)sendAsyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;

@end
