/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSArray, NSDictionary, NSString;

@interface PLQLPostAccountingQuery : PLQLAccountingQuery {
    NSArray *_additionalAccountingGroups;
    NSString *_daemonToBreak;
    NSString *_parentAccountingQueryToRunOn;
    NSDictionary *_skipProcess;
}

@property(retain,readonly) NSArray * additionalAccountingGroups;
@property(retain,readonly) NSString * daemonToBreak;
@property(retain,readonly) NSString * parentAccountingQueryToRunOn;
@property(retain,readonly) NSDictionary * skipProcess;

- (void).cxx_destruct;
- (id)additionalAccountingGroups;
- (id)daemonToBreak;
- (id)filteredAccountingEvents:(id)arg1;
- (id)getAllAccountingEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)parentAccountingQueryToRunOn;
- (id)runQueryForTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withEnergy:(double)arg2;
- (void)setPostAccountingQueryAttributes:(id)arg1 withSkipProcessList:(id)arg2 withParentQuery:(id)arg3 withAdditionalAGs:(id)arg4;
- (id)skipProcess;

@end
