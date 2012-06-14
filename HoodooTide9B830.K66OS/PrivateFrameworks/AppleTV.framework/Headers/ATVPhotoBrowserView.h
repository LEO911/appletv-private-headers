/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRScrollControl, BRCursorControl, BRGridView, BRPhotoBrowserBannerButton, BRPanelControl, BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl;

@interface ATVPhotoBrowserView : BRControl {
@private
	int _style;	// 48 = 0x30
	BRPhotoBrowserHeaderControl *headerView;	// 52 = 0x34
	BRPhotoBrowserBannerButton *slideshowButton;	// 56 = 0x38
	BRPhotoBrowserBannerButton *settingsButton;	// 60 = 0x3c
	BRGridView *gridView;	// 64 = 0x40
	BRPanelControl *_bannerPanelControl;	// 68 = 0x44
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 72 = 0x48
	BRScrollControl *_scrollControl;	// 76 = 0x4c
	BRCursorControl *_cursorControl;	// 80 = 0x50
}
@property(retain, nonatomic) BRPanelControl *_bannerPanelControl;	// G=0x32adab19; S=0x32adab29; @synthesize
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x32adab4d; S=0x32adab5d; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x32adabb5; S=0x32adabc5; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x32adab81; S=0x32adab91; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x32adab09; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x32adaad9; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x32adaaf9; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x32adaae9; @synthesize
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x32ada685
- (id)initWithStyle:(int)style;	// 0x32ada6cd
// declared property getter: - (id)_bannerPanelControl;	// 0x32adab19
// declared property getter: - (id)_corkBoardControl;	// 0x32adab4d
// declared property getter: - (id)_cursorControl;	// 0x32adabb5
- (id)_iconWithName:(id)name;	// 0x32adb401
// declared property getter: - (id)_scrollControl;	// 0x32adab81
- (void)_setupControls;	// 0x32adabe9
- (void)dealloc;	// 0x32ada721
- (void)focusControlAtIndex:(long)index;	// 0x32ada9f5
// declared property getter: - (id)gridView;	// 0x32adab09
// declared property getter: - (id)headerView;	// 0x32adaad9
- (void)layoutSubcontrols;	// 0x32ada7f9
// declared property setter: - (void)set_bannerPanelControl:(id)control;	// 0x32adab29
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x32adab5d
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x32adabc5
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x32adab91
// declared property getter: - (id)settingsButton;	// 0x32adaaf9
// declared property getter: - (id)slideshowButton;	// 0x32adaae9
@end
