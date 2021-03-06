/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockViewWithKeyboard.h"


@interface SBDeviceLockViewWithKeyboardPhone : SBDeviceLockViewWithKeyboard {
}
@property(assign) BOOL showsEmergencyCallButton;	// G=0x3570cc51; S=0x3570cc91; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3570cc05
- (void)_layoutForCurrentOrientation;	// 0x3570cdad
- (void)hardwareReturnKeyPressed:(id)pressed;	// 0x3570cd9d
- (void)returnKeyPressed:(id)pressed;	// 0x3570cd25
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3570cc91
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x3570cc51
@end

