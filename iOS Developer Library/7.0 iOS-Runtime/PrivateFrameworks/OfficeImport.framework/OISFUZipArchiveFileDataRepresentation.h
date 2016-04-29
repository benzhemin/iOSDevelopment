/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    int mFd;
    OISFUFileDataRepresentation *mFileRepresentation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (long long)dataLength;
- (void)dealloc;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)isEncrypted;
- (BOOL)isReadable;
- (id)path;

@end
