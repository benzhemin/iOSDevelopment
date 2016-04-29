/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _acceleration;
    } _referenceAcceleration;
    } _referenceOffset;
}

@property(readonly) struct CGPoint { float x1; float x2; } acceleration;

- (struct UIOffset { float x1; float x2; })acceleratedOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg1 accelerationBoostFactor:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })acceleration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)reset;
- (void)setAcceleration:(struct CGPoint { float x1; float x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg2;

@end
