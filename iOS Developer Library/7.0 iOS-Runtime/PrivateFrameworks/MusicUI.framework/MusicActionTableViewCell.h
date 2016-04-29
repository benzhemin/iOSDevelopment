/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, UIImage;

@interface MusicActionTableViewCell : MusicTableViewCell {
}

@property(getter=isDisplayingAsDisabled) BOOL displayAsDisabled;
@property(retain) UIImage * image;
@property struct UIOffset { float x1; float x2; } imageOffset;
@property(copy) NSString * title;

+ (Class)contentViewClass;

- (id)_actionCellContentView;
- (id)image;
- (struct UIOffset { float x1; float x2; })imageOffset;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isDisplayingAsDisabled;
- (void)setDisplayAsDisabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;

@end
