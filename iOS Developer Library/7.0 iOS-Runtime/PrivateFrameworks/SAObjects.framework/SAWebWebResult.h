/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAWebWebResult : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * descriptionText;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property(copy) NSURL * url;

+ (id)webResult;
+ (id)webResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
