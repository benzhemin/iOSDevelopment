/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate> {
    struct __CFArray { } *_addresses;
    struct __CFString { } *_countryCode;
    struct __CFArray { } *_identifiers;
    NSString *_searchTerm;
    struct __CFArray { } *_uids;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (int)property;

- (struct __CFArray { }*)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray {}**)arg2 identifiers:(const struct __CFArray {}**)arg3;
- (void)dealloc;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;

@end
