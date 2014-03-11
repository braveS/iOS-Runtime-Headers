/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class NSObject<OS_dispatch_queue>, NSXPCConnection, _RTRoutineManagerProxy;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    _RTRoutineManagerProxy *_routineManagerProxy;
    NSXPCConnection *_xpcConnection;
}

@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) _RTRoutineManagerProxy * routineManagerProxy;
@property(retain) NSXPCConnection * xpcConnection;

+ (id)defaultManager;
+ (id)routineModeToString:(int)arg1;

- (void).cxx_destruct;
- (void)clearRoutine;
- (void)createConnection;
- (void)dealloc;
- (void)fetchAllLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchBBPluginSupportedWithHandler:(id)arg1;
- (void)fetchLocationsOfInterestOfType:(int)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id)arg3;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchPredictedLocationsOfInterestFromStartingLocationOfInterest:(id)arg1 withHandler:(id)arg2;
- (void)fetchRoutineEnabledWithHandler:(id)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id)arg2;
- (void)handleDaemonStart;
- (id)init;
- (id)queue;
- (id)routineManagerProxy;
- (void)setQueue:(id)arg1;
- (void)setRoutineEnabled:(BOOL)arg1;
- (void)setRoutineManagerProxy:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end