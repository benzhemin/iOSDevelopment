/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCalendar, NSLocale, NSObject<OS_dispatch_semaphore>, NSString, NSTimeZone;

@interface NSDateIntervalFormatter : NSFormatter {
    NSCalendar *_calendar;
    unsigned int _dateStyle;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    void *_formatter;
    NSLocale *_locale;
    NSObject<OS_dispatch_semaphore> *_lock;
    BOOL _modified;
    void *_reserved[4];
    unsigned int _timeStyle;
    NSTimeZone *_timeZone;
    BOOL _useTemplate;
}

@property(copy) NSCalendar * calendar;
@property unsigned int dateStyle;
@property(copy) NSString * dateTemplate;
@property(copy) NSLocale * locale;
@property unsigned int timeStyle;
@property(copy) NSTimeZone * timeZone;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dateStyle;
- (id)dateTemplate;
- (void)dealloc;
- (id)editingStringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (id)locale;
- (void)setCalendar:(id)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (void)setDateTemplate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (unsigned int)timeStyle;
- (id)timeZone;

@end
