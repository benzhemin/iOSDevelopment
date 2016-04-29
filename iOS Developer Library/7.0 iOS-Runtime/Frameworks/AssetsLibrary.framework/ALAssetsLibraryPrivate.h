/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, NSHashTable, NSMutableDictionary, PLPhotoLibrary;

@interface ALAssetsLibraryPrivate : NSObject {
    NSHashTable *_assetGroupInternals;
    ALAssetsLibrary *_assetsLibrary;
    NSMutableDictionary *_groupURLSByAlbumOID;
    BOOL _isValid;
    PLPhotoLibrary *_photoLibrary;
}

@property ALAssetsLibrary * assetsLibrary;
@property BOOL isValid;
@property(retain,readonly) PLPhotoLibrary * photoLibrary;

- (id)assetsLibrary;
- (void)dealloc;
- (id)initWithAssetsLibrary:(id)arg1;
- (BOOL)isValid;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerAlbum:(struct NSObject { Class x1; }*)arg1 assetGroupPrivate:(id)arg2;
- (void)setAssetsLibrary:(id)arg1;
- (void)setIsValid:(BOOL)arg1;

@end
