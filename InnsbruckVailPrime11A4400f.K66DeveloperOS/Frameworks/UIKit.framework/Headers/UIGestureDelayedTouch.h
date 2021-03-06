/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <ImageIO/NSObject.h>

@class UITouch, UIEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying> {
	UITouch *_touch;	// 4 = 0x4
	UITouch *_stateWhenDelayed;	// 8 = 0x8
	UITouch *_stateWhenDelivered;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	int _delayCount;	// 20 = 0x14
	BOOL _cloneForSecondDelivery;	// 24 = 0x18
}
@property(assign) BOOL cloneForSecondDelivery;	// G=0x2f4f5ce9; S=0x2f4fe201; @synthesize=_cloneForSecondDelivery
@property(readonly, assign) int delayCount;	// G=0x2f4f5cd5; converted property
@property(retain) UIEvent *event;	// G=0x2f4e20d5; S=0x2f4e11a1; @synthesize=_event
@property(retain) UITouch *stateWhenDelayed;	// G=0x2f4e11c5; S=0x2f4fe1f1; @synthesize=_stateWhenDelayed
@property(retain) UITouch *stateWhenDelivered;	// G=0x2f4f5d69; S=0x2f71a66d; @synthesize=_stateWhenDelivered
@property(retain) UITouch *touch;	// G=0x2f4e20c1; S=0x2f4e11b5; @synthesize=_touch
- (id)init;	// 0x2f4e0e65
// declared property getter: - (BOOL)cloneForSecondDelivery;	// 0x2f4f5ce9
- (id)copyWithZone:(NSZone *)zone;	// 0x2f4fe10d
- (void)dealloc;	// 0x2f4e5d79
- (int)decrementDelayCount;	// 0x2f4e2151
// converted property getter: - (int)delayCount;	// 0x2f4f5cd5
- (id)description;	// 0x2f71a549
// declared property getter: - (id)event;	// 0x2f4e20d5
- (void)incrementDelayCount;	// 0x2f4e12d1
- (int)phaseForDelivery;	// 0x2f4fe259
- (void)saveCurrentTouchState;	// 0x2f4f5d05
// declared property setter: - (void)setCloneForSecondDelivery:(BOOL)secondDelivery;	// 0x2f4fe201
// declared property setter: - (void)setEvent:(id)event;	// 0x2f4e11a1
// declared property setter: - (void)setStateWhenDelayed:(id)delayed;	// 0x2f4fe1f1
// declared property setter: - (void)setStateWhenDelivered:(id)delivered;	// 0x2f71a66d
// declared property setter: - (void)setTouch:(id)touch;	// 0x2f4e11b5
// declared property getter: - (id)stateWhenDelayed;	// 0x2f4e11c5
// declared property getter: - (id)stateWhenDelivered;	// 0x2f4f5d69
- (double)timestampForDelivery;	// 0x2f4fe21d
// declared property getter: - (id)touch;	// 0x2f4e20c1
@end

