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
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x30066c85; @synthesize=_accountInfoProvider
@property(copy, nonatomic) id completionBlock;	// G=0x30066c95; S=0x30066ca5; @synthesize=_completionBlock
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// G=0x30066cc9; S=0x30066cd9; @synthesize=_delegate
@property(retain, nonatomic) NSError *error;	// G=0x30066ce9; S=0x30066cf9; @synthesize=_error
@property(readonly, assign) NSMutableSet *outstandingTasks;	// G=0x30066d1d; @synthesize=_outstandingTasks
@property(copy, nonatomic) id progressBlock;	// G=0x30066d2d; S=0x30066d3d; @synthesize=_progressBlock
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x30066d61; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x30066d71; S=0x30066da5; @synthesize=_timeoutInterval
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x300667d9
- (void)_tearDownAllTasks;	// 0x300669c9
// declared property getter: - (id)accountInfoProvider;	// 0x30066c85
- (void)bailWithError:(id)error;	// 0x30066b09
- (void)cancelTaskGroup;	// 0x30066b51
// declared property getter: - (id)completionBlock;	// 0x30066c95
- (void)dealloc;	// 0x30066881
// declared property getter: - (id)delegate;	// 0x30066cc9
// declared property getter: - (id)error;	// 0x30066ce9
- (void)finishCoreDAVTaskGroupWithError:(id)error;	// 0x30066bc9
// declared property getter: - (id)outstandingTasks;	// 0x30066d1d
// declared property getter: - (id)progressBlock;	// 0x30066d2d
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x30066ca5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30066cd9
// declared property setter: - (void)setError:(id)error;	// 0x30066cf9
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x30066d3d
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x30066da5
- (void)startTaskGroup;	// 0x300669b1
- (void)syncAway;	// 0x300669b5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x300669c5
// declared property getter: - (id)taskManager;	// 0x30066d61
// declared property getter: - (double)timeoutInterval;	// 0x30066d71
@end
