/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString, NSURL, SSURLBag;

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying> {
    SSURLBag *_bag;
    NSString *_domain;
    BOOL _domainDisabled;
    double _pollingIntervalInSeconds;
    NSURL *_pullAllKeyValueRequestURL;
    NSURL *_pullKeyValueRequestURL;
    NSURL *_pushAllKeyValueRequestURL;
    NSURL *_pushKeyValueRequestURL;
    NSURL *_syncRequestURL;
}

@property(retain) SSURLBag * bag;
@property(copy) NSString * domain;
@property BOOL domainDisabled;
@property double pollingIntervalInSeconds;
@property(retain) NSURL * pullAllKeyValueRequestURL;
@property(retain) NSURL * pullKeyValueRequestURL;
@property(retain) NSURL * pushAllKeyValueRequestURL;
@property(retain) NSURL * pushKeyValueRequestURL;
@property(retain) NSURL * syncRequestURL;

+ (id)ExtrasDomainIdentifier;
+ (id)UPPDomainIdentifier;
+ (void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(id)arg3 defaultValue:(id)arg4 completionBlock:(id)arg5;
+ (void)enumerateRequestURLBagKeysWithBlock:(id)arg1;
+ (void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(BOOL)arg3;
- (id)bag;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (BOOL)domainDisabled;
- (id)init;
- (id)initWithBag:(id)arg1 domain:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pollingIntervalInSeconds;
- (id)pullAllKeyValueRequestURL;
- (id)pullKeyValueRequestURL;
- (id)pushAllKeyValueRequestURL;
- (id)pushKeyValueRequestURL;
- (void)setBag:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainDisabled:(BOOL)arg1;
- (void)setPollingIntervalInSeconds:(double)arg1;
- (void)setPullAllKeyValueRequestURL:(id)arg1;
- (void)setPullKeyValueRequestURL:(id)arg1;
- (void)setPushAllKeyValueRequestURL:(id)arg1;
- (void)setPushKeyValueRequestURL:(id)arg1;
- (void)setSyncRequestURL:(id)arg1;
- (id)syncRequestURL;

@end
