/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardNumbers : BRKeyboard {
@private
	BRControl *_thirdRow;	// 48 = 0x30
}
- (id)init;	// 0x3323b7e9
- (float)_actionKeysContainerSpacing;	// 0x3323ba25
- (id)_keyboardDataFileName;	// 0x3323b9e1
- (float)_mainKeysHorizontalSpacing;	// 0x3323ba11
- (float)_mainKeysVerticalSpacing;	// 0x3323ba09
- (int)_numberOfMainKeyColumns;	// 0x3323ba05
- (int)_numberOfMainKeyRows;	// 0x3323ba01
- (id)_optionCharactersForKeyboardInput;	// 0x3323b9fd
- (id)_popupKeyboardDataFileName;	// 0x3323b9d5
- (float)_preferredTextEntryControlWidth;	// 0x3323ba19
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3323ba2d
- (void)dealloc;	// 0x3323b845
- (id)keyboardControl;	// 0x3323b8c5
- (CGRect)keyboardControlFrame;	// 0x3323ba35
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x3323b9d1
- (id)name;	// 0x3323b8b9
- (id)switchToThisKeyboardIdentifier;	// 0x3323b891
@end

