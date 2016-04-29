/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    BOOL _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

@property(retain,readonly) PLGenericAlbum * album;
@property(readonly) BOOL invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;

- (void)_calculateDiffs;
- (struct NSObject { Class x1; }*)album;
- (BOOL)invitationRecordsDidChange;
- (id)name;
- (id)userInfo;

@end
