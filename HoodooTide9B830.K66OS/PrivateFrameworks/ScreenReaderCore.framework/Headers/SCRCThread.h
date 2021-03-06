/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"

@class SCRCStackQueue, NSString, NSThread;

@interface SCRCThread : NSObject {
	SCRCStackQueue *_queue;	// 4 = 0x4
	id _queueLock;	// 8 = 0x8
	CFRunLoopSourceRef _source;	// 12 = 0xc
	CFRunLoopRef _runLoop;	// 16 = 0x10
	id _key;	// 20 = 0x14
	BOOL _isInvalid;	// 24 = 0x18
	BOOL _isRegistered;	// 25 = 0x19
	BOOL _isTimerSet;	// 26 = 0x1a
	double _lastStartTime;	// 28 = 0x1c
	NSString *_description;	// 36 = 0x24
	BOOL _descriptionChanged;	// 40 = 0x28
	NSThread *_nsThread;	// 44 = 0x2c
}
@property(assign) BOOL isInvalid;	// G=0x332b78d5; S=0x332b8371; converted property
@property(readonly, assign) double lastStartTime;	// G=0x332b98d5; converted property
+ (double)_performSelector:(SEL)selector withThreadKey:(id)threadKey onTarget:(id)target waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x332b695d
+ (int)activeThreadCount;	// 0x332b97b1
+ (id)activity;	// 0x332b9725
+ (void)initialize;	// 0x332b97f1
+ (void)invalidateForKey:(id)key;	// 0x332b889d
+ (double)lastStartTimeForKey:(id)key;	// 0x332b8a09
+ (void)postStopNotification;	// 0x332b92e1
- (id)init;	// 0x332b979d
- (void)_enqueueTask:(id)task cancelMask:(unsigned long)mask lastStartTime:(double *)time;	// 0x332b6f69
- (id)_initWithKey:(id)key task:(id)task;	// 0x332b7cc9
- (double)_performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count firstObject:(id)object moreObjects:(void *)objects;	// 0x332b99bd
- (void)_processQueue;	// 0x332b71f1
- (void)_processQueueFromTimer;	// 0x332b71d1
- (void)_runThread:(id)thread;	// 0x332b7e25
- (void)_setKey:(id)key;	// 0x332b6ef9
- (void)_setName:(id)name;	// 0x332b9a5d
- (void)dealloc;	// 0x332b87b9
// converted property getter: - (BOOL)isInvalid;	// 0x332b78d5
// converted property getter: - (double)lastStartTime;	// 0x332b98d5
- (double)performSelector:(SEL)selector onTarget:(id)target cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x332b9955
- (double)performSelector:(SEL)selector onTarget:(id)target count:(unsigned long)count objects:(id)objects;	// 0x332b9989
// converted property setter: - (void)setIsInvalid:(BOOL)invalid;	// 0x332b8371
- (void)setName:(id)name;	// 0x332b9a81
@end

