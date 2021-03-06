/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;
@protocol OS_dispatch_queue;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) __weak MCMDMServer *server;	// G=0x34492251; S=0x34492271; @synthesize=_server
+ (id)sharedManager;	// 0x3448633d
+ (id)stringForAppState:(int)appState;	// 0x34492149
- (id)initWithManifestPath:(id)manifestPath;	// 0x344863e1
- (void).cxx_destruct;	// 0x34492285
- (int)__appStateForBundleID:(id)bundleID;	// 0x34487075
- (void)__commitManifest;	// 0x34486931
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x34486961
- (id)__managedAppMetadataByBundleID;	// 0x34486af5
- (id)__metadataForBundleID:(id)bundleID;	// 0x34486e99
- (void)__removeBundleID:(id)anId;	// 0x344873d1
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x34487231
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x34486b6d
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34486d01
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x34491b01
- (id)_appAlreadyQueuedError:(id)error;	// 0x34487b2d
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x34487875
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x34487aa5
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x344883f9
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x344884b1
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x34488579
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x34487ff9
- (id)_downloadingAppIDs;	// 0x34491601
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x3448a0c5
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x34487bb5
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x344877d5
- (id)_notAnAppError;	// 0x34487a21
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3448a31d
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3448a7dd
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x34488c15
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x3448945d
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x3448b1c1
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x34488641
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x3448af15
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x3448ace5
- (void)advanceTransientStates;	// 0x34491cd1
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x34491ed9
- (int)appStateForBundleID:(id)bundleID;	// 0x34487119
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x3448f4ad
- (id)bundleIDsWithFlags:(int)flags;	// 0x3448755d
- (void)cleanUp;	// 0x34487c5d
- (id)doNotBackupAppIDs;	// 0x3449150d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x344869dd
- (BOOL)hasPendingInstallations;	// 0x34491521
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3448b475
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3448d481
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x344867a1
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x344866a1
- (id)managedAppMetadataByBundleID;	// 0x34486bb5
- (id)metadataForBundleID:(id)bundleID;	// 0x34486f01
- (void)removeBundleID:(id)anId;	// 0x34487495
// declared property getter: - (id)server;	// 0x34492251
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x344872f5
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34486d9d
// declared property setter: - (void)setServer:(id)server;	// 0x34492271
- (void)uninstallManagedAppsAccordingToFlags;	// 0x3448f22d
- (void)updateApplicationInstallationStates;	// 0x344917c5
@end

