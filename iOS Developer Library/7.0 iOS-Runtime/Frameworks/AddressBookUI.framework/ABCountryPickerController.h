/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABCountryPickerControllerDelegate>, NSArray, NSString, UILocalizedIndexedCollation, UITableViewController;

@interface ABCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {
    UILocalizedIndexedCollation *_collation;
    NSArray *_countries;
    NSArray *_sections;
    NSString *_selectedCountryCode;
    UITableViewController *_tableViewController;
}

@property(retain) UILocalizedIndexedCollation * collation;
@property(copy) NSArray * countries;
@property(copy,readonly) NSString * debugDescription;
@property <ABCountryPickerControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * sections;
@property(copy) NSString * selectedCountryCode;
@property(readonly) Class superclass;
@property(retain) UITableViewController * tableViewController;

- (void)_configureSections;
- (void)_loadCountryCodes;
- (void)cancelPicker:(id)arg1;
- (id)collation;
- (id)countries;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (id)selectedCountryCode;
- (void)setCollation:(id)arg1;
- (void)setCountries:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
