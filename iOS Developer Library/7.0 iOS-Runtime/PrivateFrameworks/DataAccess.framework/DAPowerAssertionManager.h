/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject {
    NSMapTable *_contextToGroupIdentifier;
    NSMapTable *_contextToPowerAssertionRef;
    NSCountedSet *_contexts;
    NSMapTable *_groupIdentifierToContexts;
    NSCountedSet *_heldAsideContexts;
    NSMutableSet *_heldAsideGroupIdentifiers;
}

@property(retain) NSMapTable * contextToGroupIdentifier;
@property(retain) NSMapTable * contextToPowerAssertionRef;
@property(retain) NSCountedSet * contexts;
@property(retain) NSMapTable * groupIdentifierToContexts;
@property(retain) NSCountedSet * heldAsideContexts;
@property(retain) NSMutableSet * heldAsideGroupIdentifiers;

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (void).cxx_destruct;
- (void)_releaseAssertionForContext:(id)arg1;
- (void)_retainAssertionForContext:(id)arg1;
- (id)contextToGroupIdentifier;
- (id)contextToPowerAssertionRef;
- (id)contexts;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)groupIdentifierToContexts;
- (id)heldAsideContexts;
- (id)heldAsideGroupIdentifiers;
- (id)init;
- (unsigned int)powerAssertionRetainCount:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)setContextToGroupIdentifier:(id)arg1;
- (void)setContextToPowerAssertionRef:(id)arg1;
- (void)setContexts:(id)arg1;
- (void)setGroupIdentifierToContexts:(id)arg1;
- (void)setHeldAsideContexts:(id)arg1;
- (void)setHeldAsideGroupIdentifiers:(id)arg1;
- (id)stateString;

@end