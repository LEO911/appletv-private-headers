/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardActionControl : BRControl {
@private
	CGSize _characterControlSize;	// 48 = 0x30
}
- (id)init;	// 0x35e29ba9
- (id)accessibilityLabel;	// 0x35e2a081
- (id)accessibilityTraits;	// 0x35e2a055
- (id)description;	// 0x35e29bf9
- (CGRect)focusCursorFrame;	// 0x35e29cd1
- (BOOL)isAccessibilityElement;	// 0x35e2a051
- (void)layoutSubcontrols;	// 0x35e29ee5
- (void)setCharacterControlSize:(CGSize)size;	// 0x35e29da9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e29e05
- (id)wrappedControl;	// 0x35e29dbd
@end

