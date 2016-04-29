/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceNearbyAppsViewControllerDelegate>, NSArray, NSString;

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKPlaceViewNearbyAppsCellDelegate> {
    <MKPlaceNearbyAppsViewControllerDelegate> *_nearbyAppsDelegate;
    NSArray *_storeItems;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <MKPlaceNearbyAppsViewControllerDelegate> * nearbyAppsDelegate;
@property(readonly) BOOL requiresPreferredContentSizeInStackingView;
@property(retain) NSArray * storeItems;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)init;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (id)nearbyAppsDelegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setNearbyAppsDelegate:(id)arg1;
- (void)setStoreItems:(id)arg1;
- (id)storeItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
