/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, NSString, UIImage;

@interface CKImageData : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _count;
    NSData *_data;
    struct CGImageSource { } *_imageSource;
    BOOL _initializedProperties;
    int _orientation;
    } _pxSize;
}

@property(copy,readonly) NSString * MIMEType;
@property(copy,readonly) NSString * UTIType;
@property(readonly) unsigned int count;
@property(retain) NSData * data;
@property(retain,readonly) UIImage * image;
@property(readonly) int orientation;
@property(readonly) struct CGSize { float x1; float x2; } ptSize;
@property(readonly) struct CGSize { float x1; float x2; } pxSize;

+ (id)UTITypeForData:(id)arg1;

- (id)MIMEType;
- (id)UTIType;
- (void)_initializeProperties;
- (id)_thumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (id)_thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (unsigned int)count;
- (id)data;
- (void)dealloc;
- (id)durationsWithMaxCount:(unsigned int)arg1;
- (id)image;
- (id)initWithData:(id)arg1;
- (int)orientation;
- (struct CGSize { float x1; float x2; })ptSize;
- (struct CGSize { float x1; float x2; })pxSize;
- (void)setData:(id)arg1;
- (id)thumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbnailFillToSizeCropping:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbnailsFillToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;
- (id)thumbnailsFitToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;

@end