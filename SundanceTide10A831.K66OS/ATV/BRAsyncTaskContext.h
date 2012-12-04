/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRAsyncTaskContext : XXUnknownSuperclass {
	int _maxRunningTasks;	// 4 = 0x4
	int _numRunningTasks;	// 8 = 0x8
	NSMutableArray *_taskQueue;	// 12 = 0xc
	NSMutableArray *_allTasks;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
}
+ (id)defaultContext;	// 0x387051
+ (void)initialize;	// 0x386da1
- (id)initWithMaxTasks:(int)maxTasks;	// 0x386e05
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x386e19
- (void)_addManagerObserverForTask:(id)task;	// 0x3874c9
- (void)_cancelAllTasks;	// 0x387a25
- (void)_removeManagerObserverForTask:(id)task;	// 0x387521
- (void)_scheduleNextTask:(id)task;	// 0x3876a1
- (void)_taskComplete:(id)complete;	// 0x38756d
- (void)_threadDeath:(id)death;	// 0x38789d
- (void)cancelTask:(id)task;	// 0x387319
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x387061
- (void)dealloc;	// 0x386f45
- (id)description;	// 0x386fe9
- (void)scheduleTask:(id)task;	// 0x3871b5
@end
