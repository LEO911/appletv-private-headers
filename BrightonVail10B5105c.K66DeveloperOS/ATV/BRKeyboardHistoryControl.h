/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class BRListView, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
	NSArray *_textEntryHistoryClients;	// 96 = 0x60
	NSArray *_textEntryHistoryBehaviors;	// 100 = 0x64
	BRListView *_list;	// 104 = 0x68
	CGSize _preferredSize;	// 108 = 0x6c
	float _listOriginXOffset;	// 116 = 0x74
	float _listWidth;	// 120 = 0x78
}
@property(retain) id focusedKeyControl;	// G=0x31265d; S=0x312661; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x3123e9
- (void)dealloc;	// 0x312435
- (BOOL)focusIsAtRightEdge;	// 0x312659
// converted property getter: - (id)focusedKeyControl;	// 0x31265d
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x312669
- (void)layoutSubcontrols;	// 0x3124ad
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x312665
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x312661
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x312629
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x312595
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31257d
@end
