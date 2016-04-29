/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {
    struct CAARiseTransitSetDetails { 
        boolbRiseValid; 
        double Rise; 
        boolbTransitAboveHorizon; 
        double Transit; 
        boolbSetValid; 
        double Set; 
    double _julianDay;
    } _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_sunset;
}

@property(readonly) double julianDay;
@property(readonly) struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; } riseTransitSet;
@property(readonly) NSDate * sunrise;
@property(readonly) NSDate * sunset;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; })arg2;
- (double)julianDay;
- (struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; })riseTransitSet;
- (id)sunrise;
- (id)sunset;

@end
