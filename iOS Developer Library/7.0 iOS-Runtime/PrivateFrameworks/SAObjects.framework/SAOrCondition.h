/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAOrCondition : AceObject <SASupportCondition> {
}

@property(copy) NSArray * conditions;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)orCondition;
+ (id)orConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditions:(id)arg1;

@end
