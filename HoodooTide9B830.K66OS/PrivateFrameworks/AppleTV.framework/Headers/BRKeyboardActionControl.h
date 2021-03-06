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
- (id)init;	// 0x32a098a5
- (id)accessibilityLabel;	// 0x32a09d7d
- (id)accessibilityTraits;	// 0x32a09d51
- (id)description;	// 0x32a098f5
- (CGRect)focusCursorFrame;	// 0x32a099cd
- (BOOL)isAccessibilityElement;	// 0x32a09d4d
- (void)layoutSubcontrols;	// 0x32a09be1
- (void)setCharacterControlSize:(CGSize)size;	// 0x32a09aa5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a09b01
- (id)wrappedControl;	// 0x32a09ab9
@end

