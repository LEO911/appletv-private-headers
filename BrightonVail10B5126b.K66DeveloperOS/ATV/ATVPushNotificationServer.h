/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APSConnectionDelegate.h"
#import "BRSingleton.h"

@class NSDictionary, APSConnection, NSData, NSLock;

__attribute__((visibility("hidden")))
@interface ATVPushNotificationServer : BRSingleton <APSConnectionDelegate> {
	APSConnection *_apsConnection;	// 4 = 0x4
	APSConnection *_devAPSConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	BOOL _devTokenDone;	// 13 = 0xd
	NSData *_token;	// 16 = 0x10
	NSData *_devToken;	// 20 = 0x14
	NSLock *_listenersLock;	// 24 = 0x18
	NSDictionary *_listenersForTopics;	// 28 = 0x1c
}
@property(readonly, retain) NSData *devToken;	// G=0x22dba5; converted property
+ (void)setSingleton:(id)singleton;	// 0x22cee9
+ (id)singleton;	// 0x22ced9
+ (void)start;	// 0x22cef9
+ (void)stop;	// 0x22cf2d
- (id)init;	// 0x22cfed
- (id)_aggregatedTopics;	// 0x22de01
- (void)_registerDeviceWithDevToken:(id)devToken;	// 0x22dbc5
- (void)_registerDeviceWithToken:(id)token;	// 0x22dc19
- (void)_removeAPSDKeepAliveFile;	// 0x22dd75
- (id)_tokenAsString;	// 0x22ded1
- (void)_touchAPSDKeepAliveFile;	// 0x22dcdd
- (void)_updateAggregateTopics;	// 0x22de69
- (void)addListener:(id)listener forTopic:(id)topic;	// 0x22d4cd
- (void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;	// 0x22d47d
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x22d3a5
- (void)connection:(id)connection didReceivePublicToken:(id)token;	// 0x22d375
- (void)connectionDidReconnect:(id)connection;	// 0x22d481
- (void)dealloc;	// 0x22cf61
// converted property getter: - (id)devToken;	// 0x22dba5
- (BOOL)isConnected;	// 0x22d485
- (BOOL)isDevConnected;	// 0x22d4a9
- (id)publicToken;	// 0x22dbb5
- (void)removeListener:(id)listener;	// 0x22d935
- (void)removeListener:(id)listener forTopic:(id)topic;	// 0x22d785
- (void)removeTopic:(id)topic;	// 0x22d681
- (void)start;	// 0x22d079
- (void)stop;	// 0x22d2f1
@end
