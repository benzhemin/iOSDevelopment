/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDHint>;

@interface TNHintCacheEntry : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    <TSDHint> *mHint;
    BOOL mIsValid;
    } mOrigin;
}

@property(retain) <TSDHint> * hint;
@property struct CGPoint { float x1; float x2; } origin;
@property(getter=isValid) BOOL valid;

- (id)hint;
- (id)initWithHint:(id)arg1 origin:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)isValid;
- (struct CGPoint { float x1; float x2; })origin;
- (void)setHint:(id)arg1;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setValid:(BOOL)arg1;

@end
