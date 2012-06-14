/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "APSConnectionDelegate.h"
#import "BRSingleton.h"

@class NSData, APSConnection, NSLock, NSDictionary;

@interface ATVPushNotificationServer : BRSingleton <APSConnectionDelegate> {
@private
	APSConnection *_apsConnection;	// 4 = 0x4
	APSConnection *_devAPSConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	BOOL _devTokenDone;	// 13 = 0xd
	NSData *_token;	// 16 = 0x10
	NSData *_devToken;	// 20 = 0x14
	NSLock *_listenersLock;	// 24 = 0x18
	NSDictionary *_listenersForTopics;	// 28 = 0x1c
}
@property(readonly, retain) NSData *devToken;	// G=0x32ad27d5; converted property
+ (void)setSingleton:(id)singleton;	// 0x32ad1b49
+ (id)singleton;	// 0x32ad1b39
+ (void)start;	// 0x32ad1b59
+ (void)stop;	// 0x32ad1b8d
- (id)init;	// 0x32ad1c49
- (id)_aggregatedTopics;	// 0x32ad2a3d
- (void)_registerDeviceWithDevToken:(id)devToken;	// 0x32ad27f5
- (void)_registerDeviceWithToken:(id)token;	// 0x32ad284d
- (void)_removeAPSDKeepAliveFile;	// 0x32ad29b1
- (id)_tokenAsString;	// 0x32ad2b09
- (void)_touchAPSDKeepAliveFile;	// 0x32ad2919
- (void)_updateAggregateTopics;	// 0x32ad2aa5
- (void)addListener:(id)listener forTopic:(id)topic;	// 0x32ad211d
- (void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;	// 0x32ad20cd
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x32ad2011
- (void)connection:(id)connection didReceivePublicToken:(id)token;	// 0x32ad1fd9
- (void)connectionDidReconnect:(id)connection;	// 0x32ad20d1
- (void)dealloc;	// 0x32ad1bc1
// converted property getter: - (id)devToken;	// 0x32ad27d5
- (BOOL)isConnected;	// 0x32ad20d5
- (BOOL)isDevConnected;	// 0x32ad20f9
- (id)publicToken;	// 0x32ad27e5
- (void)removeListener:(id)listener;	// 0x32ad258d
- (void)removeListener:(id)listener forTopic:(id)topic;	// 0x32ad23d9
- (void)removeTopic:(id)topic;	// 0x32ad22d1
- (void)start;	// 0x32ad1cd1
- (void)stop;	// 0x32ad1f51
@end
