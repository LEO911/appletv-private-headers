/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "BackBoardServices-Structs.h"

@protocol OS_dispatch_queue;

@interface BKSSystemServices : NSObject {
	XPCProxy *_server;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}
- (id)init;	// 0x3306ac31
- (void)dealloc;	// 0x3306ad45
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3306aea9
- (void)terminateApplication:(id)application forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;	// 0x3306adb5
- (void)terminateApplicationGroup:(int)group forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;	// 0x3306ae6d
@end
