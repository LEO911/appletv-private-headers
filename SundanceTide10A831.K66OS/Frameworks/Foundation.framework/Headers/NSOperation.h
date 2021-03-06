/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
	id _private;	// 4 = 0x4
	int _private1;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x32525e5d; S=0x32535fa9; converted property
@property(assign) void *observationInfo;	// G=0x3252426d; S=0x32599b1d; converted property
@property(assign) int queuePriority;	// G=0x32599ce9; S=0x32599d25; converted property
@property(assign) double threadPriority;	// G=0x32599d65; S=0x32599da1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x325231fd
+ (void)initialize;	// 0x32522d21
- (id)init;	// 0x32522f11
- (id)__;	// 0x32599efd
- (id)_implicitObservationInfo;	// 0x3252428d
- (BOOL)_isDeallocating;	// 0x32599b59
- (BOOL)_tryRetain;	// 0x32523f25
- (void)addDependency:(id)dependency;	// 0x32599e39
- (void)cancel;	// 0x32548f15
// converted property getter: - (id)completionBlock;	// 0x32525e5d
- (void)dealloc;	// 0x32534ee1
- (id)dependencies;	// 0x32599eb9
- (void)finalize;	// 0x32599b91
- (BOOL)isAsynchronous;	// 0x32599c55
- (BOOL)isCancelled;	// 0x32535f55
- (BOOL)isConcurrent;	// 0x32599bc1
- (BOOL)isExecuting;	// 0x3252c349
- (BOOL)isFinished;	// 0x32525d81
- (BOOL)isReady;	// 0x32523f99
- (void)main;	// 0x32599ef5
// converted property getter: - (void *)observationInfo;	// 0x3252426d
// converted property getter: - (int)queuePriority;	// 0x32599ce9
- (oneway void)release;	// 0x32525eed
- (void)removeDependency:(id)dependency;	// 0x32599e79
- (id)retain;	// 0x3252c3a5
- (unsigned)retainCount;	// 0x32599b41
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x32535fa9
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x32599b1d
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x32599d25
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x32599da1
- (void)start;	// 0x32523a31
// converted property getter: - (double)threadPriority;	// 0x32599d65
- (void)waitUntilFinished;	// 0x3254b981
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x32599ded
@end

