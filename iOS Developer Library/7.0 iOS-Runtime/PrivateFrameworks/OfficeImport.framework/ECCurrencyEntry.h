/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface ECCurrencyEntry : NSObject {
    boolmAppliesToExport;
    NSString *mLassoCurrencyCode;
    int mXlAccountingFormat;
    NSString *mXlCurrencySymbol;
    NSString *mXlLangId;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4 accountingFormat:(int)arg5;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3;

- (void)dealloc;
- (id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(bool)arg4 accountingFormat:(int)arg5;

@end