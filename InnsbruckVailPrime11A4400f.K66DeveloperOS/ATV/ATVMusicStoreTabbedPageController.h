/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "ATVCatalogApplianceController.h"

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
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x1e2c31
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x1e2ec9
- (id)_preferredTabSegmentInTab;	// 0x1e32a5
- (id)_scrollPlane;	// 0x1e31d5
- (id)_tabDictionary;	// 0x1e320d
- (id)_tabName;	// 0x1e326d
- (void)dealloc;	// 0x1e2e65
- (id)errorContent;	// 0x1e317d
- (BOOL)shouldAllowTransitionOnSwap;	// 0x1e31bd
- (BOOL)shouldShowWaitContent;	// 0x1e3165
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x1e3069
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x1e3119
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x1e311d
- (id)waitContent;	// 0x1e3121
- (float)waitContentDelay;	// 0x1e3161
- (void)willEnterCompleteState;	// 0x1e31a9
@end

