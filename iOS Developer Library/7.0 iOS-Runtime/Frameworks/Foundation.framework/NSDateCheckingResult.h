/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSDate *_date;
    double _duration;
    } _range;
    NSDate *_referenceDate;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
    BOOL _timeIsSignificant;
    NSTimeZone *_timeZone;
    id _underlyingResult;
}

@property(readonly) double duration;
@property(readonly) NSDate * referenceDate;
@property(readonly) BOOL timeIsApproximate;
@property(readonly) BOOL timeIsPast;
@property(readonly) BOOL timeIsSignificant;
@property(readonly) NSTimeZone * timeZone;
@property(readonly) void* underlyingResult;

- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)referenceDate;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;
- (BOOL)timeIsApproximate;
- (BOOL)timeIsPast;
- (BOOL)timeIsSignificant;
- (id)timeZone;
- (void*)underlyingResult;

@end
