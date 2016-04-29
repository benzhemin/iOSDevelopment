/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURL;

@interface QLZipArchive : NSObject {
    struct archive { } *_archive;
    NSURL *_url;
}

- (BOOL)_reopenWithError:(id*)arg1;
- (void)dealloc;
- (void)enumerateEntriesWithHandler:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)libarchiveError;
- (id)readCurrentDataWithEntry:(struct archive_entry { }*)arg1 error:(id*)arg2;

@end
