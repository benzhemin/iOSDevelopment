/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SACalendarEventSearch : SABaseClientBoundCommand {
}

@property(copy) NSDate * endDate;
@property(copy) NSURL * eventId;
@property(retain) NSNumber * limit;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(copy) NSArray * participants;
@property(copy) NSDate * startDate;
@property(copy) NSURL * targetAppId;
@property(copy) NSString * timeZoneId;
@property(copy) NSString * title;

+ (id)eventSearch;
+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)eventId;
- (id)groupIdentifier;
- (id)limit;
- (id)location;
- (id)notes;
- (id)participants;
- (BOOL)requiresResponse;
- (void)setEndDate:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)targetAppId;
- (id)timeZoneId;
- (id)title;

@end
