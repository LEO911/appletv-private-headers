/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class ATVBSRLayer, BRDisplayMode, NSTimer, NSArray, CADisplay, NSString;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
@private
	id _completionBlock;	// 124 = 0x7c
	ATVBSRLayer *_bsrControl;	// 128 = 0x80
	int _selectionKind;	// 132 = 0x84
	BRDisplayMode *_originalMode;	// 136 = 0x88
	BRDisplayMode *_failedMode;	// 140 = 0x8c
	BOOL _originalModeWasAuto;	// 144 = 0x90
	CADisplay *_mainDisplay;	// 148 = 0x94
	NSString *_mainDisplayUniqueID;	// 152 = 0x98
	NSArray *_listOfResolutionsToTry;	// 156 = 0x9c
	NSTimer *_modeTimer;	// 160 = 0xa0
	int _secondsLeftBeforeNextDisplayMode;	// 164 = 0xa4
	int _attemptedModeNumber;	// 168 = 0xa8
	int _numberOfBSRAttempts;	// 172 = 0xac
	BOOL _isBSRController;	// 176 = 0xb0
	int _result;	// 180 = 0xb4
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x35cb7be1
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x35cb7c65
- (id)init;	// 0x35cb7cbd
- (void)_availableModesChanged;	// 0x35cb90e9
- (id)_countdownString;	// 0x35cb8be1
- (BOOL)_executeDisplayChangeEvent;	// 0x35cb8ca5
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x35cb863d
- (id)_nextModeToTry;	// 0x35cb8ae1
- (void)_playResolutionSwitchFailedSound;	// 0x35cb9075
- (void)_restoreOriginalModeAndPopController;	// 0x35cb8f9d
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x35cb8995
- (void)_timerCallback:(id)callback;	// 0x35cb8c45
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x35cb8901
- (BOOL)brEventAction:(id)action;	// 0x35cb80fd
- (void)dealloc;	// 0x35cb7cc5
- (float)heightForRow:(long)row;	// 0x35cb84ad
- (long)itemCount;	// 0x35cb8471
- (id)itemForRow:(long)row;	// 0x35cb8395
- (void)itemSelected:(long)selected;	// 0x35cb8199
- (void)layoutSubcontrols;	// 0x35cb7da1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35cb84b5
- (BOOL)rowSelectable:(long)selectable;	// 0x35cb84b1
- (id)titleForRow:(long)row;	// 0x35cb8289
- (void)wasPopped;	// 0x35cb8035
- (void)wasPushed;	// 0x35cb7ea1
@end

