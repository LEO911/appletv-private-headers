/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_xpc_object, OS_dispatch_queue;

@interface MSService : NSObject {
	int _canceled;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_replyQueue;	// 12 = 0xc
	NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
	NSObject<OS_xpc_object> *_responseListener;	// 20 = 0x14
	NSObject<OS_xpc_object> *_responseHandler;	// 24 = 0x18
}
@property(readonly, assign, getter=isCanceled) BOOL canceled;	// G=0x36870ba9; 
- (id)init;	// 0x36870455
- (void)_callServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x36871199
- (id)_connection;	// 0x368706ad
- (id)_createMessageForService:(id)service arguments:(id)arguments;	// 0x36871081
- (id)_createServiceOnQueue:(id)queue;	// 0x36870685
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x368719e1
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x368719e5
- (id)_handleMessageSendFailure:(id)failure message:(id)message messageIndex:(long long)index context:(inout id *)context;	// 0x36871161
- (void)_registerConnection:(id)connection onQueue:(id)queue;	// 0x36870dfd
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x36871951
- (BOOL)_unitTestsAreEnabled;	// 0x368719dd
- (void)cancel;	// 0x368709bd
- (void)dealloc;	// 0x368705a1
// declared property getter: - (BOOL)isCanceled;	// 0x36870ba9
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x36870bcd
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x36870bd1
- (void)setupResponseConnectionOnQueue:(id)queue;	// 0x36870bd5
- (void)start;	// 0x368706bd
- (void)stop;	// 0x36870931
@end

