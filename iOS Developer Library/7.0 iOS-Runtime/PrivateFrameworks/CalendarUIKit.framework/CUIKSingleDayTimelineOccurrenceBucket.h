/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@class <CUIKSingleDayTimelineLayoutScreenUtils>, <CUIKSingleDayTimelineViewItem>, CUIKSingleDayTimelineLayoutPartition, NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    NSMutableArray *_currentOccurrences;
    BOOL _ignoreFirstOccurrenceInFitnessCalculations;
    BOOL _ignoreLastOccurrenceInFitnessCalculations;
    BOOL _isOnlyBucket;
    double _originalFitnessLevel;
    BOOL _originalFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
    double _temporaryFitnessLevel;
    BOOL _temporaryFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtBeginning;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtEnd;
    BOOL _useTemporaryFitnessLevel;
}

@property(retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;
@property(retain) NSMutableArray * currentOccurrences;
@property BOOL isOnlyBucket;
@property(readonly) NSArray * occurrences;

- (void).cxx_destruct;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (id)correspondingPartition;
- (id)currentOccurrences;
- (id)earliestOccurrence;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;
- (BOOL)isOnlyBucket;
- (void)makeTemporaryChangesPermanent;
- (id)occurrences;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;
- (void)setCorrespondingPartition:(id)arg1;
- (void)setCurrentOccurrences:(id)arg1;
- (void)setIsOnlyBucket:(BOOL)arg1;
- (void)stampFramesOntoOccurrences;

@end
