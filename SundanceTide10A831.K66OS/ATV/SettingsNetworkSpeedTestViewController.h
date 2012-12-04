/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRSecureResource.h"

@class NSMutableDictionary, SettingsNetworkSpeedTestView;

__attribute__((visibility("hidden")))
@interface SettingsNetworkSpeedTestViewController : BRViewController <BRSecureResource> {
	SettingsNetworkSpeedTestView *_networkSpeedTestView;	// 104 = 0x68
	int _speedTestDialogLevel;	// 108 = 0x6c
	int _currentDownloadTestNumber;	// 112 = 0x70
	NSMutableDictionary *_userInput;	// 116 = 0x74
}
- (id)init;	// 0x983b9
- (void).cxx_destruct;	// 0x98bed
- (int)_bandwidthIntValueForRow:(long)row;	// 0x99421
- (id)_controlNameForCurrentlyExperiencingSlowDownloadScreenAtRow:(long)row;	// 0x99325
- (id)_controlNameForInternetConnectionExpectedSpeedScreenAtRow:(long)row;	// 0x9937d
- (id)_controlNameForLegalDisclosureScreenAtRow:(long)row;	// 0x99305
- (id)_controlNameForResultsScreenAtRow:(long)row;	// 0x99405
- (void)_downloadsComplete:(id)complete;	// 0x999b5
- (void)_networkLogErrorNotification:(id)notification;	// 0x99a8d
- (void)_networkLogUpdateProgressUpdate:(id)update;	// 0x99449
- (void)_postBandwidthVerificationInProgressErrorMessage;	// 0x98d15
- (void)_postStoreConnectionErrorMessage;	// 0x98c21
- (void)_startDownloads;	// 0x99261
- (void)_testCanceled:(id)canceled;	// 0x99a55
- (void)_updateCurrentScreen;	// 0x98e09
- (void)_uploadsComplete:(id)complete;	// 0x99a35
- (void)dealloc;	// 0x98781
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x98a69
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x98945
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x98a3d
- (id)secureResourceAuthenticator;	// 0x987ed
- (void)wasPopped;	// 0x988c5
@end
