/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceManager : BRSingleton {
	NSArray *_arrangedAppliances;	// 4 = 0x4
	BOOL _loadingAppliances;	// 8 = 0x8
	NSArray *_appliances;	// 12 = 0xc
	NSMutableDictionary *_applianceIdentifierToApplianceDictionary;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *applianceIdentifierToApplianceDictionary;	// G=0x32ed5d; S=0x32ed71; @synthesize=_applianceIdentifierToApplianceDictionary
@property(copy) NSArray *appliances;	// G=0x32ed39; S=0x32ed4d; @synthesize=_appliances
@property(readonly, assign) NSArray *arrangedAppliances;	// G=0x32e4f5; 
+ (void)setSingleton:(id)singleton;	// 0x32e34d
+ (void)showMainMenu;	// 0x32e35d
+ (id)singleton;	// 0x32e33d
- (id)init;	// 0x32e3b9
- (void)_applianceDidReloadCategories:(id)_appliance;	// 0x32e69d
- (id)_applianceForInfo:(id)info;	// 0x32f105
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x32ed81
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x32f0f5
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x32f0e5
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x32ef91
- (void)_invalidateArrangedAppliances;	// 0x32f211
- (id)_loadApplianceAtPath:(id)path;	// 0x32f681
- (void)_loadAppliances;	// 0x32f2d9
- (BOOL)_shouldLoadApp:(id)app;	// 0x32f221
- (id)applianceForInfo:(id)info;	// 0x32e661
// declared property getter: - (id)applianceIdentifierToApplianceDictionary;	// 0x32ed5d
- (id)applianceInfoForApplianceIdentifier:(id)applianceIdentifier;	// 0x32e629
- (id)applianceInfoList;	// 0x32e5f5
// declared property getter: - (id)appliances;	// 0x32ed39
// declared property getter: - (id)arrangedAppliances;	// 0x32e4f5
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x32ea61
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x32ea91
- (id)controllerForMerchant:(id)merchant;	// 0x32ea4d
- (void)dealloc;	// 0x32e471
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x32ec31
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x32ecb5
- (void)loadAppliances;	// 0x32e505
// declared property setter: - (void)setApplianceIdentifierToApplianceDictionary:(id)applianceDictionary;	// 0x32ed71
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x32ed4d
@end

