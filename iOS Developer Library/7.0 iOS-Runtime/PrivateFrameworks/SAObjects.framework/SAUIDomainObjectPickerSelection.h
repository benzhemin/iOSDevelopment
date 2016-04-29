/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection : SAStartRequest {
}

@property(retain) SAUIDomainObjectPicker * domainObjectPicker;
@property(retain) SADomainObject * selectedItem;

+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectPicker;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)selectedItem;
- (void)setDomainObjectPicker:(id)arg1;
- (void)setSelectedItem:(id)arg1;

@end
