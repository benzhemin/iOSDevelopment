/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {
    NSString *actionKey;
    NSString *sectionIdentifier;
    TableViewManager *tableManager;
}

@property(retain) NSString * actionKey;
@property(retain) NSString * sectionIdentifier;
@property TableViewManager * tableManager;

+ (id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2;

- (id)actionKey;
- (id)getSectionInfoWithLongStrings:(BOOL)arg1;
- (BOOL)isPrimaryRecommendation;
- (id)sectionIdentifier;
- (void)selectPrimaryRecommendation;
- (void)setActionKey:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setTableManager:(id)arg1;
- (id)tableManager;

@end
