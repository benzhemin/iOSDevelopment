/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIColor, UIImage;

@interface EKLegacyUIOccurrenceListItem : UIView {
    unsigned int _isAllDay : 1;
    unsigned int _isBirthday : 1;
    unsigned int _isFacebook : 1;
    unsigned int _tentative : 1;
    unsigned int _declined : 1;
    unsigned int _needsReply : 1;
    unsigned int _cancelled : 1;
    unsigned int _isEndDate : 1;
    unsigned int _indentsWithoutDot : 1;
    unsigned int _showsColors : 1;
    unsigned int _designator : 2;
    UIImage *_dot;
    UIColor *_dotColor;
    BOOL _isSelected;
    NSString *_location;
    NSString *_timeString;
    NSString *_title;
}

+ (void)_calculateWidths;
+ (void)_invalidateWidths;
+ (float)defaultHeight;
+ (float)hourWidth;
+ (float)timeWidthIncludingDots:(BOOL)arg1;
+ (float)xMidpointForCalendarDot;

- (void).cxx_destruct;
- (id)_dot;
- (id)_selectedBackgroundImage;
- (unsigned int)designator;
- (void)drawBoldText:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 forWidth:(float)arg3 font:(id)arg4 lineBreakMode:(int)arg5 staticColor:(BOOL)arg6;
- (void)drawDeemphasizedText:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 forWidth:(float)arg3 font:(id)arg4 lineBreakMode:(int)arg5 staticColor:(BOOL)arg6;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawText:(id)arg1 withDefaultColor:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 forWidth:(float)arg4 font:(id)arg5 lineBreakMode:(int)arg6 staticColor:(BOOL)arg7;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDay;
- (BOOL)isCancelled;
- (BOOL)isHighlighted;
- (id)outlineImageWithColor:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setDotColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIndentsForMissingDot:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setIsFacebook:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setShowsColors:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)setUpStaticDrawingColor;
- (BOOL)showDisclosure;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (void)updateWithEvent:(id)arg1;

@end
