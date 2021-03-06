/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl, BRScrollControl, BRCursorControl, BRGridView, BRPhotoBrowserBannerButton;

__attribute__((visibility("hidden")))
@interface ATVPhotoBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *headerView;	// 84 = 0x54
	BRPhotoBrowserBannerButton *slideshowButton;	// 88 = 0x58
	BRPhotoBrowserBannerButton *settingsButton;	// 92 = 0x5c
	BRGridView *gridView;	// 96 = 0x60
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 100 = 0x64
	BRScrollControl *_scrollControl;	// 104 = 0x68
	BRCursorControl *_cursorControl;	// 108 = 0x6c
	int _style;	// 112 = 0x70
}
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x32569d; S=0x3256ad; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x3256dd; S=0x3256ed; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x3256bd; S=0x3256cd; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x32568d; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x32565d; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x32567d; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x32566d; @synthesize
@property(assign, nonatomic) int style;	// G=0x3256fd; S=0x32570d; @synthesize=_style
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x325105
- (id)initWithPhotoBrowserViewStyle:(int)photoBrowserViewStyle;	// 0x32514d
// declared property getter: - (id)_corkBoardControl;	// 0x32569d
// declared property getter: - (id)_cursorControl;	// 0x3256dd
- (id)_iconWithName:(id)name;	// 0x325d1d
// declared property getter: - (id)_scrollControl;	// 0x3256bd
- (void)_setupControls;	// 0x32571d
- (void)dealloc;	// 0x325261
- (void)focusControlAtIndex:(long)index;	// 0x32557d
// declared property getter: - (id)gridView;	// 0x32568d
// declared property getter: - (id)headerView;	// 0x32565d
- (void)layoutSubcontrols;	// 0x325329
// declared property setter: - (void)setStyle:(int)style;	// 0x32570d
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x3256ad
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x3256ed
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x3256cd
// declared property getter: - (id)settingsButton;	// 0x32567d
// declared property getter: - (id)slideshowButton;	// 0x32566d
// declared property getter: - (int)style;	// 0x3256fd
@end

