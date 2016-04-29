/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageDescription : NSObject {
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentEdgeInsets;
    int _blendMode;
    } _edgeInsets;
    int _exifOrientation;
    int _idiom;
    int _imageType;
    int _resizingMode;
    float _scale;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    int _subtype;
    int _templateRenderingMode;
}

@property struct { float x1; float x2; float x3; float x4; } alignmentEdgeInsets;
@property int blendMode;
@property struct { float x1; float x2; float x3; float x4; } edgeInsets;
@property int exifOrientation;
@property int idiom;
@property int imageType;
@property BOOL isTemplate;
@property int resizingMode;
@property float scale;
@property int sizeClassHorizontal;
@property int sizeClassVertical;
@property int subtype;
@property int templateRenderingMode;

- (struct { float x1; float x2; float x3; float x4; })alignmentEdgeInsets;
- (int)blendMode;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)exifOrientation;
- (int)idiom;
- (int)imageType;
- (BOOL)isTemplate;
- (int)resizingMode;
- (float)scale;
- (void)setAlignmentEdgeInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setEdgeInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setIdiom:(int)arg1;
- (void)setImageType:(int)arg1;
- (void)setIsTemplate:(BOOL)arg1;
- (void)setResizingMode:(int)arg1;
- (void)setScale:(float)arg1;
- (void)setSizeClassHorizontal:(int)arg1;
- (void)setSizeClassVertical:(int)arg1;
- (void)setSubtype:(int)arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (int)subtype;
- (int)templateRenderingMode;

@end
