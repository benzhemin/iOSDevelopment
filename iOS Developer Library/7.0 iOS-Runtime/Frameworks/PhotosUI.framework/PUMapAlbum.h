/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUMapAnnotationAnimatable>, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PUMapAlbum : NSObject <PLAlbumProtocol> {
    <PUMapAnnotationAnimatable> *_annotation;
    NSMutableOrderedSet *_assets;
    unsigned int _photosCount;
    BOOL _setKindCounts;
    unsigned int _videosCount;
}

@property(retain,readonly) <PUMapAnnotationAnimatable> * annotation;
@property(readonly) unsigned int approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property unsigned int batchSize;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(readonly) unsigned int hash;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFamilyCloudSharedAlbum;
@property(readonly) BOOL isFolder;
@property(readonly) BOOL isInTrash;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isRecentlyAddedAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isUserLibraryAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

- (void).cxx_destruct;
- (void)_calculateKindCounts;
- (id)annotation;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)endDate;
- (id)groupURL;
- (BOOL)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initWithAnnotation:(id)arg1;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRecentlyAddedAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isUserLibraryAlbum;
- (BOOL)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)secondaryKeyAsset;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startDate;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned int)videosCount;

@end
