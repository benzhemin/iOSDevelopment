/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTSiriEnabledPolicy : _VTStatePolicy {
    BOOL _enabled;
}

- (void)_registerForSiriEnabledUpdates;
- (void)_siriEnabledStateUpdated;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (BOOL)isEnabled;

@end
