/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import <NSObject.h> // Unknown library

@class NSTimer, PCPersistentTimer, PCInterfaceUsabilityMonitor, NSRecursiveLock, NSString;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceUsabilityMonitorDelegate> {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	PCInterfaceUsabilityMonitor *_wwanMonitor;	// 36 = 0x24
	PCInterfaceUsabilityMonitor *_wifiMonitor;	// 40 = 0x28
	void *_ctServerConnection;	// 44 = 0x2c
	void *_interfaceAssertion;	// 48 = 0x30
	void *_wifiManager;	// 52 = 0x34
	long _WWANContextIdentifier;	// 56 = 0x38
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
	BOOL _isInCall;	// 84 = 0x54
	BOOL _isWakeOnWiFiSupported;	// 85 = 0x55
	BOOL _isWakeOnWiFiEnabled;	// 86 = 0x56
	BOOL _shouldOverrideOnCallBehavior;	// 87 = 0x57
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x3322233d; 
@property(readonly, assign) NSString *WiFiInterfaceName;	// G=0x332223a9; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x3322270d; 
@property(readonly, assign, nonatomic) NSString *currentLinkQualityString;	// G=0x33221e79; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x33222401; 
@property(readonly, assign) BOOL isInCall;	// G=0x33222571; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x33222619; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x33222669; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x33222451; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x33222529; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x332224e1; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x33222499; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x332222f5; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x332226c5; 
+ (id)sharedInstance;	// 0x332203b9
- (id)init;	// 0x3322042d
// declared property getter: - (id)WWANInterfaceName;	// 0x3322233d
// declared property getter: - (id)WiFiInterfaceName;	// 0x332223a9
- (void)_adjustWakeOnWiFi;	// 0x33223581
- (void)_adjustWakeOnWiFiLocked;	// 0x332235cd
- (void)_adjustWiFiAutoAssociation;	// 0x332231e1
- (void)_adjustWiFiAutoAssociationLocked;	// 0x3322322d
- (BOOL)_allowBindingToWWAN;	// 0x33223b25
- (void)_createCTConnection;	// 0x332208bd
- (void)_createWiFiManager;	// 0x33222c25
- (void)_ctConnectionWasInvalidated;	// 0x33220e29
- (BOOL)_isInternetReachableLocked;	// 0x332225b9
- (void)_mainThreadDelayedInvalidation;	// 0x33220d9d
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x3322215d
- (void)_populateWakeOnWiFiCapability;	// 0x33222e6d
- (void)_populateWakeOnWiFiCapabilityLocked;	// 0x33222eb9
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x33221f39
- (void)_serverCallback:(id)callback info:(id)info;	// 0x33221019
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x33221079
- (void)_updateWWANInterfaceAssertions;	// 0x33222a41
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x33222a8d
- (void)_updateWWANInterfaceUpState;	// 0x33221e2d
- (void)_updateWWANInterfaceUpStateLocked;	// 0x33221c49
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x33222a09
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x33223549
- (BOOL)_wifiIsPoorLinkQuality;	// 0x33221f15
- (BOOL)_wwanIsPoorLinkQuality;	// 0x33221ef1
- (BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;	// 0x33221bc9
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x33220811
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x3322270d
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x33223d31
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x33223e81
- (void)bindSocket:(int)socket toWWANInterface:(BOOL)wwaninterface;	// 0x33223bd5
- (void)bindSocketToWWANInterface:(int)wwaninterface;	// 0x33223d1d
// declared property getter: - (id)currentLinkQualityString;	// 0x33221e79
- (void)dealloc;	// 0x332206c1
- (id)dhcpHalfLeaseExpirationDate;	// 0x332238f1
- (id)dhcpT1RenewalDate;	// 0x33223709
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x33222401
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x332233c9
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x33223071
- (void)handleMachMessage:(void *)message;	// 0x33221011
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x33220f99
- (void)interfaceReachabilityChanged:(id)changed;	// 0x33220fd5
// declared property getter: - (BOOL)isInCall;	// 0x33222571
// declared property getter: - (BOOL)isInternetReachable;	// 0x33222619
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x33222669
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x33222451
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x33222529
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x332224e1
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x33222499
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x332222f5
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x332226c5
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x33222889
- (void)removeDelegate:(id)delegate;	// 0x3322086d
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x33223e95
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x33224139
@end

