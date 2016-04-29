/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;

- (void)_handleServiceMonitorNotification:(id)arg1;
- (BOOL)_isValidServiceType:(int)arg1;
- (void)_postNotificationForService:(int)arg1 availability:(int)arg2;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_stopListeningToMonitor:(id)arg1;
- (BOOL)addListenerID:(id)arg1 forService:(int)arg2;
- (int)availabilityForListenerID:(id)arg1 forService:(int)arg2;
- (id)containerForService:(int)arg1 create:(BOOL)arg2;
- (void)dealloc;
- (BOOL)hasListenerID:(id)arg1 forService:(int)arg2;
- (id)init;
- (BOOL)removeListenerID:(id)arg1 forService:(int)arg2;

@end
