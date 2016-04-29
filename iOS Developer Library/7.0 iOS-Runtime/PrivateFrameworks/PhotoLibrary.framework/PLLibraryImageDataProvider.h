/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary, PLImageCache, PLImageLoadingQueue;

@interface PLLibraryImageDataProvider : NSObject {
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    NSMutableDictionary *_imageSources;
}

- (id)_imageSourceForFormat:(int)arg1;
- (void)cancelLoadForAsset:(id)arg1 format:(int)arg2;
- (void)cancelLoadForAsset:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2;
- (void)invalidateCachedImagesForAsset:(id)arg1;
- (id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(id)arg5;
- (void)pauseLoading;
- (void)resumeLoading;

@end
