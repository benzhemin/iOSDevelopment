/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKTextViewWithLabelTextMetrics, NSMutableArray, NSObject<EKEventDetailTitleCellDelegate>, UIButton, UIImage, UIImageView, UILabel;

@interface EKEventDetailTitleCell : EKEventDetailCell {
    NSMutableArray *_dateTimeViews;
    NSObject<EKEventDetailTitleCellDelegate> *_delegate;
    UIButton *_editButton;
    BOOL _hasLocationStatus;
    int _locationStatus;
    UIImage *_locationStatusImage;
    UIImageView *_locationStatusView;
    EKTextViewWithLabelTextMetrics *_locationView;
    BOOL _observingLocaleChanges;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UILabel *_titleView;
    UILabel *_travelTimeView;
    unsigned int _visibleItems;
}

@property NSObject<EKEventDetailTitleCellDelegate> * delegate;

+ (void)_invalidateCachedFonts;
+ (id)_locationFont;
+ (void)_registerForInvalidation;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_dateTimeViewForLine:(unsigned int)arg1;
- (id)_editButton;
- (id)_locationStatusView;
- (id)_locationView;
- (id)_recurrenceView;
- (void)_setDateTimeString:(id)arg1 line:(unsigned int)arg2;
- (id)_statusView;
- (id)_titleView;
- (id)_travelTimeView;
- (void)dealloc;
- (id)delegate;
- (void)editButtonTapped;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (BOOL)update;

@end
