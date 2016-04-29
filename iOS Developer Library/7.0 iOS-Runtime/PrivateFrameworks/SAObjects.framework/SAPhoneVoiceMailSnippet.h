/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAClientBoundCommand>, NSArray, NSNumber;

@interface SAPhoneVoiceMailSnippet : SAUISnippet {
}

@property(copy) NSNumber * autoPlay;
@property(copy) NSArray * calls;
@property(copy) NSArray * playVoiceMailCommands;
@property(retain) <SAClientBoundCommand> * postPlayCommand;

+ (id)voiceMailSnippet;
+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)autoPlay;
- (id)calls;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playVoiceMailCommands;
- (id)postPlayCommand;
- (void)setAutoPlay:(id)arg1;
- (void)setCalls:(id)arg1;
- (void)setPlayVoiceMailCommands:(id)arg1;
- (void)setPostPlayCommand:(id)arg1;

@end
