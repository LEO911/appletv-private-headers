/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSLock;

@interface CALRunLoopSemaphore : NSObject {
	CFRunLoopRef _rloop;	// 4 = 0x4
	int _count;	// 8 = 0x8
	int _pipe[2];	// 12 = 0xc
	CFSocketRef _socket;	// 20 = 0x14
	CFRunLoopSourceRef _socketSource;	// 24 = 0x18
	NSLock *_countLock;	// 28 = 0x1c
}
- (id)init;	// 0x378b966d
- (id)initWithCFRunLoop:(CFRunLoopRef)cfrunLoop;	// 0x378b9691
- (void)awake;	// 0x378b9669
- (void)dealloc;	// 0x378b97b9
- (void)down;	// 0x378b9901
- (void)finalize;	// 0x378b986d
- (void)up;	// 0x378b99b1
- (int)value;	// 0x378b9a1d
@end

