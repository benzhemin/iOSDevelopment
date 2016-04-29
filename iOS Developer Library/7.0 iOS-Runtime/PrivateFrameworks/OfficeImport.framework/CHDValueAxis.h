/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDValueAxis : CHDAxis {
    boolmAutoMajorUnitValue;
    boolmAutoMinorUnitValue;
    boolmPercentageFormattingFlag;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
}

- (void)adjustAxisPositionForHorizontalChart;
- (id)initWithResources:(id)arg1;
- (bool)isAutoMajorUnitValue;
- (bool)isAutoMinorUnitValue;
- (bool)isPercentageFormattingFlag;
- (double)majorUnitValue;
- (double)minorUnitValue;
- (double)scalingLogBase;
- (void)setMajorUnitValue:(double)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (void)setPercentageFormattingFlag:(bool)arg1;
- (void)setScalingLogBase:(double)arg1;

@end
