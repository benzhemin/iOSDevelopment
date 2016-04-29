/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {
    IDSAccount *_idsAccount;
}

@property(retain,readonly) IDSAccount * idsAccount;

- (id)accountDefaults;
- (void)dealloc;
- (id)idsAccount;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;
- (void)writeAccountDefaults:(id)arg1;

@end
