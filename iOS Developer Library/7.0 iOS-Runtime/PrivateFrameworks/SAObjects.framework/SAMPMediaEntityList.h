/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList {
}

@property int mediaType;
@property(retain) SAMPCollection * parentCollection;

+ (id)mediaEntityList;
+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)mediaType;
- (id)parentCollection;
- (void)setMediaType:(int)arg1;
- (void)setParentCollection:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
