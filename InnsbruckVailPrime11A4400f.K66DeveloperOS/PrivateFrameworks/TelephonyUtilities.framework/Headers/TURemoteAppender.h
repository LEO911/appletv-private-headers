/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TelephonyUtilities-Structs.h"
#import </libobjc.A.h>
#import "TUAppender.h"

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {
	xpc_connection_s *_connection;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	dispatch_queue_s *_backgroundQueue;	// 12 = 0xc
}
- (id)initWithName:(id)name;	// 0x329f046d
- (void)dealloc;	// 0x329f0571
- (void)flush;	// 0x329f05e5
- (void)logWithIdentifier:(id)identifier pid:(int)pid date:(id)date level:(int)level topic:(id)topic text:(id)text backtrace:(id)backtrace;	// 0x329f05e9
- (void)setAppenderDelegate:(id)delegate;	// 0x329f0a41
@end

