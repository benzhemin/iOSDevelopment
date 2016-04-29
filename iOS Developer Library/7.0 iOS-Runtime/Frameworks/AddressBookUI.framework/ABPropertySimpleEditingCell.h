/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UITextField;

@interface ABPropertySimpleEditingCell : ABPropertyEditingCell <UITextFieldDelegate> {
    UITextField *_textField;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) UITextField * textField;

- (id)constantConstraints;
- (void)dealloc;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (id)textField;
- (void)textFieldChanged:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)valueView;
- (id)variableConstraints;

@end
