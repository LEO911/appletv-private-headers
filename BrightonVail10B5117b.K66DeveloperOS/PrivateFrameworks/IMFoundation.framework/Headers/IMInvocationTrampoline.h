/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface IMInvocationTrampoline : NSObject {
	id _target;	// 4 = 0x4
}
@property(retain) id target;	// G=0x3437a2c1; S=0x3437a2d5; @synthesize=_target
- (void)dealloc;	// 0x3437a141
- (void)forwardInvocation:(id)invocation;	// 0x3437a291
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3437a1d1
- (void)performInvocation:(id)invocation;	// 0x3437a191
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3437a231
// declared property setter: - (void)setTarget:(id)target;	// 0x3437a2d5
// declared property getter: - (id)target;	// 0x3437a2c1
@end
