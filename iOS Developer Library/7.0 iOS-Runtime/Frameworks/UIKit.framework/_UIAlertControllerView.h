/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertController, UIAlertControllerVisualStyle, UICollectionView, UILabel, UIView, UIView<UIAlertControllerBackgroundView>, _UIAlertControllerActionView, _UIAlertControllerCollectionViewFlowLayout, _UIAlertControllerShadowedScrollView, _UIKeyboardLayoutAlignmentView;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UIScrollViewDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    UICollectionView *_actionCollectionView;
    UIAlertController *_alertController;
    BOOL _alignsToKeyboard;
    UIView<UIAlertControllerBackgroundView> *_backdropView;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSMutableArray *_backdropViewConstraints;
    NSLayoutConstraint *_backdropViewRightConstraint;
    BOOL _cancelActionIsDiscrete;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    _UIAlertControllerShadowedScrollView *_contentScrollView;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    UIView *_contentScrollViewContentView;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    UIView *_contentViewControllerContainerView;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    UIView *_dimmingView;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_dimmingViewConstraintsForAlertStyle;
    NSMutableArray *_dimmingViewForegroundViewBottomConstraints;
    NSMutableArray *_dimmingViewForegroundViewTopConstraints;
    _UIAlertControllerActionView *_discreteCancelActionView;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UIView *_foregroundView;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    BOOL _hasCachedLargestActionDimension;
    BOOL _hasDimmingView;
    NSLayoutConstraint *_heightConstraint;
    BOOL _inPopover;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    } _largestActionDimension;
    int _layoutOrientation;
    UILabel *_messageLabel;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSMutableArray *_noDimmingViewConstraints;
    UIView *_roundedCornersView;
    BOOL _shouldHaveBackdropView;
    BOOL _showsCancelAction;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    UIAlertControllerVisualStyle *_visualStyle;
    NSLayoutConstraint *_widthConstraint;
}

@property(readonly) UIView * _dimmingView;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;
@property(readonly) UIView * _foregroundView;
@property(setter=_setVisualStyle:,retain) UIAlertControllerVisualStyle * _visualStyle;
@property UIAlertController * alertController;
@property BOOL alignsToKeyboard;
@property(retain) NSLayoutConstraint * backdropViewBottomConstraint;
@property(retain) NSLayoutConstraint * backdropViewRightConstraint;
@property BOOL cancelActionIsDiscrete;
@property(retain) NSLayoutConstraint * centerXConstraint;
@property(retain) NSLayoutConstraint * centerYConstraint;
@property(retain) NSLayoutConstraint * collectionViewHeightConstraint;
@property(retain) NSLayoutConstraint * collectionViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * collectionViewWidthConstraint;
@property(retain) NSLayoutConstraint * contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint * contentViewBottomConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint * contentViewTopConstraint;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint * foregroundViewWidthConstraint;
@property BOOL hasDimmingView;
@property(readonly) unsigned int hash;
@property(retain) NSLayoutConstraint * heightConstraint;
@property BOOL inPopover;
@property int layoutOrientation;
@property(retain) NSLayoutConstraint * messageLabelTopAlignmentConstraint;
@property BOOL shouldHaveBackdropView;
@property BOOL showsCancelAction;
@property(readonly) Class superclass;
@property(retain) NSLayoutConstraint * titleLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint * widthConstraint;

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;

- (void)_UIAppearance_setAlignsToKeyboard:(BOOL)arg1;
- (void)_UIAppearance_setHasDimmingView:(BOOL)arg1;
- (void)_UIAppearance_setInPopover:(BOOL)arg1;
- (void)_UIAppearance_setShouldHaveBackdropView:(BOOL)arg1;
- (void)_UIAppearance_setShowsCancelAction:(BOOL)arg1;
- (void)_actionLayoutDirectionChanged;
- (BOOL)_actionLayoutIsVertical;
- (void)_actionsChanged;
- (id)_actionsForCollectionView;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (float)_availableWidthForHorizontalLayout:(BOOL)arg1;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (BOOL)_buttonsAreTopMost;
- (BOOL)_canLayOutActionsHorizontally;
- (struct CGSize { float x1; float x2; })_collectionViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_contentSizeChanged;
- (struct CGSize { float x1; float x2; })_contentViewControllerSize;
- (id)_dimmingView;
- (id)_flowLayout;
- (id)_foregroundView;
- (BOOL)_hasAttributedMessage;
- (BOOL)_hasAttributedTitle;
- (BOOL)_hasDiscreteCancelAction;
- (BOOL)_hasMessage;
- (BOOL)_hasTitle;
- (BOOL)_horizontalLayoutCanUseFullWidth;
- (float)_idealLayoutWidth;
- (float)_idealWidth;
- (void)_invalidateFlowLayout;
- (struct CGSize { float x1; float x2; })_itemSizeForHorizontalLayout:(BOOL)arg1;
- (float)_labelHorizontalInsets;
- (float)_layoutWidthForHorizontalLayout:(BOOL)arg1;
- (float)_marginBetweenContentAndDiscreteCancelAction;
- (struct CGSize { float x1; float x2; })_minimumSizeForAllActions;
- (int)_numberOfActionsForCollectionView;
- (id)_orderedActionsForCollectionView;
- (void)_prepareActionCollectionView;
- (void)_prepareBackdropViewConstraints;
- (void)_prepareCancelView;
- (void)_prepareContentScrollView;
- (void)_prepareContentView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareDimmingView;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareForegroundView;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareViewsAndAddConstraints;
- (void)_propertiesChanged;
- (void)_recomputeAlignedDescriptiveLabelTextWidth;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_removeContentViewController;
- (void)_removeDiscreteCancelActionView;
- (void)_setVisualStyle:(id)arg1;
- (BOOL)_shouldHaveCancelActionInCollectionView;
- (BOOL)_shouldTreatEmptyStringsAsNil;
- (struct CGSize { float x1; float x2; })_sizeForLayoutWidthDetermination;
- (void)_sizeOfContentViewControllerChanged;
- (void)_updateBackdrop;
- (void)_updateCellStyle:(id)arg1;
- (void)_updateCornerRadius;
- (void)_updateInsets;
- (void)_updateLabelFontSizes;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateStyle;
- (void)_updateVisualAltitude;
- (float)_verticalLayoutWidth;
- (id)_visualStyle;
- (BOOL)_wantsHorizontalActionSheet;
- (BOOL)_wantsHorizontalAlert;
- (BOOL)_wantsHorizontalCollectionViewLayout;
- (id)actions;
- (id)alertController;
- (BOOL)alignsToKeyboard;
- (id)backdropViewBottomConstraint;
- (id)backdropViewRightConstraint;
- (id)cancelAction;
- (BOOL)cancelActionIsDiscrete;
- (id)centerXConstraint;
- (id)centerYConstraint;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionViewHeightConstraint;
- (id)collectionViewTopAlignmentConstraint;
- (id)collectionViewWidthConstraint;
- (id)contentScrollViewBottomConstraint;
- (id)contentViewBottomConstraint;
- (id)contentViewController;
- (id)contentViewControllerContainerViewHeightConstraint;
- (id)contentViewControllerContainerViewTopAlignmentConstraint;
- (id)contentViewControllerContainerViewWidthConstraint;
- (id)contentViewControllerViewBottomConstraint;
- (id)contentViewControllerViewLeftConstraint;
- (id)contentViewControllerViewRightConstraint;
- (id)contentViewControllerViewTopConstraint;
- (id)contentViewTopConstraint;
- (void)dealloc;
- (id)defaultAction;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)discreteCancelActionViewHeightConstraint;
- (id)discreteCancelActionViewLeadingConstraint;
- (id)discreteCancelActionViewTopConstraint;
- (id)discreteCancelActionViewWidthConstraint;
- (id)foregroundViewWidthConstraint;
- (BOOL)hasDimmingView;
- (BOOL)hasDiscreteHorizontalCancelAction;
- (id)heightConstraint;
- (BOOL)inPopover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)layoutOrientation;
- (void)layoutSubviews;
- (id)message;
- (id)messageLabelTopAlignmentConstraint;
- (void)setAlertController:(id)arg1;
- (void)setAlignsToKeyboard:(BOOL)arg1;
- (void)setBackdropViewBottomConstraint:(id)arg1;
- (void)setBackdropViewRightConstraint:(id)arg1;
- (void)setCancelActionIsDiscrete:(BOOL)arg1;
- (void)setCenterXConstraint:(id)arg1;
- (void)setCenterYConstraint:(id)arg1;
- (void)setCollectionViewHeightConstraint:(id)arg1;
- (void)setCollectionViewTopAlignmentConstraint:(id)arg1;
- (void)setCollectionViewWidthConstraint:(id)arg1;
- (void)setContentScrollViewBottomConstraint:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setContentViewControllerViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerViewLeftConstraint:(id)arg1;
- (void)setContentViewControllerViewRightConstraint:(id)arg1;
- (void)setContentViewControllerViewTopConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewHeightConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewLeadingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewTopConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewWidthConstraint:(id)arg1;
- (void)setForegroundViewWidthConstraint:(id)arg1;
- (void)setHasDimmingView:(BOOL)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)setLayoutOrientation:(int)arg1;
- (void)setMessageLabelTopAlignmentConstraint:(id)arg1;
- (void)setShouldHaveBackdropView:(BOOL)arg1;
- (void)setShowsCancelAction:(BOOL)arg1;
- (void)setTintAdjustmentMode:(int)arg1;
- (void)setTitleLabelTopAlignmentConstraint:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (BOOL)shouldHaveBackdropView;
- (BOOL)showsCancelAction;
- (int)tintAdjustmentMode;
- (id)title;
- (id)titleLabelTopAlignmentConstraint;
- (void)updateDefaultAction;
- (id)widthConstraint;
- (void)willMoveToSuperview:(id)arg1;

@end
