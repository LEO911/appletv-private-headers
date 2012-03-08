/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	xpc_connection_s *_connection;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
}
- (id)initWithQueue:(dispatch_queue_s *)queue bundleIdentifier:(CFStringRef)identifier;	// 0x37034b7d
- (void)_createConnectionIfNecessary;	// 0x37035135
- (id)_newMessageWithName:(id)name userInfo:(id)info;	// 0x37034fd1
- (void)_resetConnection;	// 0x37035105
- (void)_sendMessage:(id)message replyHandler:(id)handler;	// 0x37034d25
- (void)_sendMessageNoReply:(id)reply;	// 0x37034dfd
- (id)_sendMessageWithReplySync:(id)replySync;	// 0x37034e99
- (void)dealloc;	// 0x370351fd
- (void)finalize;	// 0x370351b9
- (void)sendMessageWithName:(id)name;	// 0x37034ce1
- (void)sendMessageWithName:(id)name replyHandler:(id)handler;	// 0x37034c0d
- (id)sendMessageWithName:(id)name userInfo:(id)info;	// 0x37034c55
- (void)shutdown;	// 0x370350ad
@end
