/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint> {
    TSTLayoutHint *mHint;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) TSTLayoutHint * hint;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)hint;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setHint:(id)arg1;

@end
