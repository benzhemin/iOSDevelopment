/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKJoystickGestureRecognizerButtonDelegate>, CKJoystickGestureRecognizer, NSDate, UIButton;

@interface CKJoystickGestureRecognizerButton : NSObject {
    UIButton *_button;
    <CKJoystickGestureRecognizerButtonDelegate> *_delegate;
    NSDate *_gestureDidBeginDate;
    CKJoystickGestureRecognizer *_gestureRecognizer;
}

@property(retain) UIButton * button;
@property <CKJoystickGestureRecognizerButtonDelegate> * delegate;
@property(retain) NSDate * gestureDidBeginDate;
@property(retain) CKJoystickGestureRecognizer * gestureRecognizer;

+ (id)joystickGestureRecognizerButtonWithButton:(id)arg1;

- (id)button;
- (void)dealloc;
- (id)delegate;
- (id)gestureDidBeginDate;
- (void)gestureRecognized:(id)arg1;
- (id)gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureDidBeginDate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)touchDownButton:(id)arg1;
- (void)touchUpInsideButton:(id)arg1;
- (void)touchUpOutsideButton:(id)arg1;

@end
