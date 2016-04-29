/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotosGridDownloadHelper, PUPhotosGridViewController;

@interface PUUIImagePickerControllerHelper : NSObject {
    PUPhotosGridDownloadHelper *_downloadHelper;
    PUPhotosGridViewController *_gridViewController;
}

@property(readonly) PUPhotosGridViewController * gridViewController;

+ (int)albumFilterForMediaTypes:(id)arg1;
+ (id)albumListViewControllerSpec;
+ (id)gridViewControllerSpec;
+ (id)imagePickerControllerForViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(BOOL)arg2;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)cancelCurrentAssetDownload;
- (id)gridViewController;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)initWithGridViewController:(id)arg1;
- (void)updateSessionInfo;

@end
