/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

@interface ABPostalAddressEditorViewController : UITableViewController <ABPresenterDelegate, ABPropertyCellDelegate> {
    CNMutableContact *_contact;
    int _property;
    ABCardPropertyGroup *_propertyGroup;
    NSMutableArray *_propertyItems;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isPresentingModalViewController;
@property(readonly) Class superclass;

+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;

- (void)_rebuildPropertyGroupItems:(BOOL)arg1;
- (void)_startEditingFirstCell;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)defaultValueForPropertyCell:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithContact:(id)arg1 property:(int)arg2 editNames:(BOOL)arg3;
- (BOOL)isPresentingModalViewController;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)registerContactCellClass:(Class)arg1;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
