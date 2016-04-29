/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class NSObject<OS_dispatch_queue>;

@interface HMDPowerManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ethernetActive;
    BOOL _networkAccessRequired;
    unsigned int _powerAssertion;
    void *_scContext;
    struct __SCDynamicStore { } *_scStore;
    BOOL _started;
}

@property(getter=isNetworkAccessRequired) BOOL networkAccessRequired;

- (void).cxx_destruct;
- (long)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (void)_update;
- (void)dealloc;
- (id)init;
- (BOOL)isNetworkAccessRequired;
- (void)setNetworkAccessRequired:(BOOL)arg1;
- (void)start;
- (void)stop;

@end
