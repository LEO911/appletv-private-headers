/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJavaScriptContext;

__attribute__((visibility("hidden")))
@interface ATVJSAnimationDelegate : XXUnknownSuperclass {
	ATVJavaScriptContext *_context;	// 4 = 0x4
	OpaqueJSValue *_callback;	// 8 = 0x8
}
- (id)initWithContext:(OpaqueJSContext *)context withCallbackFunction:(OpaqueJSValue *)callbackFunction;	// 0x14ea7d
- (void).cxx_destruct;	// 0x14ed5d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x14ec2d
- (void)dealloc;	// 0x14eb55
@end
