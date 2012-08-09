/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject {
	unsigned count;	// 4 = 0x4
	NSURLQueueNode *head;	// 8 = 0x8
	NSURLQueueNode *tail;	// 12 = 0xc
	id monitor;	// 16 = 0x10
	BOOL waitOnTake;	// 20 = 0x14
	BOOL _pad1;	// 21 = 0x15
	BOOL _pad2;	// 22 = 0x16
	BOOL _pad3;	// 23 = 0x17
}
@property(readonly, assign) unsigned count;	// G=0x34def68d; converted property
@property(assign) BOOL waitOnTake;	// G=0x34def69d; S=0x34def6ad; converted property
+ (id)newNode;	// 0x34deefd5
- (id)init;	// 0x34def009
- (void)clear;	// 0x34def519
// converted property getter: - (unsigned)count;	// 0x34def68d
- (void)dealloc;	// 0x34def0ad
- (void)finalize;	// 0x34def10d
- (int)indexOf:(id)of;	// 0x34def5ed
- (BOOL)isEmpty;	// 0x34def675
- (id)peek;	// 0x34def345
- (id)peekAt:(unsigned)at;	// 0x34def3a1
- (void)put:(id)put;	// 0x34def14d
- (BOOL)remove:(id)remove;	// 0x34def431
// converted property setter: - (void)setWaitOnTake:(BOOL)take;	// 0x34def6ad
- (id)take;	// 0x34def241
// converted property getter: - (BOOL)waitOnTake;	// 0x34def69d
@end
