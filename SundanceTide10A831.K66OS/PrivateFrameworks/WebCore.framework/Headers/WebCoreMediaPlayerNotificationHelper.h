/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"


@interface WebCoreMediaPlayerNotificationHelper : NSObject {
	MediaPlayerPrivateIOS *_client;	// 4 = 0x4
	BOOL _deferredPropertiesScheduled;	// 8 = 0x8
}
- (id)initWithClient:(MediaPlayerPrivateIOS *)client;	// 0x352ad159
- (void)cancelPendingRequests;	// 0x352f2df5
- (void)delayNotification:(int)notification;	// 0x357dd581
- (void)deliverNotification:(id)notification;	// 0x357dd5e1
- (void)disconnect;	// 0x352f7d3d
- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)optionalDelay;	// 0x352f4e19
- (void)schedulePrepareToPlayWithOptionalDelay:(id)optionalDelay;	// 0x357dd659
@end

