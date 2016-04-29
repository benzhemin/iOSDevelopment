/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _WKElementAction : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    id _actionHandler;
    id _dismissalHandler;
    } _title;
    int _type;
}

@property(copy) id dismissalHandler;
@property(readonly) NSString * title;
@property(readonly) int type;

+ (id)elementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)elementActionWithType:(int)arg1 customTitle:(id)arg2;
+ (id)elementActionWithType:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(int)arg3;
- (void)_runActionWithElementInfo:(id)arg1 view:(id)arg2;
- (void)dealloc;
- (id)dismissalHandler;
- (void)setDismissalHandler:(id)arg1;
- (id)title;
- (int)type;

@end
