/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRListView, BRCursorControl, BRMediaShelfView;

__attribute__((visibility("hidden")))
@interface ATVShelfListView : BRControl {
	BRCursorControl *_cursor;	// 84 = 0x54
	BRControl *_headerControl;	// 88 = 0x58
	BRMediaShelfView *_centerShelf;	// 92 = 0x5c
	BRListView *_bottomList;	// 96 = 0x60
}
@property(retain, nonatomic) BRListView *bottomList;	// G=0xed1e1; S=0xecc55; @synthesize=_bottomList
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0xed1d1; S=0xecba9; @synthesize=_centerShelf
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0xed1a1; S=0xed1b1; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0xed1c1; S=0xecb35; @synthesize=_headerControl
- (id)init;	// 0xec98d
- (void)_focusChanged:(id)changed;	// 0xed141
// declared property getter: - (id)bottomList;	// 0xed1e1
// declared property getter: - (id)centerShelf;	// 0xed1d1
// declared property getter: - (id)cursor;	// 0xed1a1
- (void)dealloc;	// 0xeca7d
// declared property getter: - (id)headerControl;	// 0xed1c1
- (void)layoutSubcontrols;	// 0xecd29
// declared property setter: - (void)setBottomList:(id)list;	// 0xecc55
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0xecba9
// declared property setter: - (void)setCursor:(id)cursor;	// 0xed1b1
// declared property setter: - (void)setHeaderControl:(id)control;	// 0xecb35
@end

