/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_coreResult;
    NSArray *_subResultsCache;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } range;

+ (id)resultFromCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg1;
+ (id)resultsFromCoreResults:(struct __CFArray { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (struct { int x1; int x2; })cfRange;
- (id)contextualData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)coreResult;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (double)getDuration;
- (BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2;
- (BOOL)getMailValue:(id*)arg1 label:(id*)arg2;
- (BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2;
- (BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (id)matchedString;
- (void)offsetRangeBy:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)rawValue;
- (long)score;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSubResults:(id)arg1;
- (void)setType:(id)arg1;
- (id)subResults;
- (id)type;
- (id)value;
- (id)valueForUndefinedKey:(id)arg1;

@end
