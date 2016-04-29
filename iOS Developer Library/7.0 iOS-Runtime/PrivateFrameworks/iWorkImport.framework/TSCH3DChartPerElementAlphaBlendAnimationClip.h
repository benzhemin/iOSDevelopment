/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPerElementAlphaBlendAnimationClip : TSCH3DChartAlphaBlendAnimationClip {
    struct box<glm::detail::tvec1<float> > { 
        struct tvec1<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
        } mMin; 
        struct tvec1<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
        } mMax; 
    } mAlphaBlendRange;
}

@property struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; } alphaBlendRange;

- (id).cxx_construct;
- (struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })alphaBlendRange;
- (void)protected_addShaderEffect:(id)arg1;
- (float)protected_elementAlphaForContext:(id)arg1;
- (void)setAlphaBlendRange:(struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })arg1;

@end
