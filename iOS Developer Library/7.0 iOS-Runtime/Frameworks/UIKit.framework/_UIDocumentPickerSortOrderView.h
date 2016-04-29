/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISegmentedControl, _UIDocumentPickerViewServiceViewController;

@interface _UIDocumentPickerSortOrderView : UIControl {
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    UISegmentedControl *_sortOrder;
}

@property _UIDocumentPickerViewServiceViewController * serviceViewController;
@property(retain) UISegmentedControl * sortOrder;
@property int value;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)serviceViewController;
- (void)setServiceViewController:(id)arg1;
- (void)setSortOrder:(id)arg1;
- (void)setValue:(int)arg1;
- (id)sortOrder;
- (int)value;
- (void)valueChanged:(id)arg1;

@end
