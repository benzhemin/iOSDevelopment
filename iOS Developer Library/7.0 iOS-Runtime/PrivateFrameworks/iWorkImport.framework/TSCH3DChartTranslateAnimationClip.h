/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTranslateAnimationClip : TSCH3DChartAnimationClip {
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    } mBegin;
    } mEnd;
}

@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } begin;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } end;

- (id).cxx_construct;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })begin;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })end;
- (void)setBegin:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)setEnd:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;

@end
