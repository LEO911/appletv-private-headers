/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIAccessibilityElement.h> // Unknown library
#import "UIAccessibility-Structs.h"


@interface UIAccessibilityElement (Private)
@property(assign, nonatomic) id accessibilityDelegate;	// G=0x32ea5f0d; S=0x32ea5f49; @dynamic
@property(assign, nonatomic) CGRect bounds;	// G=0x32ea61cd; S=0x32ea616d; @dynamic
- (int)_accessibilityBestCharacterModeForHandwriting;	// 0x32ea63a1
- (BOOL)_accessibilityCanDeleteCharacterWithHandwriting;	// 0x32ea6271
- (BOOL)_accessibilityCanHandleDirectHandwritingInput;	// 0x32ea6311
- (void)_accessibilityDeleteCharacterAtCursor;	// 0x32ea6229
- (void)_accessibilityInsertText:(id)text atPosition:(int)position;	// 0x32ea62b9
- (BOOL)_accessibilityShouldEchoHandwritingCharacter;	// 0x32ea6359
// declared property getter: - (id)accessibilityDelegate;	// 0x32ea5f0d
// declared property getter: - (CGRect)bounds;	// 0x32ea61cd
- (id)dataForKey:(id)key;	// 0x32ea5fad
- (void)delegateSpecificsForAttribute:(int)attribute delegate:(id *)delegate selector:(SEL *)selector;	// 0x32ea60d5
// declared property setter: - (void)setAccessibilityDelegate:(id)delegate;	// 0x32ea5f49
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x32ea616d
- (void)setData:(id)data forKey:(id)key;	// 0x32ea5f9d
- (void)setDelegate:(id)delegate forAttribute:(int)attribute withSelector:(SEL)selector;	// 0x32ea5fc1
- (void)setTableCellYOffset:(float)offset;	// 0x32ea5fbd
@end

