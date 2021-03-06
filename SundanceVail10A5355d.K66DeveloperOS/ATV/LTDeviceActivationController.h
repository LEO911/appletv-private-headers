/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "ATVDeviceActivationDelegate.h"

@class BRAlertControl, BRTextControl, BRWaitPromptControl, ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface LTDeviceActivationController : BRController <ATVDeviceActivationDelegate> {
	BRWaitPromptControl *_prompt;	// 96 = 0x60
	BRTextControl *_subtext;	// 100 = 0x64
	BRAlertControl *_error;	// 104 = 0x68
	BOOL _userSkippedActivation;	// 108 = 0x6c
	ATVDeviceActivationAction *_action;	// 112 = 0x70
}
- (id)init;	// 0x61f15
- (void).cxx_destruct;	// 0x625c1
- (void)_adjustSubtext;	// 0x62825
- (void)_networkChanged:(id)changed;	// 0x6272d
- (void)_timeChangeNotification:(id)notification;	// 0x6261d
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x6253d
- (void)activationSucceeded:(id)succeeded;	// 0x624b9
- (void)layoutSubcontrols;	// 0x623bd
- (void)wasPopped;	// 0x622f1
- (void)wasPushed;	// 0x620e9
@end

