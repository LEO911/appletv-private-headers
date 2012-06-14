/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
@private
	id _private;	// 4 = 0x4
	int _private1;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x31588e31; S=0x3159efa5; converted property
@property(assign) void *observationInfo;	// G=0x3159556d; S=0x315fbe45; converted property
@property(assign) int queuePriority;	// G=0x315fc005; S=0x315b6c29; converted property
@property(assign) double threadPriority;	// G=0x315fc041; S=0x315fc07d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31579009
+ (void)initialize;	// 0x31576c91
- (id)init;	// 0x31576cf9
- (id)__;	// 0x315fc221
- (id)_implicitObservationInfo;	// 0x3159558d
- (BOOL)_isDeallocating;	// 0x315fbe79
- (BOOL)_tryRetain;	// 0x315954fd
- (void)addDependency:(id)dependency;	// 0x315fc161
- (void)cancel;	// 0x315ad14d
// converted property getter: - (id)completionBlock;	// 0x31588e31
- (void)dealloc;	// 0x31589009
- (id)dependencies;	// 0x315fc1e1
- (void)finalize;	// 0x315fbeb1
- (BOOL)isAsynchronous;	// 0x315fbf71
- (BOOL)isCancelled;	// 0x3159f045
- (BOOL)isConcurrent;	// 0x315fbedd
- (BOOL)isExecuting;	// 0x315ad595
- (BOOL)isFinished;	// 0x3159693d
- (BOOL)isReady;	// 0x315799e5
- (void)main;	// 0x315fc21d
// converted property getter: - (void *)observationInfo;	// 0x3159556d
// converted property getter: - (int)queuePriority;	// 0x315fc005
- (oneway void)release;	// 0x31579abd
- (void)removeDependency:(id)dependency;	// 0x315fc1a1
- (id)retain;	// 0x31579995
- (unsigned)retainCount;	// 0x315fbe65
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x3159efa5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x315fbe45
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x315b6c29
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x315fc07d
- (void)start;	// 0x31594ff9
// converted property getter: - (double)threadPriority;	// 0x315fc041
- (void)waitUntilFinished;	// 0x315fc0d1
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x315fc10d
@end
