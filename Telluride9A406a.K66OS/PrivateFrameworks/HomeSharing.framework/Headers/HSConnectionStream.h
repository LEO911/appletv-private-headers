/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library


@interface HSConnectionStream : NSObject {
@private
	CFReadStreamRef _readStream;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
}
- (id)init;	// 0x3014b53d
- (void)dealloc;	// 0x3014b58d
- (void)sendCFHTTPMessage:(CFHTTPMessageRef)message withResponseHandler:(id)responseHandler;	// 0x3014b69d
@end

