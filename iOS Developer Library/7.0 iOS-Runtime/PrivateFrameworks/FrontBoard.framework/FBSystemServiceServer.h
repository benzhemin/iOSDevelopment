/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceServer : BSBaseXPCServer {
}

+ (id)sharedInstance;

- (void)_handleActions:(id)arg1;
- (void)_handleActivateApplication:(id)arg1;
- (void)_handleActivateURL:(id)arg1;
- (void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2;
- (void)_handleCanActivateApplication:(id)arg1;
- (void)_handleConnect:(id)arg1 forClient:(id)arg2;
- (void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleIsClientLoggingEnabled:(id)arg1 forClient:(id)arg2;
- (void)_handlePidForApplication:(id)arg1;
- (void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2;
- (void)_handleShutdown:(id)arg1 forClient:(id)arg2;
- (void)_handleSystemApplicationBundleIdentifier:(id)arg1;
- (void)_handleTerminateApplication:(id)arg1;
- (void)_handleTerminateApplicationGroup:(id)arg1;
- (void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2;
- (id)_stringFromMessage:(id)arg1 key:(char *)arg2;
- (void)dealloc;
- (BOOL)ping;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;

@end
