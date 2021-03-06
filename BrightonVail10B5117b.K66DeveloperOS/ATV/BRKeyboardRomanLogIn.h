/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x3130b9
- (float)_actionKeysContainerSpacing;	// 0x313215
- (float)_actionKeysContainerWidth;	// 0x31320d
- (id)_keyboardDataFileName;	// 0x3131cd
- (float)_mainKeysHorizontalSpacing;	// 0x3131f9
- (float)_mainKeysVerticalSpacing;	// 0x3131f1
- (int)_numberOfMainKeyColumns;	// 0x3131ed
- (int)_numberOfMainKeyRows;	// 0x3131e9
- (id)_popupKeyboardDataFileName;	// 0x3131c1
- (float)_preferredTextEntryControlWidth;	// 0x313201
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x31321d
- (id)accessibilityLabel;	// 0x313199
- (void)dealloc;	// 0x313115
- (CGRect)keyboardControlFrame;	// 0x313235
- (float)layoutGapBelowKeyboardControl;	// 0x313225
- (float)layoutGapBelowTabControl;	// 0x31322d
- (id)name;	// 0x31318d
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x313189
- (id)switchToThisKeyboardIdentifier;	// 0x313161
- (CGRect)tabControlFrame;	// 0x31325d
@end

