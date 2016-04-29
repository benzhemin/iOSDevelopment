/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject {
}

@property(copy) NSArray * domainObjects;
@property(copy) NSNumber * selectedIndex;

+ (id)abstractItemList;
+ (id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjects;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)selectedIndex;
- (void)setDomainObjects:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
