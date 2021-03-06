/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x319f7ed5; S=0x319f7e25; converted property
@property(assign) unsigned stackSize;	// G=0x319f7f95; S=0x319f7f69; converted property
@property(assign) double threadPriority;	// G=0x319f7fc9; S=0x319f8089; converted property
+ (id)callStackReturnAddresses;	// 0x319f7c91
+ (id)callStackSymbols;	// 0x319f7d09
+ (id)currentThread;	// 0x3194c169
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x3196cea5
+ (void)exit;	// 0x31981221
+ (BOOL)isDying;	// 0x319f7df1
+ (BOOL)isMainThread;	// 0x31965e8d
+ (BOOL)isMultiThreaded;	// 0x319967ed
+ (id)mainThread;	// 0x3194b8a1
+ (BOOL)setThreadPriority:(double)priority;	// 0x319782e9
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x3199b3d9
+ (void)sleepUntilDate:(id)date;	// 0x319f7ba1
+ (double)threadPriority;	// 0x319f7b39
- (id)init;	// 0x31954595
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3196cf11
- (void)_nq:(id)nq;	// 0x3194bdfd
- (void)cancel;	// 0x319f81ed
- (void)dealloc;	// 0x31954481
- (id)description;	// 0x319f8235
- (BOOL)isCancelled;	// 0x319f81c9
- (BOOL)isDying;	// 0x319f7dcd
- (BOOL)isExecuting;	// 0x319f8179
- (BOOL)isFinished;	// 0x319f81a1
- (BOOL)isMainThread;	// 0x319967b9
- (void)main;	// 0x3196d155
// converted property getter: - (id)name;	// 0x319f7ed5
- (id)runLoop;	// 0x319f7d81
// converted property setter: - (void)setName:(id)name;	// 0x319f7e25
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x319f7f69
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x319f8089
// converted property getter: - (unsigned)stackSize;	// 0x319f7f95
- (void)start;	// 0x3196d00d
- (id)threadDictionary;	// 0x31972215
// converted property getter: - (double)threadPriority;	// 0x319f7fc9
@end

