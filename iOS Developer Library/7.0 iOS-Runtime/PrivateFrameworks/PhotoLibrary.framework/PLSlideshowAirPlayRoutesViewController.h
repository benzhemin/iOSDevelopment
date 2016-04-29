/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, NSString, UITableView, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_airplayRoutes;
    UIView *_containerView;
    unsigned int _selectedRouteIndex;
    UITableView *_table;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property unsigned int selectedRouteIndex;
@property(readonly) Class superclass;

- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned int)arg2;
- (void)loadView;
- (unsigned int)selectedRouteIndex;
- (void)setSelectedRouteIndex:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
