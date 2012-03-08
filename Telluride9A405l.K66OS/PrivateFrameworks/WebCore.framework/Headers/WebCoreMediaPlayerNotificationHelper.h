/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebCoreMediaPlayerNotificationHelper : NSObject {
@private
	MediaPlayerPrivateiPhone *_client;	// 4 = 0x4
	BOOL _deferredPropertiesScheduled;	// 8 = 0x8
}
- (id)initWithClient:(MediaPlayerPrivateiPhone *)client;	// 0x30572225
- (void)cancelPendingRequests;	// 0x305ae469
- (void)delayNotification:(int)notification;	// 0x309ddeed
- (void)deliverNotification:(id)notification;	// 0x309dde81
- (void)disconnect;	// 0x305b8659
- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)optionalDelay;	// 0x305b7e91
- (void)schedulePrepareToPlayWithOptionalDelay:(id)optionalDelay;	// 0x309ddde9
@end
