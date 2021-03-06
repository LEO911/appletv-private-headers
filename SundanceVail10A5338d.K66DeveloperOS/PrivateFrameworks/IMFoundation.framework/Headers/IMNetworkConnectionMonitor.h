/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMReachabilityDelegate.h"
#import "IMConnectionMonitor.h"
#import "IMSystemMonitorListener.h"

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {
	IMReachability *_hostReachability;	// 12 = 0xc
	IMReachability *_ipReachability;	// 16 = 0x10
	unsigned _hostFlags;	// 20 = 0x14
	unsigned _ipFlags;	// 24 = 0x18
	BOOL _isConnected;	// 28 = 0x1c
	BOOL _isSleeping;	// 29 = 0x1d
}
@property(assign, nonatomic) unsigned _hostFlags;	// G=0x36945865; S=0x36945875; @synthesize
@property(retain, nonatomic) IMReachability *_hostReachability;	// G=0x36945825; S=0x36945835; @synthesize
@property(assign, nonatomic) unsigned _ipFlags;	// G=0x36945885; S=0x36945895; @synthesize
@property(retain, nonatomic) IMReachability *_ipReachability;	// G=0x36945845; S=0x36945855; @synthesize
@property(assign, nonatomic) BOOL _isConnected;	// G=0x369458a5; S=0x369458b5; @synthesize
@property(assign, nonatomic) BOOL _isSleeping;	// G=0x369458c5; S=0x369458d5; @synthesize
- (void)_clearReachability:(id *)reachability flags:(unsigned *)flags;	// 0x36944ee9
- (void)_doCallbackLater;	// 0x36944fb1
- (void)_doCallbackNow;	// 0x36944f21
// declared property getter: - (unsigned)_hostFlags;	// 0x36945865
// declared property getter: - (id)_hostReachability;	// 0x36945825
// declared property getter: - (unsigned)_ipFlags;	// 0x36945885
// declared property getter: - (id)_ipReachability;	// 0x36945845
// declared property getter: - (BOOL)_isConnected;	// 0x369458a5
// declared property getter: - (BOOL)_isSleeping;	// 0x369458c5
- (void)_networkManagedUpdated:(id)updated;	// 0x36945315
- (void)_setup;	// 0x36945325
- (void)_setupReachability;	// 0x36945039
- (void)clear;	// 0x3694553d
- (void)dealloc;	// 0x36944dd5
- (void)goConnectedWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0x369453d5
- (void)goDisconnected;	// 0x369454a5
- (BOOL)isImmediatelyReachable;	// 0x369455e5
- (void)reachabilityDidChange:(id)reachability;	// 0x36945115
// declared property setter: - (void)set_hostFlags:(unsigned)flags;	// 0x36945875
// declared property setter: - (void)set_hostReachability:(id)reachability;	// 0x36945835
// declared property setter: - (void)set_ipFlags:(unsigned)flags;	// 0x36945895
// declared property setter: - (void)set_ipReachability:(id)reachability;	// 0x36945855
// declared property setter: - (void)set_isConnected:(BOOL)connected;	// 0x369458b5
// declared property setter: - (void)set_isSleeping:(BOOL)sleeping;	// 0x369458d5
- (void)systemDidWake;	// 0x36945299
- (void)systemWillSleep;	// 0x3694521d
@end

