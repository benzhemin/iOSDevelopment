/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BSLogging>, BSTransaction, NSArray, NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface BSTransaction : NSObject <BSWatchdogProviding> {
    NSMutableArray *_auditHistory;
    BOOL _buildAuditHistory;
    NSMutableArray *_childTransactions;
    id _completionBlock;
    <BSLogging> *_debugLogger;
    BOOL _failed;
    NSString *_failureReason;
    BOOL _interrupted;
    NSMutableSet *_lifeAssertions;
    NSMutableSet *_milestones;
    NSMutableDictionary *_milestonesToHandlers;
    NSHashTable *_observers;
    BSTransaction *_parentTransaction;
    NSDate *_startTime;
    unsigned int _state;
}

@property(retain,readonly) NSArray * childTransactions;
@property(getter=isComplete,readonly) BOOL complete;
@property(copy) id completionBlock;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isFailed,readonly) BOOL failed;
@property(readonly) unsigned int hash;
@property(getter=isInterruptable,readonly) BOOL interruptable;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property(retain,readonly) NSSet * milestones;
@property(retain) BSTransaction * parentTransaction;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(getter=isRunning,readonly) BOOL running;
@property(readonly) unsigned int state;
@property(readonly) Class superclass;

- (void)_addAuditHistory:(id)arg1;
- (void)_addChildTransaction:(id)arg1;
- (void)_addLifeAssertion:(id)arg1;
- (BOOL)_areChildTransactionsComplete;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_checkAndReportIfCompleted;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_debugLogWithFormat:(id)arg1;
- (id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned int)arg2;
- (void)_didAddChildTransaction:(id)arg1;
- (void)_didBegin;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_didSatisfyMilestone:(id)arg1;
- (void)_enumerateChildTransactionsWithBlock:(id)arg1;
- (void)_enumerateObserversWithBlock:(id)arg1;
- (void)_evaluateCompletion;
- (void)_failNow;
- (void)_forceInterrupt;
- (void)_interruptWithReason:(id)arg1 force:(BOOL)arg2;
- (BOOL)_isParentTransactionComplete;
- (BOOL)_isRootTransaction;
- (BOOL)_isRootTransactionComplete;
- (id)_loggingProem;
- (void)_noteChildTransactionCompleted:(id)arg1;
- (void)_noteCompleted;
- (void)_noteTransactionStateInAuditHistory;
- (void)_notifyObserversOfCompletion;
- (id)_parentTransaction;
- (void)_preventTransactionCompletionForReason:(id)arg1 andExecuteBlock:(id)arg2;
- (void)_removeChildTransaction:(id)arg1;
- (void)_removeLifeAssertion:(id)arg1;
- (BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (void)_setParentTransaction:(id)arg1 assertIfNecessary:(BOOL)arg2;
- (void)_setParentTransaction:(id)arg1;
- (void)_setState:(unsigned int)arg1;
- (BOOL)_shouldComplete;
- (unsigned int)_state;
- (id)_stringForInterruptReason:(id)arg1;
- (id)_stringForMilestones:(id)arg1;
- (id)_stringForState:(unsigned int)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willBegin;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1;
- (void)addMilestone:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)auditHistory;
- (void)begin;
- (BOOL)buildAuditHistory;
- (id)childTransactions;
- (id)childTransactionsOfClass:(Class)arg1;
- (id)completionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)debugLogger;
- (id)description;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(id)arg2;
- (void)failWithReason:(id)arg1;
- (BOOL)hasChildTransactionsOfClass:(Class)arg1;
- (id)init;
- (void)interrupt;
- (void)interruptWithReason:(id)arg1;
- (BOOL)isComplete;
- (BOOL)isFailed;
- (BOOL)isInterruptable;
- (BOOL)isInterrupted;
- (BOOL)isRunning;
- (BOOL)isWaitingForMilestone:(id)arg1;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(id)arg2;
- (id)milestones;
- (id)parentTransaction;
- (id)queue;
- (void)removeAllChildTransactions;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (void)removeAllMilestones;
- (void)removeChildTransaction:(id)arg1;
- (BOOL)removeMilestone:(id)arg1;
- (BOOL)removeMilestones:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)satisfyMilestone:(id)arg1;
- (void)setBuildAuditHistory:(BOOL)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setDebugLogger:(id)arg1;
- (void)setParentTransaction:(id)arg1;
- (BOOL)shouldWatchdog:(id*)arg1;
- (unsigned int)state;
- (double)watchdogTimeout;

@end