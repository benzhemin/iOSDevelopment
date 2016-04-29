/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFModernLabelledAtomListDelegate>, NSDictionary, NSMutableArray, NSString, UIColor, UILabel, UIView;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {
    unsigned int _needsReflow : 1;
    unsigned int _isChangingFrame : 1;
    NSMutableArray *_addressAtoms;
    void *_addressBook;
    UIView *_baselineView;
    <MFModernLabelledAtomListDelegate> *_delegate;
    float _firstLineWidth;
    UILabel *_label;
    UIColor *_labelTextColor;
    BOOL _labelVisible;
    float _lineSpacing;
    unsigned int _numberOfRows;
    BOOL _primary;
    NSDictionary *_recipients;
    NSString *_title;
    BOOL _usePadDisplayStyle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UILabel * label;
@property(retain) UIColor * labelTextColor;
@property(getter=isLabelVisible) BOOL labelVisible;
@property float lineSpacing;
@property(readonly) unsigned int numberOfRows;
@property BOOL primary;
@property(readonly) Class superclass;
@property BOOL usePadDisplayStyle;

+ (float)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (float)spaceBetweenColonAndFirstAtomNaturalEdge;

- (void)_reflow;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint { float x1; float x2; })baselinePointForRow:(unsigned int)arg1;
- (void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(id)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(float)arg3 firstLineWidth:(float)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned int)arg7 addressBook:(void*)arg8 completionBlock:(id)arg9;
- (BOOL)isLabelVisible;
- (id)label;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (float)lineSpacing;
- (unsigned int)numberOfRows;
- (id)passthroughViews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)primary;
- (void)setAddressAtomScale:(float)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAtomAlpha:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstLineWidth:(float)arg1 reflow:(BOOL)arg2;
- (void)setFirstLineWidth:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelVisible:(BOOL)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setPrimary:(BOOL)arg1;
- (void)setUsePadDisplayStyle:(BOOL)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (BOOL)usePadDisplayStyle;

@end
