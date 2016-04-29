/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL mCellWraps;
    float mHeight;
    } mPaddingInsets;
    TSWPParagraphStyle *mParagraphStyle;
    NSString *mString;
    int mValueType;
    int mVerticalAlignment;
    float mWidth;
    int mWritingDirection;
}

@property(readonly) BOOL cellWraps;
@property(readonly) float height;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paddingInsets;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) NSString * string;
@property(readonly) int valueType;
@property(readonly) int verticalAlignment;
@property(readonly) float width;
@property(readonly) int writingDirection;

- (BOOL)cellWraps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (float)height;
- (id)initWithString:(id)arg1 width:(float)arg2 height:(float)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutContentCachedKey:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingInsets;
- (id)paragraphStyle;
- (id)string;
- (int)valueType;
- (int)verticalAlignment;
- (float)width;
- (int)writingDirection;

@end
