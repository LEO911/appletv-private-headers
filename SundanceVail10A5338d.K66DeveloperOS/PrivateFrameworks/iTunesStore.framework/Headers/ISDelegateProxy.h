/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSLock;

@interface ISDelegateProxy : NSObject {
	id _delegate;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _shouldMessageMainThread;	// 12 = 0xc
}
- (id)init;	// 0x30937365
- (void)dealloc;	// 0x309373c9
- (void)forwardInvocation:(id)invocation;	// 0x30937619
- (id)methodSignatureForSelector:(SEL)selector;	// 0x309376c5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30937751
- (void)sendInvocationToDelegate:(id)delegate;	// 0x30937465
- (void)setDelegate:(id)delegate;	// 0x30937419
- (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x309375cd
@end
