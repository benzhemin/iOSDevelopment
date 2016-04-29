/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property float volume;

- (id)initWithIOUnit:(struct AVAudioIOUnit { int (**x1)(); id x2; struct AVAudioEngineImpl {} *x3; struct OpaqueAudioComponentInstance {} *x4; id x5; id x6; }*)arg1;
- (float)rate;
- (void)setRate:(float)arg1;

@end
