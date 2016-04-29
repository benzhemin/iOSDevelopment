/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics {
    unsigned int _columnsInLandscape;
    unsigned int _columnsInPortrait;
}

@property unsigned int columnsInLandscape;
@property unsigned int columnsInPortrait;

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned int)arg1 columnsInLandscape:(unsigned int)arg2 forIdiom:(int)arg3;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned int)arg1 columnsInLandscape:(unsigned int)arg2;

- (unsigned int)columnsInLandscape;
- (unsigned int)columnsInPortrait;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdiom:(int)arg1;
- (struct CGSize { float x1; float x2; })itemSizeForCollectionView:(id)arg1;
- (void)setColumnsInLandscape:(unsigned int)arg1;
- (void)setColumnsInPortrait:(unsigned int)arg1;

@end
