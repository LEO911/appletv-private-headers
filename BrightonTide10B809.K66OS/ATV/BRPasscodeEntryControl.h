/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextField.h"
#import "BRControl.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface BRPasscodeEntryControl : BRControl <BRTextField> {
	BRPasscodeSelectionLayer *_passcodeLayer;	// 84 = 0x54
	unsigned _numDigits;	// 88 = 0x58
	BOOL _isUserEditable;	// 92 = 0x5c
	CGSize _passcodeLayerSize;	// 96 = 0x60
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 104 = 0x68
	id<BRTextFieldDelegate> _textFieldDelegate;	// 108 = 0x6c
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x33be49
- (void)_handlePlayPauseButton:(id)button;	// 0x33c8c5
- (void)_layoutUI;	// 0x33c93d
- (void)_shakeAnimationCompleted:(id)completed;	// 0x33c3a1
- (id)accessibilityLabel;	// 0x33cf89
- (id)accessibilityTraitsList;	// 0x33cf09
- (BOOL)brEventAction:(id)action;	// 0x33c419
- (void)controlWasFocused;	// 0x33c785
- (void)controlWasUnfocused;	// 0x33c809
- (void)dealloc;	// 0x33bfad
- (void)deviceKeyboardClose;	// 0x33c981
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x33cb29
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x33ca09
- (BOOL)isAccessibilityElement;	// 0x33cf05
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x33c03d
- (void)reset;	// 0x33c10d
- (void)setDelegate:(id)delegate;	// 0x33c0dd
- (void)setFrame:(CGRect)frame;	// 0x33c3d1
- (void)setInitialPasscode:(id)passcode;	// 0x33c0ed
- (void)setKeyboardTitle:(id)title;	// 0x33c849
- (void)setString:(id)string;	// 0x33c8a5
- (void)shake;	// 0x33c1b1
- (id)stringValue;	// 0x33c885
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x33c0bd
@end
