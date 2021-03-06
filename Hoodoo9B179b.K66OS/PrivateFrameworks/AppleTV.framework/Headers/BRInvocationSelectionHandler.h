/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSInvocation;

@interface BRInvocationSelectionHandler : NSObject <BRSelectionHandler> {
@private
	NSInvocation *_invocation;	// 4 = 0x4
	BOOL _useInvocationReturnValue;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x3031aa81; converted property
@property(assign) BOOL useInvocationReturnValue;	// G=0x3031ab85; S=0x3031ab75; converted property
+ (id)handlerWithInvocation:(id)invocation;	// 0x3031aa91
+ (id)handlerWithTarget:(id)target selector:(SEL)selector;	// 0x3031aadd
- (id)initWithInvocation:(id)invocation;	// 0x3031a9c5
- (void)dealloc;	// 0x3031aa35
- (BOOL)handleSelectionForControl:(id)control;	// 0x3031ab95
// converted property getter: - (id)invocation;	// 0x3031aa81
// converted property setter: - (void)setUseInvocationReturnValue:(BOOL)value;	// 0x3031ab75
// converted property getter: - (BOOL)useInvocationReturnValue;	// 0x3031ab85
@end

