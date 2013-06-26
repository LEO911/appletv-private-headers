/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRCursorLayer, BRHorizontalSegmentedWidget;

__attribute__((visibility("hidden")))
@interface BRCursorControl : BRControl {
	BRControl *_trackedControl;	// 84 = 0x54
	BRControl *_previousTrackedControl;	// 88 = 0x58
	BRCursorLayer *_cursorLayer;	// 92 = 0x5c
	int _style;	// 96 = 0x60
	BOOL _cursorInactive;	// 100 = 0x64
	BRHorizontalSegmentedWidget *_previousBadge;	// 104 = 0x68
	BRHorizontalSegmentedWidget *_badge;	// 108 = 0x6c
	NSTimer *_removePreviousBadgeTimer;	// 112 = 0x70
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 116 = 0x74
}
@property(assign) BOOL cursorInactive;	// G=0x31f481; S=0x31f3c5; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x31f491; converted property
@property(assign) int cursorStyle;	// G=0x31f3b5; S=0x31f2ed; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x31f671; S=0x31f681; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x31f071
- (void)_addCursor;	// 0x31f691
- (void)_cursorFrameChanged:(id)changed;	// 0x320081
- (void)_focusChanged:(id)changed;	// 0x3200f1
- (void)_removeCursor;	// 0x31f781
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x320581
- (void)_removePreviousTrackedControl;	// 0x3205dd
- (void)_trackFocusedControl:(id)control;	// 0x31fe41
- (void)_trackedBadgeUpdated:(id)updated;	// 0x320091
- (void)_updateBadgeForTrackedControl;	// 0x32054d
- (void)_updateCursorPositioning;	// 0x31f7f1
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x320181
- (void)_updatePreviousBadge;	// 0x320519
- (void)controlWasActivated;	// 0x31f4a1
// converted property getter: - (BOOL)cursorInactive;	// 0x31f481
// converted property getter: - (id)cursorLayer;	// 0x31f491
// converted property getter: - (int)cursorStyle;	// 0x31f3b5
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x31f671
- (void)dealloc;	// 0x31f179
- (void)layoutSubcontrols;	// 0x31f4e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31f4f5
- (id)preferredActionForKey:(id)key;	// 0x31f599
- (void)setAlpha:(float)alpha;	// 0x31fcb9
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x31f3c5
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x31f2ed
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x31f681
@end
