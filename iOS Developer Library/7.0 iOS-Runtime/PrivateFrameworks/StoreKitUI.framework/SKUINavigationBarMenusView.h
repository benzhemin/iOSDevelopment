/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SEL _buttonAction;
    id _buttonTarget;
    } _contentInset;
    NSArray *_menuViewElements;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;

+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
+ (void)requestLayoutWithMenus:(id)arg1 width:(int)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)layoutSubviews;
- (void)reloadWithMenus:(id)arg1 width:(int)arg2 context:(id)arg3;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
