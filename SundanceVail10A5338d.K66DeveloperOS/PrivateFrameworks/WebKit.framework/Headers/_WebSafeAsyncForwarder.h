/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class _WebSafeForwarder;

@interface _WebSafeAsyncForwarder : NSObject {
	_WebSafeForwarder *_forwarder;	// 4 = 0x4
}
- (id)initWithForwarder:(id)forwarder;	// 0x316d7769
- (void)forwardInvocation:(id)invocation;	// 0x316d77ad
- (id)methodSignatureForSelector:(SEL)selector;	// 0x316d78bd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x316d7899
@end

