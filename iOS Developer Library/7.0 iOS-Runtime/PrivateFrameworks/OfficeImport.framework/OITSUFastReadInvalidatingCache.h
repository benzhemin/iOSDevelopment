/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject {
    NSCondition *mCondition;
    id mGenerator;
    BOOL mIsGenerating;
    long long mReaderCount;
    BOOL mReentrant;
    NSArray *mToDispose;
    id mValue;
}

- (void)dealloc;
- (id)initForReentrant:(BOOL)arg1 withGenerator:(id)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
