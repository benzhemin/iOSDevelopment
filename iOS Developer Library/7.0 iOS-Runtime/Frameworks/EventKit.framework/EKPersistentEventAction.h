/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendarItem, NSData, NSString;

@interface EKPersistentEventAction : EKPersistentObject {
}

@property(copy) NSData * externalData;
@property(copy) NSString * externalFolderID;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModTag;
@property(copy) NSString * externalScheduleID;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)relations;

- (int)entityType;
- (id)externalData;
- (id)externalFolderID;
- (id)externalID;
- (id)externalModTag;
- (id)externalScheduleID;
- (id)owner;
- (void)setExternalData:(id)arg1;
- (void)setExternalFolderID:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModTag:(id)arg1;
- (void)setExternalScheduleID:(id)arg1;
- (void)setOwner:(id)arg1;

@end
