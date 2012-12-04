/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewHosting.h"
#import "BRControl.h"

@class BRImageControl, ATVNavigationBar;

__attribute__((visibility("hidden")))
@interface ATVNavigationBarPresentationView : BRControl <BRViewHosting> {
	BRImageControl *_topPanelShadow;	// 84 = 0x54
	BRControl *_container;	// 88 = 0x58
	BRControl *_bottomFader;	// 92 = 0x5c
	BOOL _topPanelInPopUp;	// 96 = 0x60
	ATVNavigationBar *_navigationBar;	// 100 = 0x64
}
@property(retain, nonatomic) BRControl *content;	// G=0x115d71; S=0x115bf5; 
@property(retain, nonatomic) ATVNavigationBar *navigationBar;	// G=0x116275; S=0x116285; @synthesize=_navigationBar
- (id)init;	// 0x115741
- (id)_bottomFadeFilters;	// 0x116295
- (BOOL)_canShowTopPanelInPopUp;	// 0x1166bd
- (BOOL)_currentContentHasHeader;	// 0x116881
- (id)_findCursor:(id)cursor;	// 0x1163a9
- (void)_updateRepositioning;	// 0x1164b5
- (BOOL)brEventAction:(id)action;	// 0x115fe5
// declared property getter: - (id)content;	// 0x115d71
- (void)dealloc;	// 0x115b59
- (void)hostControl:(id)control;	// 0x115be5
- (void)layoutSubcontrols;	// 0x115e31
// declared property getter: - (id)navigationBar;	// 0x116275
// declared property setter: - (void)setContent:(id)content;	// 0x115bf5
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x116285
- (void)updateBoundContentViewAvailibility;	// 0x115da9
- (void)updateViewLayout;	// 0x115db9
@end
