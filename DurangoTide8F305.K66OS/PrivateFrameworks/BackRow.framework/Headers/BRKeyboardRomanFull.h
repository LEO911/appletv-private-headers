/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboard.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardRomanFull : BRKeyboard {
}
- (id)init;	// 0x32986775
- (id)_keyboardDataFileName;	// 0x329867c9
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x329865e5
- (float)_mainKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x329867e1
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x32986971
- (float)_mainKeysVerticalSpacing;	// 0x329865c9
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x329868d1
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x3298669d
- (int)_numberOfMainKeyRows;	// 0x329865c5
- (float)_preferredGlyphHeight:(id)height;	// 0x329865bd
- (float)_preferredGlyphWidth:(id)width;	// 0x329865b5
- (float)_textFieldBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x329867fd
- (CGSize)_textFieldBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x32986819
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x329865d1
- (BOOL)canShowLanguageSwitchButton;	// 0x329865ad
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x32986735
- (id)name;	// 0x3298659d
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x329866d5
- (BOOL)requiresTextFieldLabel;	// 0x329865b1
@end
