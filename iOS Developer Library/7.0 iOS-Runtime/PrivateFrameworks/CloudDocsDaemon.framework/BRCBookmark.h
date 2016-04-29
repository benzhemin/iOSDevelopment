/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCLocalContainer, BRCLocalItem, BRCRelativePath, NSData;

@interface BRCBookmark : NSObject {
    NSData *_bookmarkData;
    BRCLocalContainer *_container;
    BOOL _containsItemID;
    BOOL _dataResolved;
    BRCAccountSession *_session;
    BRCLocalItem *_target;
    BRCLocalContainer *_targetContainer;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
}

@property(readonly) BOOL containsItemID;
@property(readonly) BRCLocalItem * target;
@property(readonly) BRCLocalContainer * targetContainer;

+ (id)createName;

- (void).cxx_destruct;
- (void)_computeSignature:(unsigned char[32])arg1;
- (BOOL)_resolveDataWithError:(id*)arg1;
- (BOOL)_resolveTargetWithError:(id*)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (BOOL)containsItemID;
- (id)initWithRelpath:(id)arg1 session:(id)arg2;
- (id)initWithTarget:(id)arg1 owningContainer:(id)arg2 path:(id)arg3 session:(id)arg4;
- (BOOL)resolveWithError:(id*)arg1;
- (id)target;
- (id)targetContainer;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3;

@end
