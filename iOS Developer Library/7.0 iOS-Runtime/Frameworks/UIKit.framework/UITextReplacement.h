/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UITextRange;

@interface UITextReplacement : NSObject {
    NSString *_menuTitle;
    NSString *_originalText;
    UITextRange *_range;
    NSString *_replacementText;
    unsigned int _usageTrackingMask;
}

@property(readonly) NSString * menuTitle;
@property(readonly) NSString * originalText;
@property(readonly) UITextRange * range;
@property(readonly) NSString * replacementText;
@property unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (void)dealloc;
- (id)menuTitle;
- (id)originalText;
- (id)range;
- (id)replacementText;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (unsigned int)usageTrackingMask;

@end
