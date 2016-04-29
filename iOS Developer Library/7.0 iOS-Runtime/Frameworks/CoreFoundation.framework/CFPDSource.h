/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class CFPDDataBuffer, NSObject<OS_dispatch_queue>;

@interface CFPDSource : NSObject {
    unsigned int _dirty : 1;
    unsigned int _byHost : 1;
    unsigned int _managed : 1;
    unsigned int _neverCache : 1;
    unsigned int _checkedForNonPrefsPlist : 1;
    unsigned int _hasDrainedPendingChangesSinceLastReplyToOwner : 1;
    unsigned int _waitingForDeviceUnlock : 1;
    const char *_actualPath;
    struct __CFString { } *_containerPath;
    struct __CFString { } *_domain;
    short _generationShmemIndex;
    unsigned long long _inode;
    unsigned int _lastEgid;
    unsigned int _lastEuid;
    unsigned short _mode;
    int _owner;
    const char *_pathToTemporaryFileToWriteTo;
    struct __CFArray { } *_pendingChangesQueue;
    CFPDDataBuffer *_plist;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFString { } *_userName;
}

+ (void)synchronousWithSourceCache:(id)arg1;
+ (void)withSourceCache:(id)arg1;
+ (void)withSourceForDomain:(struct __CFString { }*)arg1 inContainer:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 perform:(id)arg6;

- (unsigned char)_backingPlistChangedSinceLastSync;
- (BOOL)acceptLocalMessage:(id)arg1 withReply:(struct __CFDictionary { }*)arg2;
- (id)acceptMessage:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)autosync:(BOOL)arg1;
- (BOOL)byHost;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPath;
- (void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)clearCache;
- (BOOL)clearCacheIfStale;
- (struct __CFString { }*)container;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (void)enqueueNewKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (BOOL)getUncanonicalizedPath:(char *)arg1;
- (BOOL)hasEverHadMultipleOwners;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6;
- (void)lockedAsync:(id)arg1;
- (void)lockedSync:(id)arg1;
- (BOOL)managed;
- (void)noteAccessed;
- (id)propertyList;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)removeOwner:(int)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setPlist:(id)arg1;
- (short)shmemIndex;
- (void)transitionToMultiOwner;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString { }*)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (BOOL)validateReadAccessToken:(int)arg1;
- (BOOL)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2 targetingContainer:(BOOL*)arg3;
- (void)writeToDisk:(BOOL)arg1;

@end
