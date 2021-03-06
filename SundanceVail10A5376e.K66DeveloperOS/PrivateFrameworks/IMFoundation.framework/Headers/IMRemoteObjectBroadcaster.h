/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
}
+ (id)defaultBroadcaster;	// 0x36ec00ed
- (id)init;	// 0x36ec0195
- (id)_queue;	// 0x36ec0251
- (id)broadcastProxyForTarget:(id)target protocol:(id)protocol;	// 0x36ec0261
- (id)broadcastProxyForTargets:(id)targets protocol:(id)protocol;	// 0x36ec02ed
- (void)dealloc;	// 0x36ec0209
- (void)flushProxy:(id)proxy;	// 0x36ec04cd
- (BOOL)isSendQueueEmpty;	// 0x36ec035d
@end

