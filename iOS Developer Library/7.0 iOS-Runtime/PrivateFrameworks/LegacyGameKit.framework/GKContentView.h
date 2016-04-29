/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@class NSArray, NSString, UIActivityIndicatorView, UIButton, UIFont, UIImage, UIImageView, UILabel, UITableView;

@interface GKContentView : UIView {
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_cancelButton;
    NSArray *_connectionButtons;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    BOOL _needsLayout;
    UIButton *_otherButton;
    UITableView *_table;
    UIImageView *_tableWellView;
    UILabel *_titleLabel;
}

@property(retain) UIActivityIndicatorView * activityIndicator;
@property(retain) UIButton * cancelButton;
@property(retain,readonly) NSArray * connectionButtons;
@property UIImage * icon;
@property(retain) UIImageView * iconView;
@property NSString * message;
@property(readonly) UIFont * messageFont;
@property(retain) UILabel * messageLabel;
@property int numberOfMessageLines;
@property int numberOfTitleLines;
@property(retain) UIButton * otherButton;
@property(retain,readonly) UITableView * table;
@property NSString * title;
@property(readonly) UIFont * titleFont;
@property(retain) UILabel * titleLabel;

+ (float)maxTextWidth;

- (id)_createButton:(BOOL)arg1;
- (void)_createCancelButtonWithTitle:(id)arg1;
- (id)_createConnectionButtonWithType:(unsigned int)arg1;
- (void)_createMessageLabelIfNeeded;
- (void)_createOtherButtonWithTitle:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (id)activityIndicator;
- (id)cancelButton;
- (id)connectionButtons;
- (void)dealloc;
- (id)icon;
- (id)iconView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)layout;
- (void)layoutIfNeeded;
- (id)message;
- (id)messageFont;
- (id)messageLabel;
- (int)numberOfMessageLines;
- (int)numberOfTitleLines;
- (id)otherButton;
- (void)setActivityIndicator:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConnectionButtonTypes:(unsigned int)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setNumberOfMessageLines:(int)arg1;
- (void)setNumberOfTitleLines:(int)arg1;
- (void)setOtherButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showActivityIndicator:(BOOL)arg1;
- (id)table;
- (id)title;
- (id)titleFont;
- (id)titleLabel;

@end
