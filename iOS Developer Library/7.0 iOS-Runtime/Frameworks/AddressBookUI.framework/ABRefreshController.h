/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ACAccountStore, NSMutableDictionary, NSTimer;

@interface ABRefreshController : NSObject {
    NSMutableDictionary *_accountGroupListsToRefreshByObserver;
    ACAccountStore *_accountStore;
    NSMutableDictionary *_contactsFiltersToRefreshByObserver;
    double _refreshDelay;
    NSTimer *_refreshTimer;
}

+ (id)sharedInstance;

- (BOOL)_acAccountExistsForIdentifier:(id)arg1;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void*)arg1;
- (void)_addObjectToRefresh:(id)arg1 withObserver:(void*)arg2 toDictionary:(id*)arg3;
- (void)_invalidateTimer;
- (void)_postponeAllRefreshes;
- (void)_proceedWithRefresh:(id)arg1;
- (void)_refreshACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_refreshGroupListForACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_resumeAllRefreshes;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)_setRefreshDelay:(double)arg1;
- (id)accountStore;
- (BOOL)canRefreshAccountIdentifier:(id)arg1;
- (BOOL)canRefreshContactsFilter:(id)arg1;
- (BOOL)canRefreshSources:(id)arg1;
- (void)cancelAllScheduledRefreshesWithObserver:(void*)arg1;
- (void)dealloc;
- (id)init;
- (void)refreshAccountGroupList:(id)arg1;
- (void)refreshContactsFilter:(id)arg1;
- (void)refreshEverythingNow;
- (id)refreshableAccountIdentifiersForContactsFilter:(id)arg1;
- (void)scheduleRefreshForAccountGroupList:(id)arg1 withObserver:(void*)arg2;
- (void)scheduleRefreshForContactsFilter:(id)arg1 withObserver:(void*)arg2;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1 afterDelay:(BOOL)arg2;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1;

@end
