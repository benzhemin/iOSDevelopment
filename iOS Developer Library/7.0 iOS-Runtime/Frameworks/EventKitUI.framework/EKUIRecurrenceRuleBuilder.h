/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject {
    unsigned int _count;
    NSArray *_dayNumbers;
    int _days;
    int _frequency;
    int _interval;
    NSArray *_monthNumbers;
    int _ordinalValue;
}

@property unsigned int count;
@property(retain) NSArray * dayNumbers;
@property int days;
@property int frequency;
@property int interval;
@property(retain) NSArray * monthNumbers;
@property int ordinalValue;

- (void).cxx_destruct;
- (int)_frequencyToUse;
- (void)_setDefaultValues;
- (unsigned int)count;
- (id)dayNumbers;
- (int)days;
- (id)daysOfTheWeek;
- (id)daysOfTheWeekWithWeek:(int)arg1;
- (id)description;
- (int)frequency;
- (id)init;
- (int)interval;
- (id)monthNumbers;
- (int)ordinalValue;
- (id)recurrenceRule;
- (void)setCount:(unsigned int)arg1;
- (void)setDayNumbers:(id)arg1;
- (void)setDays:(int)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setMonthNumbers:(id)arg1;
- (void)setOrdinalValue:(int)arg1;
- (id)setPositions;

@end
