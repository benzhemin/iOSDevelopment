/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNSocialProfile, NSString;

@interface ABPropertySocialProfileEditingCell : ABPropertySimpleEditingCell <ABPickerControllerDelegate> {
    NSString *_previousValue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) CNSocialProfile * profile;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)profile;
- (struct { id x1; unsigned int x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;

@end
