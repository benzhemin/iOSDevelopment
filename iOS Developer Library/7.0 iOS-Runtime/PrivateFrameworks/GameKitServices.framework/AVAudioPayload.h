/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSArray;

@interface AVAudioPayload : NSObject {
    unsigned long bitrate;
    unsigned long blockSize;
    unsigned long bundleHeaderBytes;
    BOOL canBundle;
    BOOL canSetBitrate;
    unsigned long encodedBytesPerFrame;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; char *x6; int x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; char *x9; int x10; int x11; int x12; int x13; unsigned char x14; int x15; int x16; unsigned int x17; unsigned int x18; } *encoder;
    BOOL forcingBitrate;
    int format;
    int payload;
    unsigned long sampleRate;
    unsigned long samplesPerFrame;
    BOOL shouldLimitMaxPacketSize;
    BOOL shouldReset;
    NSArray *supportedBitrates;
    BOOL useSBR;
}

@property(readonly) unsigned long bitrate;
@property(readonly) unsigned long blockSize;
@property(readonly) unsigned long bundleHeaderBytes;
@property(readonly) BOOL canBundle;
@property(readonly) unsigned long encodedBytesPerFrame;
@property(readonly) int payload;
@property(readonly) unsigned long sampleRate;
@property(readonly) unsigned long samplesPerFrame;
@property(readonly) NSArray * supportedBitrates;
@property(readonly) BOOL useCookie;
@property BOOL useSBR;

+ (BOOL)isPayloadSupported:(int)arg1;

- (unsigned long)aacBitrate;
- (unsigned long)bitrate;
- (unsigned long)blockSize;
- (unsigned long)bundleHeaderBytes;
- (BOOL)canBundle;
- (BOOL)createEncoderWithInternalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)createSupportedBitrates;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForOpus;
- (void)dealloc;
- (int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (unsigned long)encodedBytesPerFrame;
- (unsigned int)flags;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned long)arg2;
- (int)payload;
- (float)qualityForBitRate:(unsigned long)arg1;
- (void)resetEncoder;
- (unsigned long)sampleRate;
- (unsigned long)samplesPerFrame;
- (BOOL)setBitrate:(unsigned long)arg1;
- (void)setInternalSampleRate:(unsigned long)arg1;
- (void)setUseSBR:(BOOL)arg1;
- (BOOL)setupEncodeProperties;
- (BOOL)setupInputProperties;
- (id)supportedBitrates;
- (BOOL)useCookie;
- (BOOL)useSBR;

@end
