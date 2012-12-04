/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class NSArray, UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView *_alertSheet;	// 4 = 0x4
	BOOL _orderOverSBAlert;	// 8 = 0x8
	BOOL _preventLockOver;	// 9 = 0x9
	BOOL _didEverActivate;	// 10 = 0xa
	BOOL _ignoreIfAlreadyDisplaying;	// 11 = 0xb
	BOOL _didPlayPresentationSound;	// 12 = 0xc
	BOOL _allowInSetup;	// 13 = 0xd
	BOOL _pendInSetupIfNotAllowed;	// 14 = 0xe
	NSArray *_allowedBundleIDs;	// 16 = 0x10
}
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x37080d01; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x37081189; S=0x37081199; @synthesize=_allowInSetup
@property(retain, nonatomic) NSArray *allowedBundleIDs;	// G=0x370811c9; S=0x370811d9; @synthesize=_allowedBundleIDs
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x37080ec5; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x37081169; S=0x37081179; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x370811a9; S=0x370811b9; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x37080fd5; S=0x37080fe5; converted property
+ (id)_alertItemsController;	// 0x37080c91
+ (void)activateAlertItem:(id)item;	// 0x37080cb9
- (id)init;	// 0x37080dc9
- (BOOL)_didEverActivate;	// 0x37081021
- (void)_playPresentationSound;	// 0x37080ed5
- (id)alertItemNotificationDate;	// 0x37081111
- (id)alertItemNotificationSender;	// 0x37081115
- (int)alertItemNotificationType;	// 0x3708110d
- (int)alertPriority;	// 0x3708112d
// converted property getter: - (id)alertSheet;	// 0x37080d01
- (Class)alertSheetClass;	// 0x37080ce5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x37081159
- (BOOL)allowAutoUnlock;	// 0x37080ea1
// declared property getter: - (BOOL)allowInSetup;	// 0x37081189
- (BOOL)allowMenuButtonDismissal;	// 0x37080e9d
// declared property getter: - (id)allowedBundleIDs;	// 0x370811c9
- (double)autoDismissInterval;	// 0x37080f89
- (BOOL)behavesSuperModally;	// 0x3708111d
- (void)buttonDismissed;	// 0x3708108d
- (void)cleanPreviousConfiguration;	// 0x37080f21
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x37080f61
- (void)dealloc;	// 0x37080e25
- (void)didActivate;	// 0x37081085
- (void)didDeactivateForReason:(int)reason;	// 0x37081105
- (void)didFailToActivate;	// 0x370810fd
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x37080ec5
- (void)dismiss;	// 0x370810a1
- (void)dismiss:(int)dismiss;	// 0x370810b5
- (BOOL)dismissOnLock;	// 0x37080eb9
- (BOOL)dismissOnModalDisplayActivation;	// 0x37080ebd
- (BOOL)forcesModalAlertAppearance;	// 0x37081119
- (BOOL)hasActiveKeyboardOnScreen;	// 0x37081131
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x37081169
- (BOOL)isCriticalAlert;	// 0x37080ec1
- (id)lockLabel;	// 0x37080f65
- (float)lockLabelFontSize;	// 0x37080f6d
- (void)noteVolumeOrLockPressed;	// 0x37081109
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x370811a9
- (void)performUnlockAction;	// 0x37080fa1
- (void)playPresentationSound;	// 0x37080ed9
- (BOOL)preventInterruption;	// 0x37081129
// converted property getter: - (BOOL)preventLockOver;	// 0x37080fd5
- (BOOL)reappearsAfterLock;	// 0x37081121
- (BOOL)reappearsAfterUnlock;	// 0x37081125
- (void)screenWillUndim;	// 0x370810f9
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x37081199
// declared property setter: - (void)setAllowedBundleIDs:(id)ids;	// 0x370811d9
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x37081179
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x37080fa5
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x370811b9
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x37080fe5
- (id)shortLockLabel;	// 0x37080f69
- (BOOL)shouldShowInEmergencyCall;	// 0x37080ea9
- (BOOL)shouldShowInLockScreen;	// 0x37080ea5
- (BOOL)togglesMediaControls;	// 0x37080eb5
- (BOOL)undimsScreen;	// 0x37080ead
- (BOOL)unlocksScreen;	// 0x37080eb1
- (void)willActivate;	// 0x37081031
- (void)willDeactivateForReason:(int)reason;	// 0x37081101
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x37081089
@end
