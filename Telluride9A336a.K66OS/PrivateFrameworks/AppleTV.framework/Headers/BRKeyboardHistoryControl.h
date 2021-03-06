/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRListView;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
@private
	NSArray *_textEntryHistoryClients;	// 60 = 0x3c
	NSArray *_textEntryHistoryBehaviors;	// 64 = 0x40
	BRListView *_list;	// 68 = 0x44
	CGSize _preferredSize;	// 72 = 0x48
	float _listOriginXOffset;	// 80 = 0x50
	float _listWidth;	// 84 = 0x54
}
@property(retain) id focusedKeyControl;	// G=0x33acb735; S=0x33acb739; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x33acb4b5
- (void)dealloc;	// 0x33acb501
- (BOOL)focusIsAtRightEdge;	// 0x33acb731
// converted property getter: - (id)focusedKeyControl;	// 0x33acb735
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x33acb741
- (void)layoutSubcontrols;	// 0x33acb575
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x33acb73d
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x33acb739
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x33acb701
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x33acb661
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33acb645
@end

