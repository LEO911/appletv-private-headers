/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRScrollControl;

__attribute__((visibility("hidden")))
@interface ScrollAnimationDelegate : XXUnknownSuperclass {
	BRScrollControl *_scroll;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithScroll:(id)scroll;	// 0x36def1
- (void)animationDidStart:(id)animation;	// 0x36df61
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x36dfe1
- (void)clearScroll;	// 0x36df4d
- (BOOL)scrolling;	// 0x36df35
@end
