/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkResizeUtility, NSCache, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {
    MPArtworkResizeUtility *_artworkResizeUtility;
    NSCache *_fallbackCache;
}

@property(retain) MPArtworkResizeUtility * artworkResizeUtility;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSCache * fallbackCache;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_bestSizeForArtworkCatalog:(id)arg1;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (BOOL)_isRepresentationSize:(struct CGSize { float x1; float x2; })arg1 validForFittingSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_representationAtSize:(struct CGSize { float x1; float x2; })arg1 forCatalog:(id)arg2;
- (id)_resizeArtwork:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 completionHandler:(id)arg3;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (BOOL)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (id)artworkResizeUtility;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)fallbackCache;
- (id)init;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (void)setArtworkResizeUtility:(id)arg1;
- (void)setFallbackCache:(id)arg1;

@end
