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
	BRImageControl *_topPanelShadow;	// 80 = 0x50
	BRControl *_container;	// 84 = 0x54
	BRControl *_bottomFader;	// 88 = 0x58
	BOOL _topPanelInPopUp;	// 92 = 0x5c
	ATVNavigationBar *_navigationBar;	// 96 = 0x60
}
@property(retain, nonatomic) BRControl *content;	// G=0x107191; S=0x107015; 
@property(retain, nonatomic) ATVNavigationBar *navigationBar;	// G=0x107769; S=0x107779; @synthesize=_navigationBar
- (id)init;	// 0x106b61
- (id)_bottomFadeFilters;	// 0x107789
- (BOOL)_canShowTopPanelInPopUp;	// 0x107bb1
- (BOOL)_currentContentHasHeader;	// 0x107d75
- (id)_findCursor:(id)cursor;	// 0x10789d
- (void)_updateRepositioning;	// 0x1079a9
- (BOOL)brEventAction:(id)action;	// 0x1074d9
// declared property getter: - (id)content;	// 0x107191
- (void)controlWasActivated;	// 0x107251
- (void)controlWasDeactivated;	// 0x1072bd
- (void)dealloc;	// 0x106f79
- (void)hostControl:(id)control;	// 0x107005
- (void)layoutSubcontrols;	// 0x107325
// declared property getter: - (id)navigationBar;	// 0x107769
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x107745
// declared property setter: - (void)setContent:(id)content;	// 0x107015
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x107779
- (void)updateBoundContentViewAvailibility;	// 0x1071c9
- (void)updateViewLayout;	// 0x1071d9
@end

