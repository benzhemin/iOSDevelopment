/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MCProfileConnection, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsAccountModification;
    BOOL _allowsDeletion;
    BOOL _allowsExplicitContent;
    BOOL _allowsRadioPurchases;
    BOOL _allowsStorePurchases;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
}

@property(readonly) BOOL allowsAccountModification;
@property(readonly) BOOL allowsDeletion;
@property(readonly) BOOL allowsExplicitContent;
@property(readonly) BOOL allowsRadioPurchases;
@property(readonly) BOOL allowsStorePurchases;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (BOOL)_isRunningInStoreDemoMode;
- (void)_updateWithCanPostNotifications:(BOOL)arg1;
- (BOOL)allowsAccountModification;
- (BOOL)allowsDeletion;
- (BOOL)allowsExplicitContent;
- (BOOL)allowsRadioPurchases;
- (BOOL)allowsStorePurchases;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)arg1;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
