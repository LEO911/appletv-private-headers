/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library


@interface MPButton : UIButton {
	UIEdgeInsets _hitRectInsets;	// 180 = 0xb4
	double _holdDelayInterval;	// 196 = 0xc4
	unsigned _holding : 1;	// 204 = 0xcc
}
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;	// G=0x36efff6d; S=0x36efff91; @synthesize=_hitRectInsets
@property(assign, nonatomic) double holdDelayInterval;	// G=0x36efffad; S=0x36efffc5; @synthesize=_holdDelayInterval
+ (id)easyTouchButtonWithType:(int)type;	// 0x36effbb5
+ (float)easyTouchDefaultCharge;	// 0x36effba9
+ (UIEdgeInsets)easyTouchDefaultHitRectInsets;	// 0x36effb99
- (id)initWithFrame:(CGRect)frame;	// 0x36effb49
- (void)_delayedTriggerHold;	// 0x36effe1d
- (void)_handleTouchCancel;	// 0x36effe7d
- (void)_handleTouchDown;	// 0x36effed1
- (void)_handleTouchUp;	// 0x36efff19
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36effc71
- (void)cancelTrackingWithEvent:(id)event;	// 0x36effcb9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36effcfd
- (CGRect)hitRect;	// 0x36effd45
// declared property getter: - (UIEdgeInsets)hitRectInsets;	// 0x36efff6d
// declared property getter: - (double)holdDelayInterval;	// 0x36efffad
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x36effde1
// declared property setter: - (void)setHitRectInsets:(UIEdgeInsets)insets;	// 0x36efff91
// declared property setter: - (void)setHoldDelayInterval:(double)interval;	// 0x36efffc5
@end

