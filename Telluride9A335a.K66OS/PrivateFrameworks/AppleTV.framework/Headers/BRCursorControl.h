/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 48 = 0x30
	BRControl *_previousTrackedControl;	// 52 = 0x34
	BRCursorLayer *_cursorLayer;	// 56 = 0x38
	int _style;	// 60 = 0x3c
	BOOL _cursorInactive;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_previousBadge;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_badge;	// 72 = 0x48
	NSTimer *_removePreviousBadgeTimer;	// 76 = 0x4c
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 80 = 0x50
}
@property(assign) BOOL cursorInactive;	// G=0x341d8a99; S=0x341d89dd; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x341d8aa9; converted property
@property(assign) int cursorStyle;	// G=0x341d89cd; S=0x341d8909; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x341d8c89; S=0x341d8c99; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x341d8699
- (void)_addCursor;	// 0x341d8ca9
- (void)_cursorFrameChanged:(id)changed;	// 0x341d9639
- (void)_focusChanged:(id)changed;	// 0x341d96a9
- (void)_removeCursor;	// 0x341d8d99
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x341d9b29
- (void)_removePreviousTrackedControl;	// 0x341d9b89
- (void)_trackFocusedControl:(id)control;	// 0x341d9401
- (void)_trackedBadgeUpdated:(id)updated;	// 0x341d9649
- (void)_updateBadgeForTrackedControl;	// 0x341d9af9
- (void)_updateCursorPositioning;	// 0x341d8e0d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x341d972d
- (void)_updatePreviousBadge;	// 0x341d9ac9
- (void)controlWasActivated;	// 0x341d8ab9
// converted property getter: - (BOOL)cursorInactive;	// 0x341d8a99
// converted property getter: - (id)cursorLayer;	// 0x341d8aa9
// converted property getter: - (int)cursorStyle;	// 0x341d89cd
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x341d8c89
- (void)dealloc;	// 0x341d87a5
- (void)layoutSubcontrols;	// 0x341d8afd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x341d8b0d
- (id)preferredActionForKey:(id)key;	// 0x341d8bb1
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x341d89dd
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x341d8909
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x341d8c99
- (void)setOpacity:(float)opacity;	// 0x341d9295
@end

