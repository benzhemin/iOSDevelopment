/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSURL;

@interface PrefsUILinkLabel : UILabel {
    NSURL *_URL;
    SEL _action;
    id _target;
    BOOL _touchingURL;
    NSURL *_url;
}

@property(retain) NSURL * URL;
@property SEL action;
@property id target;

- (id)URL;
- (SEL)action;
- (id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)openURL:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setURL:(id)arg1;
- (void)tappedLink:(id)arg1;
- (id)target;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
