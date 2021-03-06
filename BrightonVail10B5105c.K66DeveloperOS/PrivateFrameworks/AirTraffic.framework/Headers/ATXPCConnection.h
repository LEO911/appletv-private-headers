/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;

@interface ATXPCConnection : NSObject {
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_eventQueue;	// 8 = 0x8
	id _lockdownHandler;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	NSMutableSet *_outstandingMessages;	// 24 = 0x18
	BOOL _assertionHeld;	// 28 = 0x1c
	id _context;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL assertionHeld;	// G=0x366fe2c9; S=0x366fe2d9; @synthesize=_assertionHeld
@property(retain, nonatomic) id context;	// G=0x366fe2e9; S=0x366fe2f9; @synthesize=_context
@property(copy, nonatomic) id disconnectHandler;	// G=0x366fe291; S=0x366fe2a5; @synthesize=_disconnectHandler
@property(readonly, assign) dispatch_queue_s *eventQueue;	// G=0x366fd531; converted property
@property(copy, nonatomic) id lockdownHandler;	// G=0x366fe221; S=0x366fe235; @synthesize=_lockdownHandler
@property(copy, nonatomic) id messageHandler;	// G=0x366fe259; S=0x366fe26d; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x366fd4f1; 
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x366fd229
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x366fd2e1
- (void)_handleLockdownMessage:(void *)message;	// 0x366fdcb9
- (void)_handleXPCError:(void *)error;	// 0x366fda2d
- (void)_handleXPCMessage:(void *)message;	// 0x366fdc4d
- (int)_outstandingMessages;	// 0x366fe0a1
- (void)_registerMessage:(id)message;	// 0x366fdee1
- (void)_removeMessage:(id)message;	// 0x366fdfe1
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x366fd565
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x366fdcd5
// declared property getter: - (BOOL)assertionHeld;	// 0x366fe2c9
// declared property getter: - (id)context;	// 0x366fe2e9
- (void)dealloc;	// 0x366fd3ed
// declared property getter: - (id)disconnectHandler;	// 0x366fe291
// converted property getter: - (dispatch_queue_s *)eventQueue;	// 0x366fd531
// declared property getter: - (id)lockdownHandler;	// 0x366fe221
// declared property getter: - (id)messageHandler;	// 0x366fe259
- (void)sendMessage:(id)message;	// 0x366fd695
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x366fd6a9
// declared property getter: - (id)serviceName;	// 0x366fd4f1
// declared property setter: - (void)setAssertionHeld:(BOOL)held;	// 0x366fe2d9
// declared property setter: - (void)setContext:(id)context;	// 0x366fe2f9
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x366fe2a5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x366fe235
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x366fe26d
- (void)shutdown;	// 0x366fdb95
@end

