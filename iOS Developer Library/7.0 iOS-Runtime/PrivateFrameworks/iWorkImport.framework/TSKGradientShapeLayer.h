/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAGradientLayer, CAShapeLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer {
    CAGradientLayer *_gradient;
    CAShapeLayer *_shapeMask;
}

@property(copy) NSArray * colors;
@property struct CGPoint { float x1; float x2; } endPoint;
@property(retain) CAGradientLayer * gradient;
@property(copy) NSArray * locations;
@property(retain) CAShapeLayer * shapeMask;
@property struct CGPoint { float x1; float x2; } startPoint;
@property(copy) NSString * type;

- (id)colors;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })endPoint;
- (id)gradient;
- (BOOL)isGradientTree;
- (id)locations;
- (void)p_createGradientTreeIfNeeded;
- (void)p_flatten;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillRule:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(float)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setLocations:(id)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShapeMask:(id)arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(float)arg1;
- (void)setStrokeStart:(float)arg1;
- (void)setType:(id)arg1;
- (id)shapeMask;
- (struct CGPoint { float x1; float x2; })startPoint;
- (id)type;

@end
