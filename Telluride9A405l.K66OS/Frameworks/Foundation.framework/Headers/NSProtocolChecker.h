/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSProxy.h"


@interface NSProtocolChecker : NSProxy {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30270a89
+ (id)protocolCheckerWithTarget:(id)target protocol:(id)protocol;	// 0x303092cd
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x30309311
- (const char *)_localClassNameForClass;	// 0x303091f9
- (BOOL)conformsToProtocol:(id)protocol;	// 0x30309131
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x30309059
- (void)forwardInvocation:(id)invocation;	// 0x30309221
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x30309151
- (objc_method_description *)methodDescriptionForSelector:(SEL)selector;	// 0x30277be1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30277ba5
- (id)protocol;	// 0x30309011
- (BOOL)respondsToSelector:(SEL)selector;	// 0x303090a1
- (id)target;	// 0x30309035
@end

