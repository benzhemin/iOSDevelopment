/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate> {
    int _profileToken;
    BOOL _showingChildViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)currentKeepMessages;
+ (BOOL)currentMessageAutoKeepForType:(int)arg1;
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;

- (BOOL)_allAccountsAreDeactivated;
- (BOOL)_isMadridAccountOperational;
- (BOOL)_isMadridSwitchOn;
- (BOOL)_isRaiseGestureSupported;
- (BOOL)_isSMSDevice;
- (id)_madridSettingsController;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabling;
- (void)_showMadridSetupIfNecessary:(BOOL)arg1;
- (void)_showMadridSetupIfNecessary;
- (id)_smsRelayDevicesController;
- (void)_startListeningForProfileChanges;
- (void)_stopListeningForProfileChanges;
- (id)_switchFooterText:(BOOL*)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (void)_updateUIWithError:(id)arg1;
- (id)areReadReceiptsEnabled:(id)arg1;
- (id)audioMessageSettingsSpecifierIdentifiers;
- (id)blacklistSettingsSpecifierIdentifiers;
- (id)bundle;
- (id)characterCountSpecifierIdentifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)deliveryReceiptSpecifierIdentifiers;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (id)genericSettingsSpecifierIdentifiers;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)getAudioMessageAutoKeep:(id)arg1;
- (id)getKeepMessages:(id)arg1;
- (id)getRaiseToListenEnabled:(id)arg1;
- (id)getSMSRelayDevicesSummary:(id)arg1;
- (id)getVideoMessageAutoKeep:(id)arg1;
- (id)init;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)isMMSEnabled:(id)arg1;
- (id)isMadridEnabled:(id)arg1;
- (id)logName;
- (id)madridAccountsSpecifierIdentifiers;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (void)newCarrierNotification;
- (id)raiseToListenSpecifierIdentifiers;
- (id)readReceiptSpecifierIdentifiers;
- (id)sendAsSMSIdentifiers;
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSpecifierLoading:(id)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setVideoMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldShowAudioMessageSettings;
- (BOOL)shouldShowBlacklistSettings;
- (BOOL)shouldShowCharacterCount;
- (BOOL)shouldShowDeliveryReceipts;
- (BOOL)shouldShowGenericSettings;
- (BOOL)shouldShowMadridAccounts;
- (BOOL)shouldShowMadridSignin;
- (BOOL)shouldShowMadridSwitch;
- (BOOL)shouldShowRaiseToListenSwitch;
- (BOOL)shouldShowReadReceipts;
- (BOOL)shouldShowSMSRelaySettings;
- (BOOL)shouldShowSendAsSMS;
- (BOOL)shouldShowVideoMessageSettings;
- (id)smsRelaySettingsSpecifierIdentifiers;
- (id)specifiers;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)videoMessageSettingsSpecifierIdentifiers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsWiFiChooser;
- (id)willSendGroupMMS:(id)arg1;

@end
