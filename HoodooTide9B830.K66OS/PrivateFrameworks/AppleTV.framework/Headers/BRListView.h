/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class ListViewAnimationDelegate, NSTimer, BRBlueGlowSelectionLozengeLayer;

@interface BRListView : BRGridView {
@private
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 180 = 0xb4
	ListViewAnimationDelegate *_animationDelegate;	// 184 = 0xb8
	NSTimer *_pokeTimer;	// 188 = 0xbc
	NSTimer *_delayTimer;	// 192 = 0xc0
	NSTimer *_repeatTimer;	// 196 = 0xc4
	double _repeatStart;	// 200 = 0xc8
	double _repeatAccumulator;	// 208 = 0xd0
	long _scrollSelection;	// 216 = 0xd8
	long _savedSelection;	// 220 = 0xdc
	BOOL _turboEngaged;	// 224 = 0xe0
	BOOL _movingDown;	// 225 = 0xe1
	BOOL _selectionEntered;	// 226 = 0xe2
}
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x329e2e19; S=0x329e2bad; converted property
@property(assign) BOOL lastItemCentered;	// G=0x329e2fc5; S=0x329e2fc1; converted property
- (id)init;	// 0x329e2659
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x329e414d
- (double)_calculateRepeatRate;	// 0x329e4c1d
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x329e3d01
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x329e5209
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x329e50fd
- (void)_ensureSelectionFocusable;	// 0x329e40e1
- (void)_enterCurrentSelection;	// 0x329e4c91
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x329e41cd
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x329e52d1
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x329e5399
- (void)_leaveCurrentSelection;	// 0x329e4d31
- (void)_listScrollingCompleted:(id)completed;	// 0x329e50a9
- (void)_listScrollingInitiated:(id)initiated;	// 0x329e5055
- (void)_performScrollInitiationActivities;	// 0x329e5031
- (void)_performScrollTerminationActivities;	// 0x329e5051
- (void)_pokeTimerFired:(id)fired;	// 0x329e4bd9
- (void)_postSelectionFinalizedNotification;	// 0x329e4d69
- (void)_repeatDownTimerFired:(id)fired;	// 0x329e4939
- (void)_repeatUpTimerFired:(id)fired;	// 0x329e4a89
- (void)_restoreCurrentSelectionIndex;	// 0x329e4f31
- (void)_saveCurrentSelectionIndex;	// 0x329e4f11
- (BOOL)_scrollDown:(id)down;	// 0x329e3ffd
- (BOOL)_scrollUp:(id)up;	// 0x329e3f19
- (void)_setNewScrollIndex:(long)index;	// 0x329e4251
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x329e46e9
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x329e4459
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x329e4385
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x329e45a1
- (void)_stopRepeatTimer;	// 0x329e48c9
- (void)_updateScrollPosition;	// 0x329e4271
- (void)_updateWidgetFrame;	// 0x329e4d6d
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x329e4e4d
- (id)accessibilityControls;	// 0x329e3c05
- (id)accessibilityLabel;	// 0x329e3add
- (BOOL)brEventAction:(id)action;	// 0x329e27f5
- (void)controlWasActivated;	// 0x329e3009
- (void)controlWasFocused;	// 0x329e307d
- (void)controlWasUnfocused;	// 0x329e30dd
- (unsigned)countOfCells;	// 0x329e3c21
// converted property getter: - (id)cursor;	// 0x329e2e19
- (void)dealloc;	// 0x329e2751
- (void)didFocusItemAtIndex:(long)index;	// 0x329e385d
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x329e3a25
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x329e39ad
- (void)didUnFocusItemAtIndex:(long)index;	// 0x329e393d
- (float)heightForItemAtIndex:(long)index;	// 0x329e3611
- (long)indexForItemID:(id)itemID;	// 0x329e35a1
- (unsigned)indexInCellsOfObject:(id)object;	// 0x329e3dfd
- (BOOL)isAccessibilityElement;	// 0x329e3b71
- (id)itemAtIndex:(long)index;	// 0x329e3491
- (id)itemIDAtIndex:(long)index;	// 0x329e352d
// converted property getter: - (BOOL)lastItemCentered;	// 0x329e2fc5
- (void)layoutSubcontrols;	// 0x329e3151
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x329e3ac9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x329e3ad9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x329e3ad5
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x329e3ad1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x329e3abd
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x329e3ab9
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x329e3ab1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x329e3aad
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x329e3a9d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x329e3aa5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x329e3aa9
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x329e3ac1
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x329e3ac5
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x329e3acd
- (float)listHeightToMaximum:(float)maximum;	// 0x329e2f4d
- (void)listWasActivated:(id)activated;	// 0x329e3ab5
- (long)numberOfSectionsInList:(id)list;	// 0x329e3aa1
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x329e3e85
- (void)populateDataCache:(id)cache;	// 0x329e3299
- (void)reload;	// 0x329e2ac5
- (void)selectItemAtIndex:(long)index;	// 0x329e345d
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x329e2e39
- (long)selectedIndex;	// 0x329e344d
- (id)selectedIndexPath;	// 0x329e2f2d
- (long)selection;	// 0x329e2e29
// converted property setter: - (void)setCursor:(id)cursor;	// 0x329e2bad
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x329e2fc1
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x329e2fc9
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x329e2ff9
- (void)willDisplayItemAtIndex:(long)index;	// 0x329e3755
- (long)willFocusItemAtIndex:(long)index;	// 0x329e37d5
- (void)willUnFocusItemAtIndex:(long)index;	// 0x329e38cd
@end

