/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {
    int _inputsCount;
    NSMutableDictionary *_receivedBuffers;
    NSMutableDictionary *_sentErrorCountForID;
}

- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned long)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
