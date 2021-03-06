/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
	MBSettingsContext *_settingsContext;	// 4 = 0x4
	NSMutableDictionary *_appsByBundleID;	// 8 = 0x8
}
+ (id)appManager;	// 0x30453851
+ (id)appManagerWithSettingsContext:(id)settingsContext;	// 0x30453899
- (id)initWithSettingsContext:(id)settingsContext;	// 0x304538e1
- (id)_appsWithPlists:(id)plists error:(id *)error;	// 0x30453f89
- (id)_safeHarborsWithError:(id *)error;	// 0x30453ee5
- (id)_userAppsWithError:(id *)error;	// 0x30453e41
- (id)allApps;	// 0x30454109
- (id)allDisabledDomainNames;	// 0x30453999
- (id)allRestrictedDomainNames;	// 0x30453b1d
- (id)appWithBundleID:(id)bundleID;	// 0x30454129
- (id)createSafeHarborForApp:(id)app error:(id *)error;	// 0x30454441
- (void)dealloc;	// 0x30453935
- (BOOL)isDomainNameEnabled:(id)enabled;	// 0x30453a31
- (BOOL)loadAppsWithSafeHarbors:(BOOL)safeHarbors error:(id *)error;	// 0x30453c7d
- (BOOL)processRestoredAppsWithBundleIDs:(id)bundleIDs error:(id *)error;	// 0x30454869
- (void)removeAllDisabledDomainNames;	// 0x30453a05
- (void)removeOldSafeHarbors;	// 0x30454149
- (void)setEnabled:(BOOL)enabled forDomainName:(id)domainName;	// 0x30453a69
@end

