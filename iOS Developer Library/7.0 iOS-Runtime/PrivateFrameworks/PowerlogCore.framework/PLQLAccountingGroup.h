/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface PLQLAccountingGroup : NSObject <PLQLAccountingGroupProtocol> {
    id _accountingGroupDefinitionBlock;
    NSString *_accountingGroupName;
    short _accountingGroupType;
}

@property(readonly) id accountingGroupDefinitionBlock;
@property(retain,readonly) NSString * accountingGroupName;
@property(readonly) short accountingGroupType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountingGroupDefinitionBlock;
- (id)accountingGroupName;
- (short)accountingGroupType;
- (id)createAccountingEntry:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4;
- (id)genericCreateAccountingEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withIdentifierKey:(id)arg2 withEventKey:(id)arg3 withStartKey:(id)arg4 withStartValue:(id)arg5 withEndKey:(id)arg6 withEndValue:(id)arg7 withEntries:(id)arg8;
- (id)getEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)getLastOpenSnapshot;
- (id)getLastSnapshot;
- (id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 withAccountingGroupDefinitionBlock:(id)arg3;
- (double)safeTimeForAccounting;
- (double)timeOfLastSnapshot;

@end
