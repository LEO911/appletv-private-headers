/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import "PCLoggingDelegate.h"
#import <NSObject.h> // Unknown library

@class NSTimer, NSDate, NSString;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate> {
	double _fireTime;	// 4 = 0x4
	double _startTime;	// 12 = 0xc
	double _lastUpdateTime;	// 20 = 0x14
	double _minimumEarlyFireProportion;	// 28 = 0x1c
	BOOL _triggerOnGMTChange;	// 36 = 0x24
	BOOL _disableSystemWaking;	// 37 = 0x25
	NSDate *_scheduledWakeDate;	// 40 = 0x28
	NSString *_serviceIdentifier;	// 44 = 0x2c
	id _target;	// 48 = 0x30
	SEL _selector;	// 52 = 0x34
	id _userInfo;	// 56 = 0x38
	NSTimer *_preventSleepRunLoopTimer;	// 60 = 0x3c
	NSTimer *_fireRunLoopTimer;	// 64 = 0x40
	unsigned _pmRootDomainConnect;	// 68 = 0x44
	unsigned _pmNotifier;	// 72 = 0x48
	IONotificationPortRef _pmNotificationPort;	// 76 = 0x4c
	CFRunLoopSourceRef _pmRunLoopSource;	// 80 = 0x50
	BOOL _sleepIsImminent;	// 84 = 0x54
	unsigned _powerAssertionID;	// 88 = 0x58
	id _timeChangeSource;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL disableSystemWaking;	// G=0x34e3c08d; S=0x34e3c169; @synthesize=_disableSystemWaking
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x34e3c07d; @synthesize=_serviceIdentifier
@property(assign, nonatomic) double minimumEarlyFireProportion;	// G=0x34e3c09d; S=0x34e3c109; @synthesize=_minimumEarlyFireProportion
@property(readonly, retain) id userInfo;	// G=0x34e3c06d; converted property
+ (double)currentMachTimeInterval;	// 0x34e3c609
+ (id)lastSystemWakeDate;	// 0x34e3c659
- (id)initWithFireDate:(id)fireDate serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x34e3c0b5
- (id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x34e3c421
- (id)_earlyFireDate;	// 0x34e3d315
- (void)_fireTimerFired;	// 0x34e3c1ad
- (id)_initWithAbsoluteTime:(double)absoluteTime serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info triggerOnGMTChange:(BOOL)change;	// 0x34e3c479
- (double)_nextForcedAlignmentAbsoluteTime;	// 0x34e3c81d
- (void)_powerChangedMessageType:(unsigned)type notificationID:(void *)anId;	// 0x34e3c89d
- (void)_preventSleepFired;	// 0x34e3ccf9
- (void)_setPowerMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x34e3caa9
- (void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;	// 0x34e3c309
- (void)_updateTimers;	// 0x34e3ce85
- (void)dealloc;	// 0x34e3de2d
- (id)debugDescription;	// 0x34e3c705
// declared property getter: - (BOOL)disableSystemWaking;	// 0x34e3c08d
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x34e3c2f9
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)state;	// 0x34e3c2e9
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x34e3c2d9
- (void)invalidate;	// 0x34e3d775
- (BOOL)isValid;	// 0x34e3c055
// declared property getter: - (id)loggingIdentifier;	// 0x34e3c07d
// declared property getter: - (double)minimumEarlyFireProportion;	// 0x34e3c09d
- (void)scheduleInRunLoop:(id)runLoop;	// 0x34e3c189
- (void)scheduleInRunLoop:(id)runLoop inMode:(id)mode;	// 0x34e3da39
// declared property setter: - (void)setDisableSystemWaking:(BOOL)waking;	// 0x34e3c169
// declared property setter: - (void)setMinimumEarlyFireProportion:(double)proportion;	// 0x34e3c109
// converted property getter: - (id)userInfo;	// 0x34e3c06d
@end
