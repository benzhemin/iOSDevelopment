/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSTEphemeralFilter : NSObject {
    unsigned char mColumnIndex;
    BOOL mEnabled;
    unsigned int mFilterIndex;
    NSArray *mRules;
}

@property(readonly) unsigned char columnIndex;
@property(readonly) BOOL enabled;
@property(readonly) unsigned int filterIndex;
@property(readonly) unsigned int ruleCount;

+ (id)filterWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(BOOL)arg4;

- (unsigned char)columnIndex;
- (void)dealloc;
- (id)description;
- (BOOL)enabled;
- (id)filterByAddingRule:(id)arg1;
- (id)filterByRemovingRuleAtIndex:(unsigned int)arg1;
- (unsigned int)filterIndex;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(BOOL)arg4;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;

@end
