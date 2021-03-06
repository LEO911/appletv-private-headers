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
@property(assign) BOOL cursorInactive;	// G=0x331f7a99; S=0x331f79dd; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x331f7aa9; converted property
@property(assign) int cursorStyle;	// G=0x331f79cd; S=0x331f7909; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x331f7c89; S=0x331f7c99; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x331f7699
- (void)_addCursor;	// 0x331f7ca9
- (void)_cursorFrameChanged:(id)changed;	// 0x331f8639
- (void)_focusChanged:(id)changed;	// 0x331f86a9
- (void)_removeCursor;	// 0x331f7d99
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x331f8b29
- (void)_removePreviousTrackedControl;	// 0x331f8b89
- (void)_trackFocusedControl:(id)control;	// 0x331f8401
- (void)_trackedBadgeUpdated:(id)updated;	// 0x331f8649
- (void)_updateBadgeForTrackedControl;	// 0x331f8af9
- (void)_updateCursorPositioning;	// 0x331f7e0d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x331f872d
- (void)_updatePreviousBadge;	// 0x331f8ac9
- (void)controlWasActivated;	// 0x331f7ab9
// converted property getter: - (BOOL)cursorInactive;	// 0x331f7a99
// converted property getter: - (id)cursorLayer;	// 0x331f7aa9
// converted property getter: - (int)cursorStyle;	// 0x331f79cd
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x331f7c89
- (void)dealloc;	// 0x331f77a5
- (void)layoutSubcontrols;	// 0x331f7afd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x331f7b0d
- (id)preferredActionForKey:(id)key;	// 0x331f7bb1
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x331f79dd
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x331f7909
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x331f7c99
- (void)setOpacity:(float)opacity;	// 0x331f8295
@end

