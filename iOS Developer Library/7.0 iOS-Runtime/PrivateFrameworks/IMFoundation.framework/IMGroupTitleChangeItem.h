/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMGroupTitleChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    NSString *_title;
}

@property(retain) NSString * otherCountryCode;
@property(retain) NSString * otherHandle;
@property(retain) NSString * otherUnformattedID;
@property(retain) NSString * title;

- (id)_newChatItems;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
