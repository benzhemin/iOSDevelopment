/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKColorize : SKAction {
    struct SKCColorize { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; struct { float x_22_1_1; float x_22_1_2; float x_22_1_3; float x_22_1_4; } x22; float x23; struct { float x_24_1_1; float x_24_1_2; float x_24_1_3; float x_24_1_4; } x24; float x25; struct { float x_26_1_1; float x_26_1_2; float x_26_1_3; float x_26_1_4; } x26; float x27; BOOL x28; } *_mycaction;
}

+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(float)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(float)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
