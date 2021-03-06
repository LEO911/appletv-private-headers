/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsGeneralViewController : BRViewController {
	BOOL _showingCancelDialog;	// 104 = 0x68
	BOOL _canceledSWUpdate;	// 105 = 0x69
	BOOL _showFeatureEnablerByDefault;	// 106 = 0x6a
	BOOL _showInverseDeviceID;	// 107 = 0x6b
	float _updateDownloadPercentage;	// 108 = 0x6c
	int _previewImageType;	// 112 = 0x70
}
- (id)init;	// 0x93095
- (void)_aboutSettingSelected;	// 0x94809
- (void)_accessibilitySettingSelected;	// 0x94b7d
- (unsigned)_adjustIndexBasedOnHiddenItemsForIndex:(unsigned)index;	// 0x94501
- (void)_bluetoothSettingSelected;	// 0x94a31
- (void)_deviceNamedChanged:(id)changed;	// 0x95621
- (void)_enableRetailMode:(BOOL)mode;	// 0x96469
- (void)_featureEnablerSelected;	// 0x950ed
- (BOOL)_hasInstalledProfiles;	// 0x95369
- (void)_incrementSleepTimeout;	// 0x94be5
- (void)_languageSelected:(id)selected;	// 0x954ad
- (void)_languageSettingSelected;	// 0x94aad
- (void)_legalSettingSelected;	// 0x94e85
- (id)_mediaMenuView;	// 0x94689
- (void)_nameSettingSelected;	// 0x94871
- (void)_networkSettingSelected;	// 0x948f9
- (void)_parentalControlsSettingSelected;	// 0x94961
- (void)_remoteControlSettingSelected;	// 0x949c9
- (void)_resetSettingSelected;	// 0x94f15
- (void)_restartSettingSelected;	// 0x94f9d
- (void)_retailSoftwareUpdateSettingSelected;	// 0x96195
- (void)_setImageType:(int)type forPreviewView:(id)previewView;	// 0x94591
- (void)_showHideProgressUI;	// 0x95fa1
- (void)_showInstalledProfiles;	// 0x953b5
- (id)_sleepTimeoutString;	// 0x94699
- (void)_softwareUpdate:(BOOL)update;	// 0x956d1
- (void)_softwareUpdateSettingSelected;	// 0x94a99
- (void)_timeZoneChanged:(id)changed;	// 0x95679
- (void)_timeZoneSelected;	// 0x94b15
- (void)_toggleRetailChannelMode;	// 0x962d5
- (void)_toggleRetailMode;	// 0x961a9
- (void)_toggleShowInverseDeviceID;	// 0x9543d
- (void)_toggleUsageOptInSelected;	// 0x94d31
- (void)_troubleshootingSettingSelected;	// 0x94df5
- (void)_updateCheckFinished:(id)finished;	// 0x95a19
- (void)_updateCheckStarted:(id)started;	// 0x95935
- (void)_updateDownloadFinished:(id)finished;	// 0x95c0d
- (void)_updateDownloadStarted:(id)started;	// 0x95b55
- (void)_updateProgress:(id)progress;	// 0x95ce1
- (id)accessibilityLabel;	// 0x934d5
- (BOOL)brEventAction:(id)action;	// 0x9359d
- (void)dealloc;	// 0x933c5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x93fed
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x943e1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x936d5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x93f55
- (void)textDidChange:(id)text;	// 0x952ad
- (void)textDidEndEditing:(id)text;	// 0x952b1
- (void)wasExhumed;	// 0x9351d
@end

