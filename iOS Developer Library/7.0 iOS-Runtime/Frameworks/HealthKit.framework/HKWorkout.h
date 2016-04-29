/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity, NSArray;

@interface HKWorkout : HKSample {
    double _duration;
    HKQuantity *_goal;
    unsigned int _goalType;
    HKQuantity *_totalDistance;
    HKQuantity *_totalEnergyBurned;
    unsigned int _workoutActivityType;
    NSArray *_workoutEvents;
}

@property(readonly) double duration;
@property(getter=_goal,setter=_setGoal:,retain) HKQuantity * goal;
@property(getter=_goalType,setter=_setGoalType:) unsigned int goalType;
@property(readonly) HKQuantity * totalDistance;
@property(readonly) HKQuantity * totalEnergyBurned;
@property(readonly) unsigned int workoutActivityType;
@property(copy,readonly) NSArray * workoutEvents;

+ (id)_workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned int)arg8 goal:(id)arg9 metadata:(id)arg10;
+ (BOOL)supportsSecureCoding;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (void).cxx_destruct;
- (id)_goal;
- (unsigned int)_goalType;
- (void)_setDuration:(double)arg1;
- (void)_setGoal:(id)arg1;
- (void)_setGoalType:(unsigned int)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
- (void)_setWorkoutActivityType:(unsigned int)arg1;
- (void)_setWorkoutEvents:(id)arg1;
- (id)_validateConfiguration;
- (id)_validateWorkoutEvents:(id)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entity:(id)arg3 error:(id*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)totalDistance;
- (id)totalEnergyBurned;
- (unsigned int)workoutActivityType;
- (id)workoutEvents;

@end
