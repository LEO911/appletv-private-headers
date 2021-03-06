/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSOperation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject {
	int __queueLock;	// 4 = 0x4
	NSOperation *__firstOperation;	// 8 = 0x8
	NSOperation *__lastOperation;	// 12 = 0xc
	NSOperation *__pendingFirstOperation;	// 16 = 0x10
	NSOperation *__pendingLastOperation;	// 20 = 0x14
	NSOperation *__firstPriOperation[5];	// 24 = 0x18
	NSOperation *__lastPriOperation[5];	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *__pending_barrier;	// 64 = 0x40
	int __maxNumOps;	// 68 = 0x44
	int __actualMaxNumOps;	// 72 = 0x48
	int __numExecOps;	// 76 = 0x4c
	unsigned __poke;	// 80 = 0x50
	unsigned char __mainQ;	// 84 = 0x54
	unsigned char __suspended;	// 85 = 0x55
	unsigned char __overcommit;	// 86 = 0x56
	unsigned char __pad1[1];	// 87 = 0x57
	BOOL __nameBuffer[160];	// 88 = 0x58
}
- (id)init;	// 0x373113d1
- (void)dealloc;	// 0x3734fee5
- (void)finalize;	// 0x3739c18d
@end

