/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSIndexSet, NSString;

@interface GQDTNumberFormat : NSObject <GQDNameMappable> {
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    struct __CFString { } *mCurrencyCode;
    long mDecimalPlaces;
    unsigned char mDecimalWidth;
    BOOL mFormatContainsIntegerToken;
    BOOL mFormatContainsSpecialTokens;
    struct __CFString { } *mFormatString;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    int mFractionAccuracy;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    NSArray *mInterstitialStrings;
    BOOL mIsCustom;
    BOOL mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    int mNegativeStyle;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    BOOL mRequiresFractionReplacement;
    double mScaleFactor;
    BOOL mShowThousandsSeparator;
    struct __CFString { } *mSuffixString;
    char *mUid;
    BOOL mUseAccountingStyle;
    BOOL mUseScientificFormattingAutomatically;
    int mValueType;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString { }*)arg1;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9;

- (id)baseStringFromDouble:(double)arg1;
- (struct __CFString { }*)createStringFromDouble:(double)arg1;
- (id)currencyCode;
- (id)customNumberFormatTokens;
- (void)dealloc;
- (id)formatString;
- (int)fractionAccuracy;
- (id)fractionStringFromDouble:(double)arg1;
- (BOOL)hasValidDecimalPlaces;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23;
- (BOOL)isCustom;
- (BOOL)isTextFormat;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (BOOL)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1;
- (BOOL)useAccountingStyle;
- (int)valueType;

@end
