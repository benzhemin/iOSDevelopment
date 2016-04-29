/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray, NSMutableDictionary;

@interface CKDZoneGatekeeper : NSObject {
    NSMutableArray *_waiterWrappers;
    NSMutableDictionary *_zoneIDsToGateHolders;
}

@property(retain) NSMutableArray * waiterWrappers;
@property(retain) NSMutableDictionary * zoneIDsToGateHolders;

- (void).cxx_destruct;
- (BOOL)hasStatusToReport;
- (id)init;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(id)arg3;
- (void)relinquishLocksForWaiter:(id)arg1;
- (void)setWaiterWrappers:(id)arg1;
- (void)setZoneIDsToGateHolders:(id)arg1;
- (id)statusReport;
- (id)waiterWrappers;
- (id)zoneIDsToGateHolders;

@end
