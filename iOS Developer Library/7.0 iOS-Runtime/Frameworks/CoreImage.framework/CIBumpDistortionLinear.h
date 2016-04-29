/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIBumpDistortionLinear : CIFilter {
    NSNumber *inputAngle;
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputScale;
}

@property(retain) NSNumber * inputAngle;
@property(retain) CIVector * inputCenter;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputScale;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
