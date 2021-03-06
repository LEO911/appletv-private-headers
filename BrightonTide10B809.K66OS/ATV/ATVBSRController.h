/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class NSTimer, CADisplay, NSArray, BRDisplayMode, NSString, ATVBSRLayer;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
	id _completionBlock;	// 144 = 0x90
	ATVBSRLayer *_bsrControl;	// 148 = 0x94
	int _selectionKind;	// 152 = 0x98
	BRDisplayMode *_originalMode;	// 156 = 0x9c
	BRDisplayMode *_failedMode;	// 160 = 0xa0
	BOOL _originalModeWasAuto;	// 164 = 0xa4
	CADisplay *_mainDisplay;	// 168 = 0xa8
	NSString *_mainDisplayUniqueID;	// 172 = 0xac
	NSArray *_listOfResolutionsToTry;	// 176 = 0xb0
	NSTimer *_modeTimer;	// 180 = 0xb4
	int _secondsLeftBeforeNextDisplayMode;	// 184 = 0xb8
	int _attemptedModeNumber;	// 188 = 0xbc
	int _numberOfBSRAttempts;	// 192 = 0xc0
	BOOL _isBSRController;	// 196 = 0xc4
	int _result;	// 200 = 0xc8
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x147aa1
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x147b25
- (id)init;	// 0x147b7d
- (void)_availableModesChanged;	// 0x148fc9
- (id)_countdownString;	// 0x148aa1
- (BOOL)_executeDisplayChangeEvent;	// 0x148b69
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x1484f9
- (id)_nextModeToTry;	// 0x148999
- (void)_playResolutionSwitchFailedSound;	// 0x148f51
- (void)_restoreOriginalModeAndPopController;	// 0x148e71
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x14884d
- (void)_timerCallback:(id)callback;	// 0x148b05
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x1487c1
- (BOOL)brEventAction:(id)action;	// 0x147fc5
- (void)dealloc;	// 0x147b85
- (float)heightForRow:(long)row;	// 0x148381
- (long)itemCount;	// 0x148345
- (id)itemForRow:(long)row;	// 0x148269
- (void)itemSelected:(long)selected;	// 0x148061
- (void)layoutSubcontrols;	// 0x147c61
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x148389
- (BOOL)rowSelectable:(long)selectable;	// 0x148385
- (id)titleForRow:(long)row;	// 0x148159
- (void)wasPopped;	// 0x147f01
- (void)wasPushed;	// 0x147d6d
@end

