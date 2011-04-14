/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTSpringboardServices.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface LTSpringboardServices : XXUnknownSuperclass {
	NSDictionary *_capabilities;	// 4 = 0x4
	OSMemoryNotificationRef _notificationRef;	// 8 = 0x8
}
+ (void)configureAggregateReporting;	// 0x334ed
+ (void)configureGraphicsCapabilities;	// 0x32fad
+ (void)monitorOSMemoryNotifications;	// 0x32f89
+ (void)setSingleton:(id)singleton;	// 0x32ee9
+ (id)singleton;	// 0x32edd
- (void)dealloc;	// 0x334a5
@end

@interface LTSpringboardServices (Private)
- (void)_postOSMemoryNotifcationForLevel:(id)level;	// 0x32ef5
- (void)_registerForOSMemoryNotifications;	// 0x33b7d
- (void)_updateCapabilities;	// 0x3357d
- (void)_waitForOSMemoryNotifcation;	// 0x33be1
@end
