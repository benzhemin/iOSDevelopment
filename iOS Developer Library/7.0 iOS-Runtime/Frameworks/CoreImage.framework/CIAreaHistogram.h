/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIContext, CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter {
    CIContext *_context;
    NSNumber *inputCount;
    CIVector *inputExtent;
    CIImage *inputImage;
    NSNumber *inputScale;
}

@property(retain) NSNumber * inputCount;
@property(retain) CIVector * inputExtent;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputScale;

+ (id)customAttributes;

- (id)_outputData:(BOOL)arg1;
- (void)dealloc;
- (id)inputCount;
- (id)inputExtent;
- (id)inputImage;
- (id)inputScale;
- (id)outputData;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCount:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
