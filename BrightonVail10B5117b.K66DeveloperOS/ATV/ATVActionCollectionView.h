/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMediaShelfView, BRCursorControl;

__attribute__((visibility("hidden")))
@interface ATVActionCollectionView : BRControl {
	BRControl *_headerControl;	// 84 = 0x54
	BRControl *_content;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRCursorControl *_cursor;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x130785; S=0x130415; @synthesize=_bottomShelf
@property(retain, nonatomic) BRControl *content;	// G=0x130775; S=0x130369; @synthesize=_content
@property(retain) BRCursorControl *cursor;	// G=0x130795; S=0x1307a9; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0x130765; S=0x1302f5; @synthesize=_headerControl
- (id)init;	// 0x1301c9
// declared property getter: - (id)bottomShelf;	// 0x130785
// declared property getter: - (id)content;	// 0x130775
// declared property getter: - (id)cursor;	// 0x130795
- (void)dealloc;	// 0x130269
// declared property getter: - (id)headerControl;	// 0x130765
- (void)layoutSubcontrols;	// 0x13049d
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x130415
// declared property setter: - (void)setContent:(id)content;	// 0x130369
// declared property setter: - (void)setCursor:(id)cursor;	// 0x1307a9
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x1302f5
@end

