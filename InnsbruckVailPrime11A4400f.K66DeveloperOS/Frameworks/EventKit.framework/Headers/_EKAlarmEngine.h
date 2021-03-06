/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>
#import "CLLocationManagerDelegate.h"

@class NSTimer, NSDateFormatter, CLLocationManager, NSDate, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
	int _lastDBSequence;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSDate *_nextFireDate;	// 12 = 0xc
	double _lastCheckpoint;	// 16 = 0x10
	PCPersistentTimer *_timer;	// 24 = 0x18
	BOOL _populating;	// 28 = 0x1c
	double _populateStart;	// 32 = 0x20
	NSTimer *_syncTimer;	// 40 = 0x28
	BOOL _pendingChanges;	// 44 = 0x2c
	BOOL _shouldUpdateWithForceForAlarmTable;	// 45 = 0x2d
	BOOL _shouldUpdateWithForceForFences;	// 46 = 0x2e
	BOOL _abortedLastAttemptToAdjustFences;	// 47 = 0x2f
	NSDateFormatter *_dateFormatter;	// 48 = 0x30
	CLLocationManager *_locationManager;	// 52 = 0x34
	double _defaultRadius;	// 56 = 0x38
	NSDate *_tomorrow;	// 64 = 0x40
}
+ (double)defaultRadius;	// 0x2dae5af9
+ (id)sharedInstance;	// 0x2dae5a75
- (void)_adjustFences:(id)fences;	// 0x2dae89c5
- (void)_calendarNotificationSettingChanged;	// 0x2dae8721
- (void)_databaseChanged;	// 0x2dae63c5
- (id)_dateFormatter;	// 0x2dae7421
- (BOOL)_haveAlarmsChanged:(id)changed;	// 0x2dae642d
- (BOOL)_isDataProtected;	// 0x2dae6135
- (void)_killSyncTimer;	// 0x2dae8471
- (void)_killTimer;	// 0x2dae73bd
- (void)_locationDaemonDidLaunch;	// 0x2dae878d
- (void)_notifyAlarmsFired:(id)fired;	// 0x2dae7899
- (BOOL)_populateAlarmTable:(id)table;	// 0x2dae6ae1
- (void)_populateFinished;	// 0x2dae72b9
- (void)_protectedDataDidBecomeAvailable;	// 0x2dae60fd
- (void)_protectedDataWillBecomeUnavailable;	// 0x2dae60f9
- (void)_proximityAlertTriggered:(id)triggered entered:(BOOL)entered;	// 0x2dae9461
- (void)_removeAllFences;	// 0x2dae87f9
- (void)_rescheduleTimer;	// 0x2dae7499
- (void)_resetSyncTimer;	// 0x2dae8341
- (BOOL)_shouldAdjustFencesWithStatus:(int)status;	// 0x2dae89a1
- (void)_storeAlarms:(id)alarms nextScheduleLimit:(double)limit eventStore:(id)store;	// 0x2dae6591
- (id)_stringForAuthorizationStatus:(int)authorizationStatus;	// 0x2dae8961
- (void)_syncDidEnd;	// 0x2dae857d
- (void)_syncDidStart;	// 0x2dae8515
- (void)_syncTimerFired:(id)fired;	// 0x2dae84ad
- (void)_timeDidChangeSignificantly;	// 0x2dae8629
- (void)_timeZoneChanged:(id)changed;	// 0x2dae6525
- (void)_timerFired:(id)fired;	// 0x2dae7ad9
- (void)_updateWithForce:(BOOL)force;	// 0x2dae63b1
- (void)_updateWithForceForAlarmTable:(BOOL)alarmTable forFences:(BOOL)fences;	// 0x2dae6139
- (void)dealloc;	// 0x2dae5b11
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x2dae9ec5
- (void)locationManager:(id)manager didEnterRegion:(id)region;	// 0x2dae9cc1
- (void)locationManager:(id)manager didExitRegion:(id)region;	// 0x2dae9d59
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x2dae9df1
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;	// 0x2dae9e49
- (void)reschedule;	// 0x2dae6091
- (void)start;	// 0x2dae5bc1
- (void)stop;	// 0x2dae5fdd
@end

