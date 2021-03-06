/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSInvocation *_invocation;	// 4 = 0x4
	BOOL _useInvocationReturnValue;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x353035; converted property
@property(assign) BOOL useInvocationReturnValue;	// G=0x353139; S=0x353129; converted property
+ (id)handlerWithInvocation:(id)invocation;	// 0x353045
+ (id)handlerWithTarget:(id)target selector:(SEL)selector;	// 0x353091
- (id)initWithInvocation:(id)invocation;	// 0x352f79
- (void)dealloc;	// 0x352fe9
- (BOOL)handleSelectionForControl:(id)control;	// 0x353149
// converted property getter: - (id)invocation;	// 0x353035
// converted property setter: - (void)setUseInvocationReturnValue:(BOOL)value;	// 0x353129
// converted property getter: - (BOOL)useInvocationReturnValue;	// 0x353139
@end

