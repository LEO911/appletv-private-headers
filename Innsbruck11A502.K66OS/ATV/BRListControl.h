/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, ListAnimationDelegate, NSArray, BRSelectionLozengeLayer, BRScrollControl, BRGridControl;

__attribute__((visibility("hidden")))
@interface BRListControl : BRControl {
	NSArray *_providers;	// 84 = 0x54
	BRSelectionLozengeLayer *_topWidget;	// 88 = 0x58
	BRSelectionLozengeLayer *_bottomWidget;	// 92 = 0x5c
	BRScrollControl *_scroller;	// 96 = 0x60
	BRGridControl *_list;	// 100 = 0x64
	ListAnimationDelegate *_animationDelegate;	// 104 = 0x68
	NSTimer *_pokeTimer;	// 108 = 0x6c
	NSTimer *_delayTimer;	// 112 = 0x70
	NSTimer *_repeatTimer;	// 116 = 0x74
	double _repeatStart;	// 120 = 0x78
	double _repeatAccumulator;	// 128 = 0x80
	long _scrollSelection;	// 136 = 0x88
	long _savedSelection;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	BOOL _handlingProviderChange;	// 148 = 0x94
	BOOL _showsDividers;	// 149 = 0x95
	BOOL _firstDividerVisible;	// 150 = 0x96
	BOOL _showBackingLayer;	// 151 = 0x97
	BOOL _selectionEntered;	// 152 = 0x98
	BOOL _widgetHidden;	// 153 = 0x99
	BOOL _needsUpdate;	// 154 = 0x9a
	BOOL _turboEngaged;	// 155 = 0x9b
	BOOL _movingDown;	// 156 = 0x9c
}
@property(retain) id datasource;	// G=0x3707ad; S=0x370719; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x370455; S=0x37037d; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x3702b5; S=0x370289; converted property
@property(assign) BOOL lastItemCentered;	// G=0x36f9f1; S=0x36f931; converted property
@property(retain) NSArray *providers;	// G=0x36f2d9; S=0x36f2a1; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x37003d; @synthesize=_scroller
@property(assign) long selection;	// G=0x36f799; S=0x36f699; converted property
@property(assign) int selectionLozengeStyle;	// G=0x36f689; S=0x36f3b1; converted property
@property(assign) BOOL showsDividers;	// G=0x370169; S=0x370111; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x36f921; S=0x36f8bd; converted property
- (id)init;	// 0x36ec3d
- (void).cxx_destruct;	// 0x370051
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x371221
- (double)_calculateRepeatRate;	// 0x372529
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x371871
- (void)_ensureSelectionFocusable;	// 0x3711b5
- (void)_enterCurrentSelection;	// 0x372705
- (id)_findDividerProviderForProvider:(id)provider;	// 0x371761
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x3712c1
- (void)_gridDataUpdated:(id)updated;	// 0x370841
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x3707f9
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x37143d
- (void)_leaveCurrentSelection;	// 0x3727fd
- (id)_legacyProvider;	// 0x3716d5
- (void)_listScrollingCompleted:(id)completed;	// 0x371be5
- (void)_listScrollingInitiated:(id)initiated;	// 0x371bc5
- (float)_maxWidgetBottomGlowHeight;	// 0x372d01
- (float)_maxWidgetEdgeGlowWidth;	// 0x372d59
- (float)_maxWidgetTopGlowHeight;	// 0x372ca9
- (void)_performScrollInitiationActivities;	// 0x371afd
- (void)_performScrollTerminationActivities;	// 0x371b71
- (void)_pokeTimerFired:(id)fired;	// 0x3724d1
- (void)_postSelectionFinalizedNotification;	// 0x3727a1
- (void)_refillList;	// 0x37135d
- (void)_repeatDownTimerFired:(id)fired;	// 0x372231
- (void)_repeatUpTimerFired:(id)fired;	// 0x372381
- (void)_restoreCurrentSelectionIndex;	// 0x3725d9
- (void)_restorePersistentSavedSelection;	// 0x370b8d
- (void)_saveCurrentSelectionIndex;	// 0x3725a1
- (BOOL)_scrollDown:(id)down;	// 0x371061
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x3719a5
- (BOOL)_scrollUp:(id)up;	// 0x370f65
- (void)_setNewScrollIndex:(long)index;	// 0x3713c1
- (BOOL)_shouldEatUnhandledDirectionalEvent:(id)event;	// 0x37115d
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x371fb1
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x371cf1
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x371c05
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x371e51
- (void)_stopRepeatTimer;	// 0x3721ad
- (void)_updateGrid;	// 0x3709fd
- (void)_updatePersistentSavedSelection;	// 0x370e25
- (void)_updateProviders;	// 0x371509
- (void)_updateScrollPosition;	// 0x37283d
- (void)_updateWidgetFrame;	// 0x3729d9
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x372b81
- (id)accessibilityLabel;	// 0x370315
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x37046d
- (BOOL)brEventAction:(id)action;	// 0x36ef6d
- (void)clearSavedSelection;	// 0x36fd21
- (void)controlWasActivated;	// 0x36fa21
- (void)controlWasDeactivated;	// 0x36fa89
- (void)controlWasFocused;	// 0x36fadd
- (void)controlWasUnfocused;	// 0x36fb55
- (long)dataCount;	// 0x36f2ed
// converted property getter: - (id)datasource;	// 0x3707ad
- (void)dealloc;	// 0x36eec1
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x370455
// converted property getter: - (BOOL)firstDividerVisible;	// 0x3702b5
// converted property getter: - (BOOL)lastItemCentered;	// 0x36f9f1
- (void)layoutSubcontrols;	// 0x36fdb9
- (float)listHeightToMaximum:(float)maximum;	// 0x36f835
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x36f345
// converted property getter: - (id)providers;	// 0x36f2d9
- (void)reload;	// 0x3705e9
- (void)removeDividerAtIndex:(long)index;	// 0x3704fd
- (void)removeDividers;	// 0x370575
// declared property getter: - (id)scrollControl;	// 0x37003d
- (id)selectedObject;	// 0x36f7b9
// converted property getter: - (long)selection;	// 0x36f799
// converted property getter: - (int)selectionLozengeStyle;	// 0x36f689
- (void)setBottomMargin:(float)margin;	// 0x36fd79
- (void)setCurrentDividersHidden:(BOOL)hidden;	// 0x370179
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x370719
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x37037d
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x370289
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x36f931
- (void)setName:(id)name forProvider:(id)provider;	// 0x3702c5
- (void)setProvider:(id)provider;	// 0x36f255
// converted property setter: - (void)setProviders:(id)providers;	// 0x36f2a1
// converted property setter: - (void)setSelection:(long)selection;	// 0x36f699
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x36f3b1
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x370111
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x36f8bd
- (void)setTopMargin:(float)margin;	// 0x36fd99
// converted property getter: - (BOOL)showsDividers;	// 0x370169
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x36f921
- (void)updateSavedSelection;	// 0x36fd69
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x36fbe1
@end
