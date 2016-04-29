/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SAStockNews : SADomainObject {
}

@property(copy) NSDate * timeStamp;
@property(copy) NSString * title;
@property(copy) NSString * url;

+ (id)news;
+ (id)newsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTimeStamp:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)timeStamp;
- (id)title;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)url;

@end
