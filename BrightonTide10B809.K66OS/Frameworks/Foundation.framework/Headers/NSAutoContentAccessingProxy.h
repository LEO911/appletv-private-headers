/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProxy.h"


__attribute__((visibility("hidden")))
@interface NSAutoContentAccessingProxy : NSProxy {
	id _target;	// 4 = 0x4
}
+ (id)proxyWithTarget:(id)target;	// 0x31943e05
- (void)dealloc;	// 0x31943f0d
- (void)finalize;	// 0x31943f6d
- (void)forwardInvocation:(id)invocation;	// 0x31943ed1
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x31943ea1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31943eb1
@end

