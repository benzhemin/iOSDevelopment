/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, SASPronunciationData;

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSNumber * errorCode;
@property(readonly) unsigned int hash;
@property(copy) NSString * interactionId;
@property(retain) SASPronunciationData * pronunciationData;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)listenForPronunciationCompleted;
+ (id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (id)interactionId;
- (id)pronunciationData;
- (void)setErrorCode:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setPronunciationData:(id)arg1;

@end
