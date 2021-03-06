/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVDirectionalRemoteConnectionHandler, NSMutableArray, NSTimer;

@interface ATVRemoteControlMessageHandler : NSObject {
@private
	int _touchDirection;	// 4 = 0x4
	CGPoint _startPoint;	// 8 = 0x8
	double _lastTimeStamp;	// 16 = 0x10
	CGPoint _lastPoint;	// 24 = 0x18
	NSTimer *_swipeTimer;	// 32 = 0x20
	NSTimer *_easeOutTimer;	// 36 = 0x24
	double _easeOutInterval;	// 40 = 0x28
	double _easeOutDecelerationFactor;	// 48 = 0x30
	BOOL _easeOutRepeat;	// 56 = 0x38
	CGPoint _autoScrollStartPoint;	// 60 = 0x3c
	double _autoScrollStartInterval;	// 68 = 0x44
	NSTimer *_autoScrollContinueTimer;	// 76 = 0x4c
	BOOL _isReallyReallyAutoScrolling;	// 80 = 0x50
	double _autoScrollInterval;	// 84 = 0x54
	CGPoint _velocityAdjustOffset;	// 92 = 0x5c
	CGPoint _lastVelocityRefPoint;	// 100 = 0x64
	CGPoint _velocityVector;	// 108 = 0x6c
	NSMutableArray *_velocitySet;	// 116 = 0x74
	int _touchCount;	// 120 = 0x78
	NSMutableArray *_throttledEventQueue;	// 124 = 0x7c
	NSTimer *_throttleEventTimer;	// 128 = 0x80
	BOOL _prohibitSelect;	// 132 = 0x84
	BOOL _activelyScrolling;	// 133 = 0x85
	CGSize _selectionChange;	// 136 = 0x88
	ATVDirectionalRemoteConnectionHandler *_connectionHandler;	// 144 = 0x90
	NSTimer *_connectionTimeoutTimer;	// 148 = 0x94
}
- (id)init;	// 0x331176e5
- (CGPoint)_adjustPoint:(CGPoint)point forVelocity:(CGPoint)velocity;	// 0x33118411
- (void)_autoScrollContinueTimerCallback:(id)callback;	// 0x33119589
- (void)_beginAutoScroll;	// 0x33118f59
- (double)_calculateVelocityAverage;	// 0x331185f9
- (void)_clearEventQueue;	// 0x33119f41
- (void)_connectionTimedOut:(id)anOut;	// 0x331180e5
- (BOOL)_easeOutInProgress;	// 0x33119bb5
- (void)_easeOutTimerCallback:(id)callback;	// 0x33119995
- (void)_finishAutoScroll;	// 0x33119185
- (void)_finishEaseOut;	// 0x33119b45
- (CGPoint)_getSelectionPosition:(CGPoint)position;	// 0x33118951
- (CGSize)_initialSelectionChangeDistance;	// 0x33119f95
- (void)_invalidateSwipeAction;	// 0x33118eb5
- (BOOL)_isAutoScrolling;	// 0x33118f31
- (BOOL)_isReallyReallyAutoScrolling;	// 0x33118f49
- (void)_postEvent:(id)event;	// 0x33119bcd
- (void)_postThrottledEvent:(id)event;	// 0x33119d55
- (void)_processLastTouchMove;	// 0x33118195
- (void)_processSelectionChange:(int)change delta:(int)delta;	// 0x331189c5
- (void)_processSwipeMovement;	// 0x33118b59
- (BOOL)_processTouchEvent:(unsigned long)event value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x33117b35
- (void)_refreshConnectionTimeoutTimer;	// 0x33118021
- (CGSize)_repeatSelectionChangeDistance;	// 0x33119fa1
- (void)_resetTrackingCoordinates;	// 0x331180f5
- (void)_resetVelocitySet;	// 0x33118931
- (void)_scrollEndNotification;	// 0x3311a011
- (void)_scrollStartNotification;	// 0x33119fe9
- (void)_sendDirectionEvent:(int)event value:(int)value;	// 0x33118a85
- (BOOL)_startEaseOut;	// 0x33119645
- (BOOL)_swipeActive;	// 0x33118e9d
- (void)_swipeTimeout;	// 0x33118df5
- (void)_throttleEventTimerCallback;	// 0x33119dfd
- (BOOL)_updateAutoScroll;	// 0x33118fdd
- (void)_updateAutoScrollInterval;	// 0x33119251
- (void)_updateVelocitySet:(CGPoint)set velocity:(CGPoint)velocity;	// 0x33118849
- (double)_velocitySetTotalDistance;	// 0x33118795
- (void)dealloc;	// 0x33117839
- (BOOL)handleDirectionalRemoteMessage:(unsigned long)message value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x3311790d
- (void)invalidate;	// 0x331178dd
@end

