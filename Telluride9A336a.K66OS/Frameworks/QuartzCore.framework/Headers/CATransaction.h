/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface CATransaction : NSObject {
}
+ (void)activate;	// 0x36161eed
+ (double)animationDuration;	// 0x36161e7d
+ (id)animationTimingFunction;	// 0x36161e31
+ (void)begin;	// 0x360a304d
+ (BOOL)beginWithoutBlocking;	// 0x36161cb1
+ (void)commit;	// 0x360a36e9
+ (id)completionBlock;	// 0x36161dcd
+ (unsigned)currentState;	// 0x36161f05
+ (BOOL)disableActions;	// 0x36161df1
+ (void)flush;	// 0x360cb6a1
+ (void)lock;	// 0x3609d3d1
+ (void)setAnimationDuration:(double)duration;	// 0x36161e55
+ (void)setAnimationTimingFunction:(id)function;	// 0x36161e15
+ (void)setCompletionBlock:(id)block;	// 0x36161d89
+ (void)setDisableActions:(BOOL)actions;	// 0x360a33bd
+ (void)setValue:(id)value forKey:(id)key;	// 0x360a3075
+ (void)synchronize;	// 0x360cd9b1
+ (void)unlock;	// 0x3609d4f9
+ (id)valueForKey:(id)key;	// 0x36161cf5
- (void)_addTimer:(CFRunLoopTimerRef)timer;	// 0x36161c8d
@end

