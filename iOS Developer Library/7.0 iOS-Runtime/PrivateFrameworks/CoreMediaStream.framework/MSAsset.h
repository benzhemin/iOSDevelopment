/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <NSCoding>, NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying> {
    NSString *_GUID;
    NSString *_MMCSAccessHeader;
    NSDate *_MMCSAccessHeaderTimeStamp;
    NSString *_MMCSReceipt;
    NSURL *_MMCSURL;
    NSString *_assetCollectionGUID;
    BOOL _assetDataAvailableOnServer;
    NSDate *_batchCreationDate;
    NSError *_error;
    NSData *_fileData;
    NSData *_fileHash;
    NSData *_masterAssetHash;
    unsigned int _mediaAssetType;
    NSDictionary *_metadata;
    NSString *_path;
    NSDate *_photoCreationDate;
    unsigned long long _protocolFileSize;
    NSString *_type;
    <NSCoding> *_userInfo;
}

@property(retain) NSString * GUID;
@property(retain) NSString * MMCSAccessHeader;
@property(retain) NSDate * MMCSAccessHeaderTimeStamp;
@property(retain) NSError * MMCSError;
@property(retain) NSData * MMCSHash;
@property unsigned long MMCSItemFlags;
@property unsigned long long MMCSItemID;
@property unsigned long long MMCSItemSize;
@property(retain) NSString * MMCSReceipt;
@property(retain) NSURL * MMCSURL;
@property(retain) NSString * MMCSUTI;
@property(retain) NSString * assetCollectionGUID;
@property BOOL assetDataAvailableOnServer;
@property(retain) NSDate * batchCreationDate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(retain) NSData * fileData;
@property(retain) NSData * fileHash;
@property(readonly) unsigned int hash;
@property(retain) NSData * masterAssetHash;
@property unsigned int mediaAssetType;
@property(retain) NSDictionary * metadata;
@property(retain) NSString * path;
@property(retain) NSDate * photoCreationDate;
@property unsigned long long protocolFileSize;
@property(readonly) Class superclass;
@property(retain) NSString * type;
@property(retain) <NSCoding> * userInfo;

+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;
+ (id)asset;
+ (id)assetWithAsset:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)MMCSAccessHeader;
- (id)MMCSAccessHeaderTimeStamp;
- (id)MMCSError;
- (id)MMCSHash;
- (unsigned long)MMCSItemFlags;
- (unsigned long long)MMCSItemID;
- (unsigned long long)MMCSItemSize;
- (id)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
- (id)MMCSReceipt;
- (id)MMCSURL;
- (id)MMCSUTI;
- (id)MSASPProtocolDictionary;
- (unsigned long long)_fileSize;
- (unsigned long long)_fileSizeOnDisk;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)assetCollectionGUID;
- (BOOL)assetDataAvailableOnServer;
- (id)batchCreationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileData;
- (id)fileHash;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPhoto;
- (BOOL)isVideo;
- (id)masterAssetHash;
- (unsigned int)mediaAssetType;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (id)path;
- (id)photoCreationDate;
- (unsigned long long)protocolFileSize;
- (void)setAssetCollectionGUID:(id)arg1;
- (void)setAssetDataAvailableOnServer:(BOOL)arg1;
- (void)setBatchCreationDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileData:(id)arg1;
- (void)setFileHash:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
- (void)setMMCSAccessHeader:(id)arg1;
- (void)setMMCSAccessHeaderTimeStamp:(id)arg1;
- (void)setMMCSError:(id)arg1;
- (void)setMMCSHash:(id)arg1;
- (void)setMMCSItemFlags:(unsigned long)arg1;
- (void)setMMCSItemID:(unsigned long long)arg1;
- (void)setMMCSItemSize:(unsigned long long)arg1;
- (void)setMMCSReceipt:(id)arg1;
- (void)setMMCSURL:(id)arg1;
- (void)setMMCSUTI:(id)arg1;
- (void)setMasterAssetHash:(id)arg1;
- (void)setMediaAssetType:(unsigned int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setPath:(id)arg1;
- (void)setPhotoCreationDate:(id)arg1;
- (void)setProtocolFileSize:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)type;
- (id)userInfo;

@end
