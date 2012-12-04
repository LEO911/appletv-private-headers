/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
@property(assign) BOOL cursorInactive;	// G=0x2c46f1; S=0x2c4635; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x2c4701; converted property
@property(assign) int cursorStyle;	// G=0x2c4625; S=0x2c455d; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x2c48e1; S=0x2c48f1; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x2c42e1
- (void)_addCursor;	// 0x2c4901
- (void)_cursorFrameChanged:(id)changed;	// 0x2c52b1
- (void)_focusChanged:(id)changed;	// 0x2c5321
- (void)_removeCursor;	// 0x2c49dd
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x2c57a9
- (void)_removePreviousTrackedControl;	// 0x2c5805
- (void)_trackFocusedControl:(id)control;	// 0x2c5081
- (void)_trackedBadgeUpdated:(id)updated;	// 0x2c52c1
- (void)_updateBadgeForTrackedControl;	// 0x2c577d
- (void)_updateCursorPositioning;	// 0x2c4a4d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x2c53b1
- (void)_updatePreviousBadge;	// 0x2c5751
- (void)controlWasActivated;	// 0x2c4711
// converted property getter: - (BOOL)cursorInactive;	// 0x2c46f1
// converted property getter: - (id)cursorLayer;	// 0x2c4701
// converted property getter: - (int)cursorStyle;	// 0x2c4625
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x2c48e1
- (void)dealloc;	// 0x2c43e9
- (void)layoutSubcontrols;	// 0x2c4755
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2c4765
- (id)preferredActionForKey:(id)key;	// 0x2c4809
- (void)setAlpha:(float)alpha;	// 0x2c4ef9
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x2c4635
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x2c455d
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x2c48f1
@end
