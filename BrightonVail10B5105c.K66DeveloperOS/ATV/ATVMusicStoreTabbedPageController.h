/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"
#import "BRTabControlDelegate.h"

@class BRTabControl, BRControl, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate> {
	BRControl *_contentControl;	// 140 = 0x8c
	BRTabControl *_tabControl;	// 144 = 0x90
	NSTimer *_activeTabSelectionChangedTimer;	// 148 = 0x94
	BOOL _showingWaitContent;	// 152 = 0x98
	BOOL _initialTabContentLoaded;	// 153 = 0x99
	BOOL _transitionInhibited;	// 154 = 0x9a
}
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x206ba9
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x206e45
- (id)_preferredTabSegmentInTab;	// 0x207225
- (id)_scrollPlane;	// 0x207155
- (id)_tabDictionary;	// 0x20718d
- (id)_tabName;	// 0x2071ed
- (void)dealloc;	// 0x206de1
- (id)errorContent;	// 0x2070fd
- (BOOL)shouldAllowTransitionOnSwap;	// 0x20713d
- (BOOL)shouldShowWaitContent;	// 0x2070e5
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x206fe9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x207099
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x20709d
- (id)waitContent;	// 0x2070a1
- (float)waitContentDelay;	// 0x2070e1
- (void)willEnterCompleteState;	// 0x207129
@end

