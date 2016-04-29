/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRunningCurve : NSObject {
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        BOOL tangentValid; 
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        BOOL tangentValid; 
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        BOOL tangentValid; 
    struct { 
        double mb[4][3]; 
    } _mb;
    BOOL _mbValid;
    } _p0;
    } _p1;
    } _pu;
    double _t0;
    double _t1;
    double _tu;
}

- (id).cxx_construct;
- (void)appendPosition:(struct VKPoint { double x1; double x2; double x3; })arg1 atTime:(double)arg2;
- (void)dealloc;
- (BOOL)hasStateAtTime:(double)arg1;
- (id)init;
- (void)reset;
- (struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; BOOL x3; })stateAtTime:(double)arg1;

@end
