/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRTextField.h"

@class BRTextControl, ATVIPv4AddressSelectionControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
	ATVIPv4AddressSelectionControl *_addressPicker;	// 84 = 0x54
	BRTextControl *_labelLayer;	// 88 = 0x58
	CGSize _addressPickerSize;	// 92 = 0x5c
	float _labelPadding;	// 100 = 0x64
	id<BRTextFieldDelegate> _textFieldDelegate;	// 104 = 0x68
}
- (id)init;	// 0x212569
- (void)_handlePlayPauseButton:(id)button;	// 0x212dc5
- (void)_layoutUI;	// 0x212ee1
- (id)accessibilityLabel;	// 0x212ec1
- (id)accessibilityTraitsList;	// 0x212e41
- (BOOL)brEventAction:(id)action;	// 0x2129ad
- (void)dealloc;	// 0x21264d
- (BOOL)isAccessibilityElement;	// 0x212e3d
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x2126b1
- (void)reset;	// 0x212911
- (void)setDelegate:(id)delegate;	// 0x21279d
- (void)setFrame:(CGRect)frame;	// 0x212959
- (void)setInitialAddress:(id)address;	// 0x2128f1
- (void)setLabel:(id)label;	// 0x2127ad
- (void)setString:(id)string;	// 0x212da5
- (id)stringValue;	// 0x212d85
@end

