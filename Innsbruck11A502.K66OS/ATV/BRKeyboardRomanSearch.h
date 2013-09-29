/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardRomanLogIn.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x3a3bf9
- (float)_mainKeysVerticalSpacing;	// 0x3a3bf1
- (int)_numberOfMainKeyRows;	// 0x3a3bed
- (float)_preferredTextEntryControlWidth;	// 0x3a3c01
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3a3c0d
- (id)attributesForTextFieldLabel;	// 0x3a3ba9
- (id)customizedTextEntryFieldControls;	// 0x3a3ab9
- (void)customizedTextFieldControlsWereRemoved;	// 0x3a3b7d
- (void)dealloc;	// 0x3a39ed
- (CGRect)keyboardControlFrame;	// 0x3a3c15
- (id)name;	// 0x3a3bdd
- (BOOL)requiresTextFieldLabel;	// 0x3a3be9
- (CGRect)spinnerFrame;	// 0x3a3d19
- (void)startSpinning;	// 0x3a3a39
- (void)stopSpinning;	// 0x3a3a79
- (CGRect)tabControlFrame;	// 0x3a3e41
- (CGRect)textFieldBackgroundFrame;	// 0x3a3c65
- (CGRect)textFieldFrame;	// 0x3a3c91
- (CGRect)textFieldLabelFrame;	// 0x3a3c39
@end
