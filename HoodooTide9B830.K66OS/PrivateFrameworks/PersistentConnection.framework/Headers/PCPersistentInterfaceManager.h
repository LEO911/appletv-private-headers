/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer, NSMachPort, NSRecursiveLock, PCPersistentTimer, NSString;

@interface PCPersistentInterfaceManager : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	void *_ctServerConnection;	// 36 = 0x24
	NSMachPort *_machPort;	// 40 = 0x28
	void *_interfaceAssertion;	// 44 = 0x2c
	void *_wifiManager;	// 48 = 0x30
	void *_reachability;	// 52 = 0x34
	int _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	BOOL _isWWANInterfaceDataActive;	// 65 = 0x41
	BOOL _isWWANInHomeCountry;	// 66 = 0x42
	BOOL _hasWWANStatusIndicator;	// 67 = 0x43
	BOOL _isPowerStateDetectionSupported;	// 68 = 0x44
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 69 = 0x45
	BOOL _isWWANInterfaceActivationPermitted;	// 70 = 0x46
	double _lastActivationTime;	// 72 = 0x48
	int _wwanRSSI;	// 80 = 0x50
	BOOL _belowRSSIThreshold;	// 84 = 0x54
	BOOL _isInCall;	// 85 = 0x55
	BOOL _isInternetReachable;	// 86 = 0x56
	BOOL _isInternetReachableViaWiFi;	// 87 = 0x57
	BOOL _isWakeOnWiFiSupported;	// 88 = 0x58
	BOOL _isWakeOnWiFiEnabled;	// 89 = 0x59
	BOOL _shouldOverrideOnCallBehavior;	// 90 = 0x5a
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x36d1b8c9; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x36d1d3c1; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x36d1b935; 
@property(readonly, assign) BOOL isInCall;	// G=0x36d1bab5; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x36d1bb01; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x36d1bb4d; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x36d1b985; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x36d1ba69; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x36d1ba1d; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x36d1b9d1; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x36d1b87d; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x36d1bb99; 
+ (id)sharedInstance;	// 0x36d1c17d
- (id)init;	// 0x36d1eda5
// declared property getter: - (id)WWANInterfaceName;	// 0x36d1b8c9
- (id)WiFiInterfaceName;	// 0x36d1d4d5
- (void)_adjustWakeOnWiFi;	// 0x36d1bd45
- (void)_adjustWakeOnWiFiLocked;	// 0x36d1c86d
- (void)_adjustWiFiAutoAssociation;	// 0x36d1bcf5
- (void)_adjustWiFiAutoAssociationLocked;	// 0x36d1cb25
- (BOOL)_allowBindingToWWAN;	// 0x36d1bd95
- (void)_createCTConnection;	// 0x36d1e6c5
- (void)_createReachabilityMonitor;	// 0x36d1e3c5
- (void)_createWiFiManager;	// 0x36d1ced5
- (void)_ctConnectionWasInvalidated;	// 0x36d1e509
- (void)_mainThreadDelayedInvalidation;	// 0x36d1b4e1
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x36d1d529
- (void)_populateWakeOnWiFiCapabliity;	// 0x36d1bca5
- (void)_populateWakeOnWiFiCapabliityLocked;	// 0x36d1cda1
- (void)_reachabilityCallback:(unsigned)callback;	// 0x36d1b731
- (void)_reachabilityCallbackLocked:(unsigned)locked;	// 0x36d1b785
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x36d1d695
- (void)_serverCallback:(id)callback info:(id)info;	// 0x36d1b5cd
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x36d1d87d
- (void)_updateWWANInterfaceAssertions;	// 0x36d1bbe5
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x36d1cfcd
- (void)_updateWWANInterfaceUpStateLocked;	// 0x36d1b631
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x36d1d17d
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x36d1c961
- (BOOL)_wwanRSSIBelowThresholdAndWoWAvailableLocked;	// 0x36d1b365
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x36d1ed41
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x36d1d3c1
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x36d1c1a9
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x36d1be4d
- (void)bindSocket:(int)socket toWWANInterface:(BOOL)wwaninterface;	// 0x36d1c2d9
- (void)bindSocketToWWANInterface:(int)wwaninterface;	// 0x36d1be39
- (id)dhcpHalfLeaseExpirationDate;	// 0x36d1c42d
- (id)dhcpT1RenewalDate;	// 0x36d1c685
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x36d1b935
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x36d1c999
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x36d1cc1d
- (void)handleMachMessage:(void *)message;	// 0x36d1e3bd
// declared property getter: - (BOOL)isInCall;	// 0x36d1bab5
// declared property getter: - (BOOL)isInternetReachable;	// 0x36d1bb01
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x36d1bb4d
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x36d1b985
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x36d1ba69
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x36d1ba1d
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x36d1b9d1
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x36d1b87d
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x36d1bb99
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x36d1d231
- (void)removeDelegate:(id)delegate;	// 0x36d1eced
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x36d1be61
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x36d1c101
@end

