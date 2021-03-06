/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

@interface MCRestrictionManager : NSObject {
@private
	NSMutableDictionary *_defaultRestrictions;	// 4 = 0x4
	NSMutableDictionary *_restrictions;	// 8 = 0x8
	NSMutableDictionary *_profileRestrictions;	// 12 = 0xc
	NSMutableDictionary *_clientRestrictions;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	dispatch_queue_s *_syncQueue;	// 44 = 0x2c
	dispatch_queue_s *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x365570c9; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x36557649; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x36556f95; converted property
@property(assign) int senderPID;	// G=0x36556679; S=0x36556689; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x36557539; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x36559051
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x3655a55d
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x36559165
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x36559281
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x36559339
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x365593ed
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x365593ad
+ (id)defaultSettingsDict;	// 0x3655942d
+ (id)defaultValueForSetting:(id)setting;	// 0x365592e5
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x365596f1
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x365595f1
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x3655951d
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x36559681
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x36559449
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x36559cb1
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x36559a61
+ (id)sharedManager;	// 0x3655a531
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x3655962d
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x36559091
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x36559239
- (id)_clientRestrictions;	// 0x3655bdf5
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x36557f5d
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x36557f9d
- (id)_currentRestrictionsDictionary;	// 0x3655c1ed
- (id)_defaultRestrictionsDictionary;	// 0x3655c2bd
- (id)_defaultSettingsDictionary;	// 0x36557c69
- (id)_effectiveUserSettings;	// 0x3655af3d
- (id)_init;	// 0x3655b389
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x3655b505
- (id)_loadClientLoaders;	// 0x3655b569
- (id)_profileRestrictions;	// 0x3655c069
- (BOOL)_recomputeEffectiveUserSettings;	// 0x3655a855
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x3655bb85
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x3655bd89
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x3655ae39
- (void)_setRestrictions:(id)restrictions;	// 0x3655c165
- (BOOL)_setUserSettings:(id)settings;	// 0x3655afe5
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x36557fdd
- (id)_userSettings;	// 0x3655b081
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x3655801d
// converted property getter: - (id)clientRestrictions;	// 0x365570c9
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x365571d9
- (id)combinedProfileRestrictions;	// 0x3655bef1
- (id)currentRestrictionsDictionary;	// 0x36556e85
- (void)dealloc;	// 0x3655b1e9
- (id)defaultRestrictionsDictionary;	// 0x36556d61
- (id)description;	// 0x3655b30d
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x3655a815
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x3655a7d5
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x3655a781
// converted property getter: - (id)effectiveUserSettings;	// 0x36557649
- (id)effectiveValueForSetting:(id)setting;	// 0x3655a749
- (void)invalidateRestrictions;	// 0x36556699
- (void)invalidateSettings;	// 0x3655678d
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x3655a6a5
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x365578e5
- (void)notifyClientsToRecomputeCompliance;	// 0x3655b40d
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x365568d9
- (id)objectForFeature:(id)feature;	// 0x3655b129
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x36558ffd
// converted property getter: - (id)profileRestrictions;	// 0x36556f95
- (BOOL)recomputeNagMetadata;	// 0x365588fd
- (void)removeBoolSetting:(id)setting;	// 0x365569b9
- (BOOL)removeOrphanedClientRestrictions;	// 0x365583b1
- (void)removeValueSetting:(id)setting;	// 0x36556b25
- (void)resetAllSettingsToDefaults;	// 0x36556c91
- (int)restrictedBoolForFeature:(id)feature;	// 0x3655b1a9
// declared property getter: - (int)senderPID;	// 0x36556679
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x365582cd
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3655b9e9
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x36557759
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x36557c85
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x36556689
- (void)setShowNagMessage;	// 0x3655684d
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x3655baed
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x36557311
// converted property getter: - (id)userSettings;	// 0x36557539
- (id)valueForFeature:(id)feature;	// 0x3655b169
@end

