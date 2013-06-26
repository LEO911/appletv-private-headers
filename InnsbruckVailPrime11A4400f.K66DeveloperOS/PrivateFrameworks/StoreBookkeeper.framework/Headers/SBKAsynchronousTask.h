/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class NSError, NSString, NSMutableArray, SBKTaskAssertion;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SBKAsynchronousTask : NSObject {
	NSObject<OS_dispatch_queue> *_handlerQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSObject<OS_dispatch_source> *_timeoutTimer;	// 12 = 0xc
	BOOL _taskInvalidationDisabled;	// 16 = 0x10
	double _timeout;	// 20 = 0x14
	int _cancelType;	// 28 = 0x1c
	id _result;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	id _expirationHandler;	// 40 = 0x28
	id _finishedHandler;	// 44 = 0x2c
	NSString *_debugDescription;	// 48 = 0x30
	SBKTaskAssertion *_taskAssertion;	// 52 = 0x34
	NSMutableArray *_completions;	// 56 = 0x38
}
@property(assign) int cancelType;	// G=0x327c04f9; S=0x327c044d; @synthesize=_cancelType
@property(retain) NSMutableArray *completions;	// G=0x327c163d; S=0x327c1651; @synthesize=_completions
@property(copy) NSString *debugDescription;	// G=0x327c15f5; S=0x327c1609; @synthesize=_debugDescription
@property(retain) NSError *error;	// G=0x327c0891; S=0x327c07b9; @synthesize=_error
@property(copy) id expirationHandler;	// G=0x327bffdd; S=0x327bfeed; @synthesize=_expirationHandler
@property(copy) id finishedHandler;	// G=0x327c0201; S=0x327c0111; @synthesize=_finishedHandler
@property(retain) id result;	// G=0x327c06a5; S=0x327c05cd; @synthesize=_result
@property(retain) SBKTaskAssertion *taskAssertion;	// G=0x327c1619; S=0x327c162d; @synthesize=_taskAssertion
- (id)initWithHandlerQueue:(id)handlerQueue timeout:(double)timeout debugDescription:(id)description;	// 0x327bfae1
- (void).cxx_destruct;	// 0x327c1661
- (void)_invalidateAssertion:(BOOL)assertion;	// 0x327c0e69
- (void)_invalidateTimer;	// 0x327bfdb9
- (void)_onQueueFireExpirationHandlerIfNecesary;	// 0x327c031d
- (void)addTaskCompletionBlock:(id)block;	// 0x327c10a9
- (void)beginTaskOperation;	// 0x327c09a1
// declared property getter: - (int)cancelType;	// 0x327c04f9
// declared property getter: - (id)completions;	// 0x327c163d
- (void)dealloc;	// 0x327bfcf9
// declared property getter: - (id)debugDescription;	// 0x327c15f5
- (id)description;	// 0x327bfe55
- (void)endTaskOperation;	// 0x327c0e35
// declared property getter: - (id)error;	// 0x327c0891
// declared property getter: - (id)expirationHandler;	// 0x327bffdd
- (void)finishTaskOperationWithResult:(id)result error:(id)error;	// 0x327c0c99
// declared property getter: - (id)finishedHandler;	// 0x327c0201
- (void)invalidate;	// 0x327c1051
- (void)invokeTaskCompletionBlocksWithBlock:(id)block;	// 0x327c113d
// declared property getter: - (id)result;	// 0x327c06a5
// declared property setter: - (void)setCancelType:(int)type;	// 0x327c044d
// declared property setter: - (void)setCompletions:(id)completions;	// 0x327c1651
// declared property setter: - (void)setDebugDescription:(id)description;	// 0x327c1609
// declared property setter: - (void)setError:(id)error;	// 0x327c07b9
// declared property setter: - (void)setExpirationHandler:(id)handler;	// 0x327bfeed
// declared property setter: - (void)setFinishedHandler:(id)handler;	// 0x327c0111
// declared property setter: - (void)setResult:(id)result;	// 0x327c05cd
// declared property setter: - (void)setTaskAssertion:(id)assertion;	// 0x327c162d
// declared property getter: - (id)taskAssertion;	// 0x327c1619
@end
