/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMExpandableMenuButtonDelegate>, NSIndexSet, NSMutableArray, NSMutableIndexSet, UIView;

@interface CAMExpandableMenuButton : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    NSMutableArray *__menuItems;
    <CAMExpandableMenuButtonDelegate> *_expandableMenuDelegate;
    BOOL _expanded;
    int _expansionOrientation;
    int _orientation;
    int _selectedIndex;
    } _tappableEdgeInsets;
}

@property(readonly) UIView * _headerView;
@property(copy,readonly) NSIndexSet * _hiddenIndexesWhileCollapsed;
@property(copy,readonly) NSMutableIndexSet * _highlightedIndexesWhileCollapsed;
@property(readonly) NSMutableArray * _menuItems;
@property <CAMExpandableMenuButtonDelegate> * expandableMenuDelegate;
@property(getter=isExpanded,readonly) BOOL expanded;
@property int expansionOrientation;
@property int orientation;
@property int selectedIndex;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;

+ (double)expansionDuration;

- (void).cxx_destruct;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemTextAlignmentForCurrentOrientation;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)_headerView;
- (id)_hiddenIndexesWhileCollapsed;
- (id)_highlightedIndexesWhileCollapsed;
- (struct CGSize { float x1; float x2; })_layoutForHorizontalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForHorizontalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForHorizontalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForHorizontalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForHorizontalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_layoutForVerticalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForVerticalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForVerticalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForVerticalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_layoutForVerticalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2;
- (id)_menuItems;
- (id)_selectedLabel;
- (void)_updateFromExpansionChangeAnimated:(BOOL)arg1;
- (void)_updateFromOrientationChangeAnimated:(BOOL)arg1;
- (void)_updateFromSelectedIndexChange;
- (BOOL)_wantsSelectedItemToBeVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 expanded:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)collapseMenuAnimated:(BOOL)arg1;
- (void)completeExpansionToProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)expandMenuAnimated:(BOOL)arg1;
- (id)expandableMenuDelegate;
- (int)expansionOrientation;
- (void)finishCollapsingAnimated:(BOOL)arg1;
- (void)finishExpansionAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 expanded:(BOOL)arg2;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (id)init;
- (id)initWithExpansionOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct CGSize { float x1; float x2; })intrinsicContentSizeForExpansion:(BOOL)arg1;
- (BOOL)isExpanded;
- (void)layoutSubviews;
- (int)numberOfMenuItems;
- (int)orientation;
- (void)reloadData;
- (int)selectedIndex;
- (void)setExpandableMenuDelegate:(id)arg1;
- (void)setExpansionOrientation:(int)arg1;
- (void)setHighlighted:(BOOL)arg1 forIndex:(int)arg2;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(int)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)shouldIgnoreMenuInteraction;
- (void)startCollapsingWithProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (void)updateToContentSize:(id)arg1;

@end
