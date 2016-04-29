/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIVortexDistortion : CIFilter {
    NSNumber *inputAngle;
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property(retain) NSNumber * inputAngle;
@property(retain) CIVector * inputCenter;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
