/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSManagedObjectContext, NSSet, NSString, PLPhotoLibrary;

@interface PHChangeValidationController : NSObject {
    NSArray *_albumsToDelete;
    NSArray *_assetsToChangeContent;
    NSArray *_assetsToDelete;
    NSArray *_assetsToHide;
    NSArray *_assetsToRevert;
    NSString *_clientName;
    BOOL _confirmationRequired;
    NSSet *_deleteRequests;
    BOOL _didPrepare;
    NSArray *_foldersToDelete;
    NSSet *_insertRequests;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_renderedContentURLs;
    NSSet *_updateRequests;
}

@property(readonly) NSArray * albumsToDelete;
@property(readonly) NSArray * assetsToChangeContent;
@property(readonly) NSArray * assetsToDelete;
@property(readonly) NSArray * assetsToHide;
@property(readonly) NSArray * assetsToRevert;
@property(copy,readonly) NSString * clientName;
@property(readonly) BOOL confirmationRequired;
@property(readonly) NSSet * deleteRequests;
@property(readonly) NSArray * foldersToDelete;
@property(readonly) NSSet * insertRequests;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) NSArray * renderedContentURLs;
@property(readonly) NSSet * updateRequests;

- (void).cxx_destruct;
- (BOOL)_prepareWithError:(id*)arg1;
- (id)albumsToDelete;
- (id)assetsToChangeContent;
- (id)assetsToDelete;
- (id)assetsToHide;
- (id)assetsToRevert;
- (id)clientName;
- (BOOL)confirmationRequired;
- (id)deleteRequests;
- (id)foldersToDelete;
- (id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5;
- (id)insertRequests;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)renderedContentURLs;
- (id)updateRequests;
- (BOOL)validateWithError:(id*)arg1;

@end
