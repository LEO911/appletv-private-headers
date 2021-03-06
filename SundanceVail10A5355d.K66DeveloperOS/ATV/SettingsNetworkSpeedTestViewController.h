/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRViewController.h"

@class NSMutableDictionary, SettingsNetworkSpeedTestView;

__attribute__((visibility("hidden")))
@interface SettingsNetworkSpeedTestViewController : BRViewController <BRSecureResource> {
	SettingsNetworkSpeedTestView *_networkSpeedTestView;	// 100 = 0x64
	int _speedTestDialogLevel;	// 104 = 0x68
	int _currentDownloadTestNumber;	// 108 = 0x6c
	NSMutableDictionary *_userInput;	// 112 = 0x70
}
- (id)init;	// 0x8e0a5
- (void).cxx_destruct;	// 0x8e8d9
- (int)_bandwidthIntValueForRow:(long)row;	// 0x8f10d
- (id)_controlNameForCurrentlyExperiencingSlowDownloadScreenAtRow:(long)row;	// 0x8f011
- (id)_controlNameForInternetConnectionExpectedSpeedScreenAtRow:(long)row;	// 0x8f069
- (id)_controlNameForLegalDisclosureScreenAtRow:(long)row;	// 0x8eff1
- (id)_controlNameForResultsScreenAtRow:(long)row;	// 0x8f0f1
- (void)_downloadsComplete:(id)complete;	// 0x8f6a1
- (void)_networkLogErrorNotification:(id)notification;	// 0x8f779
- (void)_networkLogUpdateProgressUpdate:(id)update;	// 0x8f135
- (void)_postBandwidthVerificationInProgressErrorMessage;	// 0x8ea01
- (void)_postStoreConnectionErrorMessage;	// 0x8e90d
- (void)_startDownloads;	// 0x8ef4d
- (void)_testCanceled:(id)canceled;	// 0x8f741
- (void)_updateCurrentScreen;	// 0x8eaf5
- (void)_uploadsComplete:(id)complete;	// 0x8f721
- (void)dealloc;	// 0x8e46d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8e755
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8e631
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8e729
- (id)secureResourceAuthenticator;	// 0x8e4d9
- (void)wasPopped;	// 0x8e5b1
@end

