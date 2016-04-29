/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLContentRating, MLMovieProperties, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface MLTrackImport : NSObject <NSCopying> {
    NSData *_artworkData;
    NSString *_assetFilePath;
    BOOL _assignArtworkCacheIDFromAlbum;
    NSArray *_chapters;
    NSMutableDictionary *_properties;
    BOOL _shouldAddToPurchasedPlaylist;
}

@property(copy) NSData * artworkData;
@property(copy) NSString * assetFilePath;
@property BOOL assignArtworkCacheIDFromAlbum;
@property(copy) NSArray * chapters;
@property(copy) MLContentRating * contentRating;
@property(copy,readonly) NSDictionary * entityProperties;
@property unsigned long mediaType;
@property(copy) MLMovieProperties * movieProperties;
@property BOOL shouldAddToPurchasedPlaylist;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addSortStrings;
- (id)artworkData;
- (id)assetFilePath;
- (BOOL)assignArtworkCacheIDFromAlbum;
- (id)chapters;
- (id)contentRating;
- (id)copyEntityProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityProperties;
- (id)init;
- (unsigned long)mediaType;
- (id)movieProperties;
- (void)normalizeEntityProperties;
- (void)setArtworkData:(id)arg1;
- (void)setAssetFilePath:(id)arg1;
- (void)setAssignArtworkCacheIDFromAlbum:(BOOL)arg1;
- (void)setChapters:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setMediaType:(unsigned long)arg1;
- (void)setMovieProperties:(id)arg1;
- (void)setShouldAddToPurchasedPlaylist:(BOOL)arg1;
- (void)setValue:(id)arg1 forEntityProperty:(id)arg2;
- (BOOL)shouldAddToPurchasedPlaylist;
- (id)valueForEntityProperty:(id)arg1;

@end
