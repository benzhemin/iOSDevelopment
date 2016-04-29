/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDFormula, EDResources, OADGraphicProperties;

@interface CHDTrendlineLabel : NSObject {
    boolmAutomaticLabelDeleted;
    boolmGeneratedText;
    unsigned int mContentFormatId;
    OADGraphicProperties *mGraphicProperties;
    unsigned int mLastCachedNameStringIndex;
    CHDFormula *mName;
    EDResources *mResources;
}

+ (id)trendlineLabelWithResources:(id)arg1;

- (id)contentFormat;
- (unsigned int)contentFormatId;
- (void)dealloc;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isAutomaticLabelDeleted;
- (bool)isGeneratedText;
- (id)lastCachedName;
- (id)name;
- (void)setAutomaticLabelDeleted:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setGeneratedText:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;
- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;

@end
