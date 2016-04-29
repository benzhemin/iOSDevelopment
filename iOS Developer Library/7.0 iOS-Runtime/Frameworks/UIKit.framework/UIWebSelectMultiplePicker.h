/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSArray *_cachedItems;
    float _fontSize;
    float _layoutWidth;
    float _maximumTextWidth;
    DOMHTMLSelectElement *_selectionNode;
    unsigned int _singleSelectionIndex;
    <UIWebSelectedItemPrivate> *_singleSelectionItem;
    int _textAlignment;
}

@property(retain) NSArray * _cachedItems;
@property(retain) DOMHTMLSelectElement * _selectionNode;
@property(retain) <UIWebSelectedItemPrivate> * _singleSelectionItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_cachedItems;
- (int)_itemIndexForRowIndex:(int)arg1;
- (id)_selectionNode;
- (id)_singleSelectionItem;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned int)arg4 multipleSelection:(BOOL)arg5;
- (void)layoutSubviews;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)set_cachedItems:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (void)set_singleSelectionItem:(id)arg1;

@end
