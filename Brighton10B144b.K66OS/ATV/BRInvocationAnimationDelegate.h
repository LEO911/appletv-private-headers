/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationAnimationDelegate : XXUnknownSuperclass {
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x3ac451; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x3ac441; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x3ac1b1
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x3ac201
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x3ac251
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x3ac2a1
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x3ac2d5
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x3ac30d
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x3ac099
- (void)animationDidStart:(id)animation;	// 0x3ac461
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3ac509
- (void)dealloc;	// 0x3ac139
// converted property getter: - (id)endInvocation;	// 0x3ac451
// converted property getter: - (id)startInvocation;	// 0x3ac441
@end

