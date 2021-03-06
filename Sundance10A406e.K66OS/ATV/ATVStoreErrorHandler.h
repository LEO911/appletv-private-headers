/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSErrorHandlerDelegate.h"

@class SSErrorHandler;

__attribute__((visibility("hidden")))
@interface ATVStoreErrorHandler : XXUnknownSuperclass <SSErrorHandlerDelegate> {
	SSErrorHandler *_handler;	// 4 = 0x4
	BOOL _connected;	// 8 = 0x8
}
@property(assign, getter=isConnected) BOOL connected;	// G=0x3c9545; S=0x3c955d; @synthesize=_connected
+ (id)sharedInstance;	// 0x3c8de1
- (id)init;	// 0x3c8f9d
- (void).cxx_destruct;	// 0x3c9575
- (void)_handleCVVCheck:(id)check;	// 0x3c92f9
- (void)_handleStaleBilling:(id)billing;	// 0x3c9531
- (id)_init;	// 0x3c8e91
- (void)dealloc;	// 0x3c8fc1
- (void)errorHandler:(id)handler handleSession:(id)session;	// 0x3c91f5
- (void)errorHandlerDidDisconnect:(id)errorHandler;	// 0x3c917d
// declared property getter: - (BOOL)isConnected;	// 0x3c9545
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3c955d
- (void)start;	// 0x3c9001
- (void)stop;	// 0x3c90ed
@end

