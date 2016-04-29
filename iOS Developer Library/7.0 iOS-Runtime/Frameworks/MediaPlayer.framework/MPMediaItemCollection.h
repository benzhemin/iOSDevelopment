/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity {
    unsigned int _containedMediaTypes;
    BOOL _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned int _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property(readonly) unsigned int count;
@property(readonly) int groupingType;
@property(readonly) NSArray * items;
@property(readonly) unsigned int mediaTypes;
@property(readonly) MPMediaItem * representativeItem;

+ (id)collectionWithItems:(id)arg1;
+ (id)representativePersistentIDPropertyForGroupingType:(int)arg1;
+ (id)sortTitlePropertyForGroupingType:(int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(int)arg1;

- (void).cxx_destruct;
- (BOOL)MPSD_hasDownloadableItem;
- (BOOL)MPSD_hasDownloadingItem;
- (id)__albumArtistArtworkCatalog;
- (id)__artistArtworkCatalog;
- (id)artworkCatalog;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (int)groupingType;
- (BOOL)hasDeletableContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (unsigned int)mediaTypes;
- (id)multiverseIdentifier;
- (id)representativeItem;

@end