/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockView.h"

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {
	UIKeyboard *_keyboard;	// 116 = 0x74
	BOOL _isAnimating;	// 120 = 0x78
	BOOL _wasMinimizedWhenAnimationStarted;	// 121 = 0x79
	BOOL _triedToMinMaxWhileRotating;	// 122 = 0x7a
	BOOL _previousKeyboardShowedInlineCandidates;	// 123 = 0x7b
}
- (void)_acceptOrCancelReturnKeyPress;	// 0x3277fb29
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3277ed8d
- (void)_layoutEntryView;	// 0x3277fa71
- (void)_layoutForCurrentOrientation;	// 0x3277fa6d
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x3277f939
- (BOOL)becomeFirstResponder;	// 0x3277f125
- (BOOL)canMinMaxKeyboard;	// 0x3277f059
- (void)dealloc;	// 0x3277f0a9
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3277f9c1
- (void)geometryChanged:(id)changed;	// 0x3277fa49
- (BOOL)isKeypadMinimized;	// 0x3277f2d9
- (CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x3277f6c5
- (id)keypadView;	// 0x3277f2c9
- (void)maximize;	// 0x3277f5b9
- (void)minimize;	// 0x3277f4b1
- (BOOL)resignFirstResponder;	// 0x3277f261
- (void)returnKeyPressed:(id)pressed;	// 0x3277f6c1
- (void)setInterfaceOrientation:(int)orientation;	// 0x3277f7a9
- (void)setMinimized:(BOOL)minimized;	// 0x3277f325
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3277f8e1
@end
