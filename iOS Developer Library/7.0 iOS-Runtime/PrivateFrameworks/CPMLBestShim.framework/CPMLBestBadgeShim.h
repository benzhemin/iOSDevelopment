/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CPMLBestShim.framework/CPMLBestShim
 */

@class CDAttribute, CDSession, NSDictionary, NSMutableDictionary, NSMutableString;

@interface CPMLBestBadgeShim : CPMLBestShim {
    CDAttribute *cdBundleIdAttribute;
    CDSession *cdSession;
    NSDictionary *configPList;
    NSMutableDictionary *hysteresis;
    NSMutableDictionary *learnedWeights;
    NSMutableString *weightsPath;
}

@property(retain) CDAttribute * cdBundleIdAttribute;
@property(retain) CDSession * cdSession;
@property(retain) NSDictionary * configPList;
@property(retain) NSMutableDictionary * hysteresis;
@property(retain) NSMutableDictionary * learnedWeights;
@property(retain) NSMutableString * weightsPath;

+ (id)bestShim;
+ (id)bestShimWithDBPath:(id)arg1 withModelPath:(id)arg2 withPListPath:(id)arg3;

- (void).cxx_destruct;
- (id)cdBundleIdAttribute;
- (id)cdSession;
- (id)configPList;
- (void)feedback:(id)arg1 withItemsVisited:(id)arg2;
- (id)hysteresis;
- (id)learnedWeights;
- (id)rankItems:(id)arg1 withMetaInfo:(id)arg2 withNumOfRankItem:(unsigned int)arg3;
- (void)setCdBundleIdAttribute:(id)arg1;
- (void)setCdSession:(id)arg1;
- (void)setConfigPList:(id)arg1;
- (void)setHysteresis:(id)arg1;
- (void)setLearnedWeights:(id)arg1;
- (void)setWeightsPath:(id)arg1;
- (id)weightsPath;

@end
