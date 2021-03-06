/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, SSXPCServer;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenter : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableArray *_observers;	// 8 = 0x8
	NSString *_portName;	// 12 = 0xc
	SSXPCServer *_server;	// 16 = 0x10
}
@property(readonly, assign) NSString *namedPort;	// G=0x312df649; 
- (id)init;	// 0x312df061
- (id)initWithNamedPort:(id)namedPort;	// 0x312df075
- (void)_distributedNotificationMessage:(id)message connection:(id)connection;	// 0x312df9d5
- (void)_sendRegistrationMessage:(long long)message name:(id)name;	// 0x312dfb75
- (id)addObserverForName:(id)name queue:(id)queue usingBlock:(id)block;	// 0x312df231
- (void)dealloc;	// 0x312df179
// declared property getter: - (id)namedPort;	// 0x312df649
- (void)removeObserver:(id)observer;	// 0x312df681
@end

