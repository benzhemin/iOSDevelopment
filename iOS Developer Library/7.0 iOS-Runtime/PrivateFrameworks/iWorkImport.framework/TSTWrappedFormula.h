/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWrappedFormula : TSTFormula {
    int mFunctionIndex;
}

@property int functionIndex;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)functionIndex;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(id)arg2;
- (void)setFunctionIndex:(int)arg1;

@end
