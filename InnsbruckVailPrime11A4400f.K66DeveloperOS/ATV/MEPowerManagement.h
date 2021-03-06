/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MEPowerManagement : BRSingleton {
	BOOL _playbackPreventsIdleSleep;	// 4 = 0x4
	BOOL _inLowPowerMode;	// 5 = 0x5
	BOOL _setIdleSleepTime;	// 6 = 0x6
	NSTimer *_powerAssertionTimer;	// 8 = 0x8
	unsigned _pmNoIdleSleepAssertionID;	// 12 = 0xc
	unsigned _ioNotifier;	// 16 = 0x10
	unsigned _ioConnection;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL inLowPowerMode;	// G=0xdf05; S=0xdf15; @synthesize=_inLowPowerMode
@property(assign, nonatomic) unsigned ioConnection;	// G=0xdf85; S=0xdf95; @synthesize=_ioConnection
@property(assign, nonatomic) unsigned ioNotifier;	// G=0xdf65; S=0xdf75; @synthesize=_ioNotifier
@property(assign, nonatomic) BOOL playbackPreventsIdleSleep;	// G=0xdead; S=0xdebd; @synthesize=_playbackPreventsIdleSleep
@property(assign, nonatomic) unsigned pmNoIdleSleepAssertionID;	// G=0xdf45; S=0xdf55; @synthesize=_pmNoIdleSleepAssertionID
@property(retain, nonatomic) NSTimer *powerAssertionTimer;	// G=0xdecd; S=0xdedd; @synthesize=_powerAssertionTimer
@property(assign, nonatomic) BOOL setIdleSleepTime;	// G=0xdf25; S=0xdf35; @synthesize=_setIdleSleepTime
@property(assign, nonatomic) int sleepTimeoutInMinutes;	// G=0xcee1; S=0xcf35; 
+ (void)checkInWithBackboardServices;	// 0xcb49
+ (void)setSingleton:(id)singleton;	// 0xc9cd
+ (id)sharedInstance;	// 0xc9f1
+ (id)singleton;	// 0xc9bd
+ (void)startManagement;	// 0xcb79
- (id)init;	// 0xcc25
- (void).cxx_destruct;	// 0xdfa5
- (void)_dropPowerAssertions:(id)assertions;	// 0xde31
- (void)_enableIdleSleepAndWatchdog;	// 0xd171
- (void)_handleIOPMCallbackMessage:(unsigned)message argument:(void *)argument;	// 0xdd41
- (void)_handleThermalNotification;	// 0xdddd
- (void)_registerForPowerNotifications;	// 0xd46d
- (void)_registerForThermalNotifications;	// 0xd609
- (void)_setAllowIdleSleep:(BOOL)sleep;	// 0xdb91
- (void)_setMachineToLowPowerMode;	// 0xd77d
- (void)_setMachineToNormalPowerMode;	// 0xd8c9
- (void)_updateAllTimersDueToNotification:(id)notification;	// 0xd6b1
- (void)_updateSleepTimer;	// 0xd6d5
- (void)dealloc;	// 0xce19
// declared property getter: - (BOOL)inLowPowerMode;	// 0xdf05
// declared property getter: - (unsigned)ioConnection;	// 0xdf85
// declared property getter: - (unsigned)ioNotifier;	// 0xdf65
- (BOOL)isDeviceAsleep;	// 0xd07d
// declared property getter: - (BOOL)playbackPreventsIdleSleep;	// 0xdead
// declared property getter: - (unsigned)pmNoIdleSleepAssertionID;	// 0xdf45
// declared property getter: - (id)powerAssertionTimer;	// 0xdecd
- (void)resetSleepTimeoutOnNotificationNamed:(id)named;	// 0xd0f5
// declared property getter: - (BOOL)setIdleSleepTime;	// 0xdf25
// declared property setter: - (void)setInLowPowerMode:(BOOL)lowPowerMode;	// 0xdf15
// declared property setter: - (void)setIoConnection:(unsigned)connection;	// 0xdf95
// declared property setter: - (void)setIoNotifier:(unsigned)notifier;	// 0xdf75
// declared property setter: - (void)setPlaybackPreventsIdleSleep:(BOOL)sleep;	// 0xdebd
// declared property setter: - (void)setPmNoIdleSleepAssertionID:(unsigned)anId;	// 0xdf55
// declared property setter: - (void)setPowerAssertionTimer:(id)timer;	// 0xdedd
// declared property setter: - (void)setSetIdleSleepTime:(BOOL)time;	// 0xdf35
// declared property setter: - (void)setSleepTimeoutInMinutes:(int)minutes;	// 0xcf35
- (void)sleepDevice;	// 0xd08d
// declared property getter: - (int)sleepTimeoutInMinutes;	// 0xcee1
- (void)wakeDevice;	// 0xd0e5
@end

