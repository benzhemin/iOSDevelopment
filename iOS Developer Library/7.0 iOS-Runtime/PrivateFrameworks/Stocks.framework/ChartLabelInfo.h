/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString;

@interface ChartLabelInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _immutable;
    float _position;
    } _size;
    NSString *_string;
}

@property(readonly) BOOL immutable;
@property float position;
@property struct CGSize { float x1; float x2; } size;
@property(retain) NSString * string;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)immutable;
- (float)position;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setImmutable:(BOOL)arg1;
- (void)setPosition:(float)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setString:(id)arg1;
- (void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2;
- (void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2;
- (struct CGSize { float x1; float x2; })size;
- (id)string;

@end
