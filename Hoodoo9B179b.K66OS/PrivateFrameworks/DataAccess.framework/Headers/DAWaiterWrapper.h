/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject {
	id<DADataclassLockWatcher> _waiter;	// 4 = 0x4
	int _dataclasses;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
	int _waiterNum;	// 16 = 0x10
}
@property(copy) id completionHandler;	// G=0x311a85b9; S=0x311a85cd; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x311a85f1; S=0x311a8601; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x311a8581; S=0x311a8595; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x311a8611; @synthesize=_waiterNum
- (id)init;	// 0x311a8459
// declared property getter: - (id)completionHandler;	// 0x311a85b9
// declared property getter: - (int)dataclasses;	// 0x311a85f1
- (void)dealloc;	// 0x311a8521
- (id)description;	// 0x311a84a9
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x311a85cd
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x311a8601
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x311a8595
// declared property getter: - (id)waiter;	// 0x311a8581
// declared property getter: - (int)waiterNum;	// 0x311a8611
@end
