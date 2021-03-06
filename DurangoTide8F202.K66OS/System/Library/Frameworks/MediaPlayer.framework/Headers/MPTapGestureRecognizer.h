/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIGestureRecognizer.h> // Unknown library

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {
@private
	unsigned _lastTapCount;	// 60 = 0x3c
	CGPoint _tapLocation;	// 64 = 0x40
	UITouch *_trackingTouch;	// 72 = 0x48
	NSTimer *_tapHandleTimer;	// 76 = 0x4c
}
@property(assign) unsigned tapCount;	// G=0x31dac725; S=0x31dac735; @synthesize=_lastTapCount
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31dacb11
- (void)_delayedHandleTaps:(id)taps;	// 0x31dac945
- (void)_resetTapTimer;	// 0x31dac9fd
- (void)_setTapTimerWithDuration:(double)duration;	// 0x31daca39
- (void)dealloc;	// 0x31dac881
- (CGPoint)locationInView:(id)view;	// 0x31dac70d
- (void)reset;	// 0x31dac8dd
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x31dac735
// declared property getter: - (unsigned)tapCount;	// 0x31dac725
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31dad5f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31dac9b1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31dad4dd
@end

