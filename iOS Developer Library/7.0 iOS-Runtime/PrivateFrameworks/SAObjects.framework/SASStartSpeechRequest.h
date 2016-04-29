/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDictionary;

@interface SASStartSpeechRequest : SASStartSpeech {
}

@property BOOL eyesFree;
@property BOOL handsFree;
@property BOOL talkOnly;
@property(copy) NSDictionary * voiceTriggerEventInfo;
@property(copy) NSArray * voiceTriggerPhrases;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (BOOL)eyesFree;
- (id)groupIdentifier;
- (BOOL)handsFree;
- (void)setEyesFree:(BOOL)arg1;
- (void)setHandsFree:(BOOL)arg1;
- (void)setTalkOnly:(BOOL)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (void)setVoiceTriggerPhrases:(id)arg1;
- (BOOL)talkOnly;
- (id)voiceTriggerEventInfo;
- (id)voiceTriggerPhrases;

@end
