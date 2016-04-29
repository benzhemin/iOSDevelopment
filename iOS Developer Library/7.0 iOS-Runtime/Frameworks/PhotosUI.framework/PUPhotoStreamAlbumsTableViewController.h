/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotoStreamsAlbumsTableViewControllerDelegate>, NSMutableSet, NSOrderedSet;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {
    NSOrderedSet *_albumsOrderedSet;
    BOOL _allowsMutlipleSelection;
    <PUPhotoStreamsAlbumsTableViewControllerDelegate> *_pickerDelegate;
    NSMutableSet *_selectedAlbumGuids;
}

@property BOOL allowsMutlipleSelection;
@property <PUPhotoStreamsAlbumsTableViewControllerDelegate> * pickerDelegate;

+ (id)_albumsComparator;
+ (struct NSObject { Class x1; }*)albumListForContentMode:(int)arg1;

- (void).cxx_destruct;
- (void)addSelectedCloudGuid:(id)arg1;
- (BOOL)allowsMutlipleSelection;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(int)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)pickerDelegate;
- (id)posterImageForAlbum:(struct NSObject { Class x1; }*)arg1 cell:(id)arg2;
- (void)reloadActions;
- (void)setAllowsMutlipleSelection:(BOOL)arg1;
- (void)setPickerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
