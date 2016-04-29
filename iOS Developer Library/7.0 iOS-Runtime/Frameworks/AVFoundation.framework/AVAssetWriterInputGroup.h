/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInput, AVAssetWriterInputGroupInternal, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
    AVAssetWriterInputGroupInternal *_internal;
}

@property(readonly) AVAssetWriterInput * defaultInput;
@property(readonly) NSArray * inputs;

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;

- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultInput;
- (void)finalize;
- (id)init;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)inputs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;

@end
