/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying> {
    NSMutableDictionary *_keyToMetrics;
    NSString *_layoutKey;
    NSMutableDictionary *_locationToKeyList;
}

@property(retain) NSMutableDictionary * keyToMetrics;
@property(retain) NSString * layoutKey;
@property(retain) NSMutableDictionary * locationToKeyList;

+ (id)metrics;

- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned int)arg3;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSupplementaryLocations:(id)arg1;
- (void)enumerateSupplementaryMetricsUsingBlock:(id)arg1;
- (id)init;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned int)arg3;
- (id)keyListForLocation:(unsigned int)arg1;
- (id)keyToMetrics;
- (id)layoutKey;
- (id)listForLocation:(unsigned int)arg1;
- (id)localDescription;
- (id)locationToKeyList;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned int)arg2 globalRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (int)prepareLayout:(id)arg1 startingAtSection:(int)arg2;
- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (void)setKeyToMetrics:(id)arg1;
- (void)setLayoutKey:(id)arg1;
- (void)setLocationToKeyList:(id)arg1;
- (id)supplementaryMetricsForKey:(id)arg1;

@end
