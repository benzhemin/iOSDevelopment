/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface CKTranscriptRecipientCell : UITableViewCell {
    UIImage *_contactImage;
    UIImageView *_contactImageView;
    NSString *_entityName;
    UIButton *_facetimeVideoButton;
    UIButton *_infoButton;
    UILabel *_locationLabel;
    NSString *_locationString;
    UIButton *_mailButton;
    float _margin;
    UILabel *_nameLabel;
    UIButton *_phoneButton;
    BOOL _showFaceTimeVideoButton;
    BOOL _showInfoButton;
    BOOL _showMailButton;
    BOOL _showPhoneButton;
    BOOL _showsLocation;
    NSMutableArray *_visibleButtons;
}

@property(retain) UIImage * contactImage;
@property(retain) UIImageView * contactImageView;
@property(copy) NSString * entityName;
@property(retain) UIButton * facetimeVideoButton;
@property(retain) UIButton * infoButton;
@property(retain) UILabel * locationLabel;
@property(copy) NSString * locationString;
@property(retain) UIButton * mailButton;
@property float margin;
@property(retain) UILabel * nameLabel;
@property(retain) UIButton * phoneButton;
@property BOOL showFaceTimeVideoButton;
@property BOOL showInfoButton;
@property BOOL showMailButton;
@property BOOL showPhoneButton;
@property BOOL showsLocation;
@property(retain) NSMutableArray * visibleButtons;

+ (id)identifier;
+ (float)marginWidth;
+ (float)preferredHeight;

- (void)_updateVisibleButtons;
- (id)contactImage;
- (id)contactImageView;
- (void)dealloc;
- (id)entityName;
- (id)facetimeVideoButton;
- (id)infoButton;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)locationLabel;
- (id)locationString;
- (id)mailButton;
- (float)margin;
- (id)nameLabel;
- (id)phoneButton;
- (void)setContactImage:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setFacetimeVideoButton:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMailButton:(id)arg1;
- (void)setMargin:(float)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPhoneButton:(id)arg1;
- (void)setShowFaceTimeVideoButton:(BOOL)arg1;
- (void)setShowInfoButton:(BOOL)arg1;
- (void)setShowMailButton:(BOOL)arg1;
- (void)setShowPhoneButton:(BOOL)arg1;
- (void)setShowsLocation:(BOOL)arg1;
- (void)setVisibleButtons:(id)arg1;
- (BOOL)showFaceTimeVideoButton;
- (BOOL)showInfoButton;
- (BOOL)showMailButton;
- (BOOL)showPhoneButton;
- (BOOL)showsLocation;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)visibleButtons;

@end
