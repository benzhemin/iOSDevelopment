/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

@interface _UIDynamicCaretInput : UIView <UIKBHandwritingStrokeEnabled> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    TIHandwritingStrokes *_accumulatedStrokes;
    struct CGContext { } *_bitmapContext;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
    int _fadeCount;
    NSTimer *_fadeTimer;
    } _inkedAreaOfBitmapContext;
    } _lastViewLoc;
}

@property(retain) TIHandwritingStrokes * accumulatedStrokes;
@property(retain) UIDelayedAction * committedAction;
@property(retain) _UIDynamicCaretDot * dotView;
@property(retain) NSTimer * fadeTimer;
@property(readonly) BOOL hasInk;
@property(readonly) float inkWidth;
@property(readonly) BOOL isInking;

- (void)_fadeInk;
- (id)accumulatedStrokes;
- (void)addInkPoint:(struct CGPoint { float x1; float x2; })arg1 fromLastPoint:(BOOL)arg2;
- (void)addTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearAndNotify:(BOOL)arg1;
- (void)clearFadeTimer;
- (id)committedAction;
- (void)committedStrokes;
- (void)dealloc;
- (id)dotView;
- (void)drawPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)fadeTimer;
- (BOOL)hasInk;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)inkWidth;
- (BOOL)isInking;
- (void)log;
- (void)send;
- (void)setAccumulatedStrokes:(id)arg1;
- (void)setCommittedAction:(id)arg1;
- (void)setDotView:(id)arg1;
- (void)setFadeTimer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)startTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
