/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import </libobjc.A.h>

@class MSTimerGate, MSASServerSideModel;
@protocol OS_dispatch_queue;

@interface MSASGroupedQueue : NSObject {
	BOOL _isShuttingDown;	// 4 = 0x4
	BOOL _isAssertingBusyAssertion;	// 5 = 0x5
	MSASServerSideModel *_model;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_workQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_memberQueue;	// 16 = 0x10
	int _maxGroupedCallbackEventBatchCount;	// 20 = 0x14
	MSTimerGate *_idleTimerGate;	// 24 = 0x18
	MSTimerGate *_stalenessTimerGate;	// 28 = 0x1c
	double _maxGroupedCallbackEventIdleInterval;	// 32 = 0x20
	double _maxGroupedCallbackEventStaleness;	// 40 = 0x28
}
@property(retain, nonatomic) MSTimerGate *idleTimerGate;	// G=0x30595971; S=0x30595981; @synthesize=_idleTimerGate
@property(readonly, assign, nonatomic) BOOL isAssertingBusyAssertion;	// G=0x3059489d; @synthesize=_isAssertingBusyAssertion
@property(assign, nonatomic) BOOL isShuttingDown;	// G=0x305959e1; S=0x305959f1; @synthesize=_isShuttingDown
@property(assign, nonatomic) int maxGroupedCallbackEventBatchCount;	// G=0x30593e19; S=0x30593f91; @synthesize=_maxGroupedCallbackEventBatchCount
@property(assign, nonatomic) double maxGroupedCallbackEventIdleInterval;	// G=0x3059426d; S=0x305943f1; @synthesize=_maxGroupedCallbackEventIdleInterval
@property(assign, nonatomic) double maxGroupedCallbackEventStaleness;	// G=0x3059402d; S=0x305941b1; @synthesize=_maxGroupedCallbackEventStaleness
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x30595939; S=0x30595949; @synthesize=_memberQueue
@property(assign, nonatomic) __weak MSASServerSideModel *model;	// G=0x305958e1; S=0x30593d29; @synthesize=_model
@property(retain, nonatomic) MSTimerGate *stalenessTimerGate;	// G=0x305959a9; S=0x305959b9; @synthesize=_stalenessTimerGate
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x30595901; S=0x30595911; @synthesize=_workQueue
- (id)init;	// 0x30593c31
- (void).cxx_destruct;	// 0x30595a01
- (void)assertBusyAssertion;	// 0x305944ad
- (void)dealloc;	// 0x30593cfd
- (void)deassertBusyAssertion;	// 0x30594545
- (void)flushQueueCompletionBlock:(id)block;	// 0x30594c29
- (BOOL)hasEnqueuedItems;	// 0x30594e19
// declared property getter: - (id)idleTimerGate;	// 0x30595971
// declared property getter: - (BOOL)isAssertingBusyAssertion;	// 0x3059489d
// declared property getter: - (BOOL)isShuttingDown;	// 0x305959e1
// declared property getter: - (int)maxGroupedCallbackEventBatchCount;	// 0x30593e19
// declared property getter: - (double)maxGroupedCallbackEventIdleInterval;	// 0x3059426d
// declared property getter: - (double)maxGroupedCallbackEventStaleness;	// 0x3059402d
// declared property getter: - (id)memberQueue;	// 0x30595939
- (BOOL)memberQueueIsAssertingBusyAssertion;	// 0x30594a1d
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)assertion;	// 0x30594a2d
// declared property getter: - (id)model;	// 0x305958e1
// declared property setter: - (void)setIdleTimerGate:(id)gate;	// 0x30595981
// declared property setter: - (void)setIsShuttingDown:(BOOL)down;	// 0x305959f1
// declared property setter: - (void)setMaxGroupedCallbackEventBatchCount:(int)count;	// 0x30593f91
// declared property setter: - (void)setMaxGroupedCallbackEventIdleInterval:(double)interval;	// 0x305943f1
// declared property setter: - (void)setMaxGroupedCallbackEventStaleness:(double)staleness;	// 0x305941b1
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x30595949
// declared property setter: - (void)setModel:(id)model;	// 0x30593d29
// declared property setter: - (void)setStalenessTimerGate:(id)gate;	// 0x305959b9
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x30595911
- (void)shutDownFlush:(BOOL)flush completionBlock:(id)block;	// 0x30594a3d
// declared property getter: - (id)stalenessTimerGate;	// 0x305959a9
// declared property getter: - (id)workQueue;	// 0x30595901
- (void)workQueueAssertBusyAssertion;	// 0x305945dd
- (void)workQueueClearIdleTimer;	// 0x3059517d
- (void)workQueueClearStalenessTimer;	// 0x30595545
- (void)workQueueDeassertBusyAssertion;	// 0x3059473d
- (void)workQueueDidEnqueueFirstItem;	// 0x305955b1
- (void)workQueueDidEnqueueSubsequentItem;	// 0x30595751
- (void)workQueueFlushQueue;	// 0x30594e1d
- (void)workQueueRestartIdleTimer;	// 0x30594e21
- (void)workQueueRestartStalenessTimer;	// 0x305951e9
@end

