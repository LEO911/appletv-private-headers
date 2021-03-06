/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class SSXPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenter : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableArray *_observers;	// 8 = 0x8
	NSString *_portName;	// 12 = 0xc
	SSXPCServer *_server;	// 16 = 0x10
}
@property(readonly, assign) NSString *namedPort;	// G=0x32834221; 
- (id)init;	// 0x32833c25
- (id)initWithNamedPort:(id)namedPort;	// 0x32833c39
- (void)_distributedNotificationMessage:(id)message connection:(id)connection;	// 0x3283459d
- (void)_sendRegistrationMessage:(long long)message name:(id)name;	// 0x32834741
- (id)addObserverForName:(id)name queue:(id)queue usingBlock:(id)block;	// 0x32833e01
- (void)dealloc;	// 0x32833d41
// declared property getter: - (id)namedPort;	// 0x32834221
- (void)removeObserver:(id)observer;	// 0x32834259
@end

