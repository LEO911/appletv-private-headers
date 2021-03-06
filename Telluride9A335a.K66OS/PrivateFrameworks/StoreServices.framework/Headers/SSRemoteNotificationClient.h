/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"


@interface SSRemoteNotificationClient : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
}
+ (id)sharedClient;	// 0x30ecb4e1
- (id)init;	// 0x30ecb43d
- (void)dealloc;	// 0x30ecb48d
- (id)popQueuedNotifications;	// 0x30ecb591
- (void)registerForRemoteNotifications;	// 0x30ecb70d
- (void)unregisterForRemoteNotifications;	// 0x30ecb981
@end

