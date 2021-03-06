/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRCursorControl, BRPhotoBrowserBannerButton, BRGridView, BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *headerView;	// 84 = 0x54
	BRPhotoBrowserBannerButton *slideshowButton;	// 88 = 0x58
	BRGridView *gridView;	// 92 = 0x5c
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 96 = 0x60
	BRScrollControl *_scrollControl;	// 100 = 0x64
	BRCursorControl *_cursorControl;	// 104 = 0x68
	int _style;	// 108 = 0x6c
}
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x34079d; S=0x3407ad; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x3407dd; S=0x3407ed; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x3407bd; S=0x3407cd; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x34078d; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x34076d; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x34077d; @synthesize
@property(assign, nonatomic) int style;	// G=0x3407fd; S=0x34080d; @synthesize=_style
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x340251
- (id)initWithPhotoBrowserViewStyle:(int)photoBrowserViewStyle;	// 0x340299
// declared property getter: - (id)_corkBoardControl;	// 0x34079d
// declared property getter: - (id)_cursorControl;	// 0x3407dd
- (id)_iconWithName:(id)name;	// 0x340e1d
// declared property getter: - (id)_scrollControl;	// 0x3407bd
- (void)_setupControls;	// 0x34081d
- (void)dealloc;	// 0x340385
- (void)focusControlAtIndex:(long)index;	// 0x34068d
// declared property getter: - (id)gridView;	// 0x34078d
// declared property getter: - (id)headerView;	// 0x34076d
- (void)layoutSubcontrols;	// 0x340439
// declared property setter: - (void)setStyle:(int)style;	// 0x34080d
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x3407ad
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x3407ed
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x3407cd
// declared property getter: - (id)slideshowButton;	// 0x34077d
// declared property getter: - (int)style;	// 0x3407fd
@end

