/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    float _alpha;
    float _blue;
    float _green;
    float _red;
}

@property(readonly) float alpha;
@property(readonly) float blue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) float green;
@property(readonly) unsigned int hash;
@property(readonly) float red;
@property(readonly) Class superclass;

+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (BOOL)supportsSecureCoding;

- (float)alpha;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (float)green;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToColor:(id)arg1;
- (float)red;

@end
