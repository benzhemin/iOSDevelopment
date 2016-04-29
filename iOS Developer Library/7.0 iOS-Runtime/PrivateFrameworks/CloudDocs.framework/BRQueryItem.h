/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying> {
    union { 
        struct { 
            unsigned int downloadStatus : 2; 
            unsigned int uploadStatus : 2; 
            unsigned int itemStatus : 2; 
            unsigned int conflicted : 1; 
            unsigned int document : 1; 
            unsigned int preCrashMarker : 1; 
            unsigned int isUploadActive : 1; 
            unsigned int isDownloadActive : 1; 
            unsigned int isDownloadRequested : 1; 
            unsigned int isAlias : 1; 
        } ; 
        unsigned short value; 
    NSMutableDictionary *_attrs;
    NSString *_containerID;
    unsigned short _diffs;
    NSNumber *_fileObjectID;
    } _flags;
    BOOL _isNetworkOffline;
    NSURL *_localRepresentationURL;
    long long _logicalHandle;
    NSString *_logicalName;
    NSNumber *_mtime;
    NSString *_parentPath;
    long long _physicalHandle;
    NSString *_physicalName;
    id _replacement;
    NSNumber *_size;
    NSURL *_url;
}

@property(readonly) NSString * containerID;
@property(readonly) unsigned short diffs;
@property(readonly) unsigned int downloadStatus;
@property(readonly) NSNumber * fileObjectID;
@property(readonly) BOOL hasTransferStatuses;
@property(readonly) BOOL isAlias;
@property(readonly) BOOL isConflicted;
@property(readonly) BOOL isDead;
@property(readonly) BOOL isDocument;
@property(readonly) BOOL isDownloadActive;
@property(readonly) BOOL isDownloadRequested;
@property(readonly) BOOL isInTransfer;
@property(readonly) BOOL isLive;
@property BOOL isNetworkOffline;
@property BOOL isPreCrash;
@property(readonly) BOOL isUploadActive;
@property(readonly) NSURL * localRepresentationURL;
@property(readonly) NSString * logicalName;
@property(readonly) NSNumber * mtime;
@property(readonly) NSString * parentPath;
@property(readonly) NSString * path;
@property(readonly) NSString * physicalName;
@property id replacement;
@property(readonly) NSNumber * size;
@property(readonly) unsigned int uploadStatus;
@property(readonly) NSURL * url;

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (void)_setAttr:(id)arg1 forKey:(id)arg2;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (void)clearDiffs;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned short)diffs;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)fileObjectID;
- (BOOL)hasTransferStatuses;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (id)initWithRelPath:(id)arg1 error:(id*)arg2;
- (BOOL)isAlias;
- (BOOL)isConflicted;
- (BOOL)isDead;
- (BOOL)isDocument;
- (BOOL)isDownloadActive;
- (BOOL)isDownloadRequested;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryItem:(id)arg1;
- (BOOL)isInTransfer;
- (BOOL)isLive;
- (BOOL)isNetworkOffline;
- (BOOL)isPreCrash;
- (BOOL)isUploadActive;
- (id)localRepresentationURL;
- (id)logicalName;
- (void)markDead;
- (void)merge:(id)arg1;
- (id)mtime;
- (id)parentPath;
- (id)path;
- (id)physicalName;
- (id)replacement;
- (void)setIsNetworkOffline:(BOOL)arg1;
- (void)setIsPreCrash:(BOOL)arg1;
- (void)setReplacement:(id)arg1;
- (void)setTransferAttribute:(id)arg1 forKey:(id)arg2 diff:(unsigned short)arg3;
- (id)size;
- (unsigned int)uploadStatus;
- (id)url;
- (id)valueForKey:(id)arg1;

@end
