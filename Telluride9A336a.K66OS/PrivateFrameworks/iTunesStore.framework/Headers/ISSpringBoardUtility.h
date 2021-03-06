/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableSet;

@interface ISSpringBoardUtility : NSObject {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSDictionary *_enabledRemoteNotificationTypes;	// 8 = 0x8
	NSMutableSet *_processAssertions;	// 12 = 0xc
}
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x35eb57ad; 
+ (id)sharedInstance;	// 0x35eb52d1
- (id)init;	// 0x35eb5209
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x35eb5381
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x35eb5405
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x35eb5445
- (void)dealloc;	// 0x35eb5259
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x35eb54e1
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x35eb57ad
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x35eb5b75
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x35eb58a1
- (void)resetEnabledRemoteNotificationTypes;	// 0x35eb5a31
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x35eb5acd
- (void)suspendFrontApplication;	// 0x35eb5b71
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x35eb5c05
@end

