/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSError;
@protocol CoreDAVTaskManager, CoreDAVTaskGroupDelegate, CoreDAVAccountInfoProvider;

@interface CoreDAVTaskGroup : NSObject {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	double _timeoutInterval;	// 12 = 0xc
	NSMutableSet *_outstandingTasks;	// 20 = 0x14
	BOOL _isCancelling;	// 24 = 0x18
	BOOL _isTearingDown;	// 25 = 0x19
@private
	id<CoreDAVTaskGroupDelegate> _delegate;	// 28 = 0x1c
	id _progressBlock;	// 32 = 0x20
	id _completionBlock;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
}
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x35dcb345; @synthesize=_accountInfoProvider
@property(copy, nonatomic) id completionBlock;	// G=0x35dcb355; S=0x35dcb365; @synthesize=_completionBlock
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// G=0x35dcb389; S=0x35dcb399; @synthesize=_delegate
@property(retain, nonatomic) NSError *error;	// G=0x35dcb3a9; S=0x35dcb3b9; @synthesize=_error
@property(readonly, assign) NSMutableSet *outstandingTasks;	// G=0x35dcb3dd; @synthesize=_outstandingTasks
@property(copy, nonatomic) id progressBlock;	// G=0x35dcb3ed; S=0x35dcb3fd; @synthesize=_progressBlock
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x35dcb421; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x35dcb431; S=0x35dcb465; @synthesize=_timeoutInterval
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x35dcae99
- (void)_tearDownAllTasks;	// 0x35dcb089
// declared property getter: - (id)accountInfoProvider;	// 0x35dcb345
- (void)bailWithError:(id)error;	// 0x35dcb1c9
- (void)cancelTaskGroup;	// 0x35dcb211
// declared property getter: - (id)completionBlock;	// 0x35dcb355
- (void)dealloc;	// 0x35dcaf41
// declared property getter: - (id)delegate;	// 0x35dcb389
// declared property getter: - (id)error;	// 0x35dcb3a9
- (void)finishCoreDAVTaskGroupWithError:(id)error;	// 0x35dcb289
// declared property getter: - (id)outstandingTasks;	// 0x35dcb3dd
// declared property getter: - (id)progressBlock;	// 0x35dcb3ed
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x35dcb365
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35dcb399
// declared property setter: - (void)setError:(id)error;	// 0x35dcb3b9
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x35dcb3fd
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x35dcb465
- (void)startTaskGroup;	// 0x35dcb071
- (void)syncAway;	// 0x35dcb075
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x35dcb085
// declared property getter: - (id)taskManager;	// 0x35dcb421
// declared property getter: - (double)timeoutInterval;	// 0x35dcb431
@end

