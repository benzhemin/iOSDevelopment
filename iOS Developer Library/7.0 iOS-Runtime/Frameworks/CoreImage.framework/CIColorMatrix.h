/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {
    CIVector *inputAVector;
    CIVector *inputBVector;
    CIVector *inputBiasVector;
    CIVector *inputGVector;
    CIImage *inputImage;
    CIVector *inputRVector;
}

@property(retain) CIVector * inputAVector;
@property(retain) CIVector * inputBVector;
@property(retain) CIVector * inputBiasVector;
@property(retain) CIVector * inputGVector;
@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputRVector;

+ (id)customAttributes;

- (id)inputAVector;
- (id)inputBVector;
- (id)inputBiasVector;
- (id)inputGVector;
- (id)inputImage;
- (id)inputRVector;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAVector:(id)arg1;
- (void)setInputBVector:(id)arg1;
- (void)setInputBiasVector:(id)arg1;
- (void)setInputGVector:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRVector:(id)arg1;

@end
