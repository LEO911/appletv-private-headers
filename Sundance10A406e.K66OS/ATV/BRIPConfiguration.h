/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRIPConfiguration : XXUnknownSuperclass {
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	unsigned _wirelessUseDHCP : 1;	// 48 = 0x30
	BOOL _wirelessUseManualDNS;	// 49 = 0x31
	unsigned _wirelessActive : 1;	// 50 = 0x32
	unsigned _wiredUseDHCP : 1;	// 50 = 0x32
	BOOL _wiredUseManualDNS;	// 51 = 0x33
	unsigned _wiredActive : 1;	// 52 = 0x34
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x391a65; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x391a91
+ (void)_pushWirelessUsageValues;	// 0x391cf5
+ (id)currentConfiguration;	// 0x391475
+ (BOOL)internetAvailable;	// 0x390e61
+ (BOOL)internetServerReachable:(id)reachable;	// 0x390fc9
+ (id)ipAddressesForHostName:(id)hostName;	// 0x39104d
+ (BOOL)networkAvailable;	// 0x390d11
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x3911d1
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x39129d
+ (BOOL)receivedNTPClockSetNotification;	// 0x391171
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x391181
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x3911a1
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x3911c1
+ (BOOL)showedNetworkTimeDialog;	// 0x391191
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x391245
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x3911b1
- (id)initFromCurrentConfiguration;	// 0x39137d
- (id)IPaddressForInterface:(int)interface;	// 0x3919e5
- (id)MACAddressForActiveInterface;	// 0x3919b9
- (id)MACaddressForInterface:(int)interface;	// 0x391999
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x3924a9
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x391d8d
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x392135
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x392621
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x3925ad
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x39275d
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x3928f1
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x3927c9
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x392431
- (void)dealloc;	// 0x3914bd
- (id)description;	// 0x3915d5
- (id)dnsAddressesForInterface:(int)interface;	// 0x391a45
- (BOOL)isActiveForInterface:(int)interface;	// 0x391929
- (id)routerForInterface:(int)interface;	// 0x391a25
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x3917a9
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x3918dd
- (void)setUseDHCPForInterface:(int)interface;	// 0x39175d
- (void)setUseManualDNSForInterface:(int)interface;	// 0x391789
- (id)subnetMaskForInterface:(int)interface;	// 0x391a05
- (BOOL)useDHCPForInterface:(int)interface;	// 0x39194d
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x391975
// converted property getter: - (id)wirelessNetwork;	// 0x391a65
- (long)wirelessSignalQuality;	// 0x391a75
@end

