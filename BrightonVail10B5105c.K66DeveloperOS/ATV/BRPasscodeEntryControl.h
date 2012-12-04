/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
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
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x32d9e1
- (void)_handlePlayPauseButton:(id)button;	// 0x32e2f1
- (void)_layoutUI;	// 0x32e369
- (void)_shakeAnimationCompleted:(id)completed;	// 0x32df39
- (id)accessibilityLabel;	// 0x32e9b5
- (id)accessibilityTraitsList;	// 0x32e935
- (BOOL)brEventAction:(id)action;	// 0x32dfb1
- (void)controlWasFocused;	// 0x32e1b1
- (void)controlWasUnfocused;	// 0x32e235
- (void)dealloc;	// 0x32db45
- (void)deviceKeyboardClose;	// 0x32e3ad
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x32e555
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x32e435
- (BOOL)isAccessibilityElement;	// 0x32e931
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x32dbd5
- (void)reset;	// 0x32dca5
- (void)setDelegate:(id)delegate;	// 0x32dc75
- (void)setFrame:(CGRect)frame;	// 0x32df69
- (void)setInitialPasscode:(id)passcode;	// 0x32dc85
- (void)setKeyboardTitle:(id)title;	// 0x32e275
- (void)setString:(id)string;	// 0x32e2d1
- (void)shake;	// 0x32dd49
- (id)stringValue;	// 0x32e2b1
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x32dc55
@end
