/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSCH3DAnimationTimings : TSCH3DAnimationTiming {
    NSMutableArray *mTimings;
}

+ (id)timings;

- (void)addTiming:(id)arg1 range:(const struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (void)addTiming:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)description;
- (void)evaluate:(float)arg1 context:(id)arg2;
- (id)init;

@end
