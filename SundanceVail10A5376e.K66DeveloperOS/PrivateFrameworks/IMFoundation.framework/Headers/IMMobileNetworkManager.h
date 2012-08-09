/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import "IMNetworkManager.h"

@class NSMutableSet, NSRecursiveLock, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager {
	NSRecursiveLock *_lock;	// 4 = 0x4
	NSMutableSet *_disableFastDormancyTokens;	// 8 = 0x8
	NSMutableSet *_wiFiAutoAssociationTokens;	// 12 = 0xc
	NSMutableSet *_cellAutoAssociationTokens;	// 16 = 0x10
	void *_serverConnection;	// 20 = 0x14
	void *_suspendDormancyAssertion;	// 24 = 0x18
	void *_wifiManager;	// 28 = 0x1c
	SCPreferencesRef _prefs;	// 32 = 0x20
	CTServerConnectionRef _ctServerConnection;	// 36 = 0x24
	BOOL _cachedAirplaneMode;	// 40 = 0x28
	void *_cellAssertion;	// 44 = 0x2c
	BOOL _isCachedAirplaneModeValid;	// 48 = 0x30
	int _applySkipCount;	// 52 = 0x34
	BOOL _registered;	// 56 = 0x38
	BOOL _shouldBringUpDataContext;	// 57 = 0x39
	BOOL _dataContextActive;	// 58 = 0x3a
}
@property(assign, nonatomic) int _applySkipCount;	// G=0x36ec6dc1; S=0x36ec6dd1; @synthesize
@property(assign, nonatomic) BOOL _cachedAirplaneMode;	// G=0x36ec6d61; S=0x36ec6d71; @synthesize
@property(assign, nonatomic) void *_cellAssertion;	// G=0x36ec6d81; S=0x36ec6d91; @synthesize
@property(assign, nonatomic) CTServerConnectionRef _ctServerConnection;	// G=0x36ec6d41; S=0x36ec6d51; @synthesize
@property(assign, nonatomic) BOOL _isCachedAirplaneModeValid;	// G=0x36ec6da1; S=0x36ec6db1; @synthesize
@property(assign, nonatomic) SCPreferencesRef _prefs;	// G=0x36ec6d21; S=0x36ec6d31; @synthesize
@property(assign, nonatomic) void *_serverConnection;	// G=0x36ec6cc1; S=0x36ec6cd1; @synthesize
@property(assign, nonatomic) void *_suspendDormancyAssertion;	// G=0x36ec6ce1; S=0x36ec6cf1; @synthesize
@property(readonly, assign, nonatomic) BOOL autoAssociateCellular;	// G=0x36ec5c81; 
@property(readonly, assign, nonatomic) BOOL autoAssociateWiFi;	// G=0x36ec5a29; 
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;	// G=0x36ec6ca1; S=0x36ec6cb1; @synthesize=_cellAutoAssociationTokens
@property(readonly, assign, nonatomic) BOOL dataConnectionExists;	// G=0x36ec6a4d; 
@property(assign, nonatomic) BOOL dataContextActive;	// G=0x36ec6e21; S=0x36ec6e31; @synthesize=_dataContextActive
@property(readonly, assign, nonatomic) BOOL disableFastDormancy;	// G=0x36ec502d; 
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens;	// G=0x36ec6c61; S=0x36ec6c71; @synthesize=_disableFastDormancyTokens
@property(readonly, assign, nonatomic) BOOL has2GDataConnection;	// G=0x36ec6a59; 
@property(readonly, assign, nonatomic) BOOL inValidSIMState;	// G=0x36ec6965; 
@property(readonly, assign, nonatomic) BOOL isAirplaneModeEnabled;	// G=0x36ec4789; 
@property(readonly, assign, nonatomic) BOOL isDataConnectionActive;	// G=0x36ec6b99; 
@property(readonly, assign, nonatomic) BOOL isDataSwitchEnabled;	// G=0x36ec6b39; 
@property(readonly, assign, nonatomic) BOOL isHostingWiFiHotSpot;	// G=0x36ec5241; 
@property(readonly, assign, nonatomic) BOOL isWiFiAssociated;	// G=0x36ec587d; 
@property(readonly, assign, nonatomic) BOOL isWiFiEnabled;	// G=0x36ec59b9; 
@property(retain, nonatomic) NSRecursiveLock *lock;	// G=0x36ec6c41; S=0x36ec6c51; @synthesize=_lock
@property(assign, nonatomic) BOOL registered;	// G=0x36ec6de1; S=0x36ec6df1; @synthesize=_registered
@property(assign, nonatomic) BOOL shouldBringUpDataContext;	// G=0x36ec6e01; S=0x36ec6e11; @synthesize=_shouldBringUpDataContext
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;	// G=0x36ec6c81; S=0x36ec6c91; @synthesize=_wiFiAutoAssociationTokens
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRSSI;	// G=0x36ec55bd; 
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRate;	// G=0x36ec571d; 
@property(readonly, assign, nonatomic) NSNumber *wiFiSignalStrength;	// G=0x36ec545d; 
@property(assign, nonatomic) void *wifiManager;	// G=0x36ec6d01; S=0x36ec6d11; @synthesize=_wifiManager
@property(readonly, assign, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;	// G=0x36ec52c9; 
@property(readonly, assign, nonatomic) BOOL willTryToSearchForWiFiNetwork;	// G=0x36ec53cd; 
- (id)init;	// 0x36ec4361
- (void)__adjustFastDormancyTokens;	// 0x36ec4fb1
- (void)_adjustCelluarAutoAssociation;	// 0x36ec4d45
- (void)_adjustCellularAutoAssociation;	// 0x36ec4bf1
- (void)_adjustFastDormancyTokens;	// 0x36ec4fe1
- (void)_adjustWiFiAutoAssociation;	// 0x36ec4ba5
- (void)_adjustWiFiAutoAssociationLocked;	// 0x36ec4a51
// declared property getter: - (int)_applySkipCount;	// 0x36ec6dc1
// declared property getter: - (BOOL)_cachedAirplaneMode;	// 0x36ec6d61
// declared property getter: - (void *)_cellAssertion;	// 0x36ec6d81
- (void)_createCTServerConnection;	// 0x36ec6209
- (void)_createWiFiManager;	// 0x36ec4825
- (void)_ctServerCallBack:(id)back object:(id)object userInfo:(id)info;	// 0x36ec5e91
// declared property getter: - (CTServerConnectionRef)_ctServerConnection;	// 0x36ec6d41
- (void *)_getValueForKey:(id)key;	// 0x36ec4775
- (void)_initializeSCPrefs:(id)prefs;	// 0x36ec459d
// declared property getter: - (BOOL)_isCachedAirplaneModeValid;	// 0x36ec6da1
- (BOOL)_isDataConnectionAvailable;	// 0x36ec65b9
- (void)_makeDataConnectionAvailable:(BOOL)available;	// 0x36ec6775
- (void)_notifyTarget:(unsigned)target;	// 0x36ec4721
// declared property getter: - (SCPreferencesRef)_prefs;	// 0x36ec6d21
- (void)_releaseCTServerConnection;	// 0x36ec64a9
// declared property getter: - (void *)_serverConnection;	// 0x36ec6cc1
- (void)_setFastDormancySuspended:(BOOL)suspended;	// 0x36ec4d91
// declared property getter: - (void *)_suspendDormancyAssertion;	// 0x36ec6ce1
- (void)_synchronize;	// 0x36ec4589
- (void)addCellularAutoAssociationClientToken:(id)token;	// 0x36ec5ce1
- (void)addFastDormancyDisableToken:(id)token;	// 0x36ec508d
- (void)addWiFiAutoAssociationClientToken:(id)token;	// 0x36ec5a55
// declared property getter: - (BOOL)autoAssociateCellular;	// 0x36ec5c81
// declared property getter: - (BOOL)autoAssociateWiFi;	// 0x36ec5a29
// declared property getter: - (id)cellularAutoAssociationTokens;	// 0x36ec6ca1
// declared property getter: - (BOOL)dataConnectionExists;	// 0x36ec6a4d
// declared property getter: - (BOOL)dataContextActive;	// 0x36ec6e21
- (void)dealloc;	// 0x36ec4405
// declared property getter: - (BOOL)disableFastDormancy;	// 0x36ec502d
// declared property getter: - (id)disableFastDormancyTokens;	// 0x36ec6c61
// declared property getter: - (BOOL)has2GDataConnection;	// 0x36ec6a59
// declared property getter: - (BOOL)inValidSIMState;	// 0x36ec6965
// declared property getter: - (BOOL)isAirplaneModeEnabled;	// 0x36ec4789
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x36ec6b99
// declared property getter: - (BOOL)isDataSwitchEnabled;	// 0x36ec6b39
// declared property getter: - (BOOL)isHostingWiFiHotSpot;	// 0x36ec5241
// declared property getter: - (BOOL)isWiFiAssociated;	// 0x36ec587d
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x36ec59b9
// declared property getter: - (id)lock;	// 0x36ec6c41
- (void)refresh;	// 0x36ec4805
// declared property getter: - (BOOL)registered;	// 0x36ec6de1
- (void)removeCellularAutoAssociationClientToken:(id)token;	// 0x36ec5dd5
- (void)removeFastDormancyDisableToken:(id)token;	// 0x36ec5185
- (void)removeWiFiAutoAssociationClientToken:(id)token;	// 0x36ec5b4d
// declared property setter: - (void)setCellularAutoAssociationTokens:(id)tokens;	// 0x36ec6cb1
- (void)setDataConnectionActive:(BOOL)active;	// 0x36ec6bc1
// declared property setter: - (void)setDataContextActive:(BOOL)active;	// 0x36ec6e31
// declared property setter: - (void)setDisableFastDormancyTokens:(id)tokens;	// 0x36ec6c71
// declared property setter: - (void)setLock:(id)lock;	// 0x36ec6c51
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x36ec6df1
// declared property setter: - (void)setShouldBringUpDataContext:(BOOL)bringUpDataContext;	// 0x36ec6e11
// declared property setter: - (void)setWiFiAutoAssociationTokens:(id)tokens;	// 0x36ec6c91
// declared property setter: - (void)setWifiManager:(void *)manager;	// 0x36ec6d11
// declared property setter: - (void)set_applySkipCount:(int)count;	// 0x36ec6dd1
// declared property setter: - (void)set_cachedAirplaneMode:(BOOL)mode;	// 0x36ec6d71
// declared property setter: - (void)set_cellAssertion:(void *)assertion;	// 0x36ec6d91
// declared property setter: - (void)set_ctServerConnection:(CTServerConnectionRef)connection;	// 0x36ec6d51
// declared property setter: - (void)set_isCachedAirplaneModeValid:(BOOL)valid;	// 0x36ec6db1
// declared property setter: - (void)set_prefs:(SCPreferencesRef)prefs;	// 0x36ec6d31
// declared property setter: - (void)set_serverConnection:(void *)connection;	// 0x36ec6cd1
// declared property setter: - (void)set_suspendDormancyAssertion:(void *)assertion;	// 0x36ec6cf1
// declared property getter: - (BOOL)shouldBringUpDataContext;	// 0x36ec6e01
- (void)showNetworkOptions;	// 0x36ec5c09
// declared property getter: - (id)wiFiAutoAssociationTokens;	// 0x36ec6c81
// declared property getter: - (id)wiFiScaledRSSI;	// 0x36ec55bd
// declared property getter: - (id)wiFiScaledRate;	// 0x36ec571d
// declared property getter: - (id)wiFiSignalStrength;	// 0x36ec545d
// declared property getter: - (void *)wifiManager;	// 0x36ec6d01
// declared property getter: - (BOOL)willTryToAutoAssociateWiFiNetwork;	// 0x36ec52c9
// declared property getter: - (BOOL)willTryToSearchForWiFiNetwork;	// 0x36ec53cd
@end
