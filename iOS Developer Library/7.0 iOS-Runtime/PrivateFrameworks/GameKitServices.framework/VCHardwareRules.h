/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface VCHardwareRules : NSObject {
    BOOL decodeHiDef;
    int decodeScore;
    BOOL encodeHiDef;
    int encodeScore;
    NSString *machineName;
    NSMutableDictionary *supportedDecodingRules;
    NSMutableDictionary *supportedEncodingRules;
    NSMutableArray *supportedPayloads;
}

@property(readonly) BOOL decodeHiDef;
@property(readonly) int decodeScore;
@property(readonly) BOOL encodeHiDef;
@property(readonly) int encodeScore;
@property(readonly) NSString * machineName;
@property(readonly) NSMutableArray * supportedPayloads;

+ (id)VCHardwareRulesSingleton;

- (void)calculateDecodingScore;
- (void)calculateEncodingScore;
- (BOOL)canDoHiDefDecoding;
- (BOOL)canDoHiDefEncoding;
- (void)createSupportedPayloads;
- (void)createSupportedRuleSets;
- (void)dealloc;
- (BOOL)decodeHiDef;
- (int)decodeScore;
- (BOOL)encodeHiDef;
- (int)encodeScore;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (float)getBestDecodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (void)getBestDecodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (float)getBestEncodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (void)getBestEncodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5 forPayload:(int)arg6;
- (BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5;
- (void)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3 forPayload:(int)arg4;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3;
- (void)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (int)getCPUFamilyType;
- (id)getCPUTypeStringForMachineType:(int)arg1;
- (int)getHardwareScore;
- (int)getScoreFromHardwareInfo:(id)arg1 cpuFamily:(int)arg2 frequency:(int)arg3 numProcs:(int)arg4;
- (id)init;
- (BOOL)isGVAEncoderAvailable;
- (BOOL)isHiDefCapapable;
- (BOOL)isMacBookAirModel;
- (BOOL)isMachineNewerThanSandybridge:(int)arg1;
- (id)machineName;
- (void)resetEncodingRulesForCamera:(unsigned int)arg1;
- (void)setPreferredVideoRules;
- (id)supportedDecodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedDecodingRulesFromDictionaryForPayload:(int)arg1;
- (id)supportedDecodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedDecodingSizesFromDictionaryForPayload:(int)arg1;
- (id)supportedEncodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingRulesFromDictionaryForPayload:(int)arg1;
- (id)supportedEncodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingSizesFromDictionaryForPayload:(int)arg1;
- (id)supportedPayloads;
- (BOOL)useSoftFramerateSwitching;

@end
