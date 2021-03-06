/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {
	id _delegate;	// 4 = 0x4
	id _target;	// 8 = 0x8
	double _dequeueRate;	// 12 = 0xc
	NSMutableArray *_queue;	// 20 = 0x14
	NSMutableArray *_options;	// 24 = 0x18
	NSProtocolChecker *_protocolChecker;	// 28 = 0x1c
	BOOL _holdQueue;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x341a2509; 
@property(assign) id delegate;	// G=0x341a259d; S=0x341a25b1; @synthesize=_delegate
@property(assign, nonatomic) double dequeueRate;	// G=0x341a25f5; S=0x341a14fd; @synthesize=_dequeueRate
@property(readonly, assign, nonatomic) BOOL holdQueue;	// G=0x341a263d; @synthesize=_holdQueue
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x341a2529; 
@property(readonly, assign, nonatomic) NSMutableArray *options;	// G=0x341a261d; @synthesize=_options
@property(retain, nonatomic) Protocol *protocol;	// G=0x341a14dd; S=0x341a1479; 
@property(readonly, assign, nonatomic) NSProtocolChecker *protocolChecker;	// G=0x341a262d; @synthesize=_protocolChecker
@property(readonly, assign, nonatomic) NSMutableArray *queue;	// G=0x341a260d; @synthesize=_queue
@property(assign) id target;	// G=0x341a25c9; S=0x341a25dd; @synthesize=_target
- (id)init;	// 0x341a1255
- (BOOL)_acceptsOptions:(unsigned)options;	// 0x341a1ba9
- (void)_checkQueue;	// 0x341a17cd
- (id)_dequeueInvocation;	// 0x341a218d
- (int)_enqueueInvocation:(id)invocation options:(unsigned)options;	// 0x341a1fd1
- (void)_holdQueueNotification:(id)notification;	// 0x341a156d
- (BOOL)_insertInvocation:(id)invocation options:(unsigned)options;	// 0x341a1dcd
- (BOOL)_invokeInvocation:(id)invocation;	// 0x341a16f5
- (int)_maxQueueLimitSize;	// 0x341a1b75
- (int)_numberOfLimitedMessagesInQueue;	// 0x341a1a3d
- (unsigned)_optionsForInvocation:(id)invocation;	// 0x341a19d5
- (void)_releaseQueueNotification:(id)notification;	// 0x341a15e5
- (BOOL)_replaceSimilarInvocation:(id)invocation;	// 0x341a1c19
- (void)_setQueueTimer;	// 0x341a1641
- (void)_stepQueueNotification:(id)notification;	// 0x341a1521
// declared property getter: - (unsigned)count;	// 0x341a2509
- (void)dealloc;	// 0x341a12f5
// declared property getter: - (id)delegate;	// 0x341a259d
// declared property getter: - (double)dequeueRate;	// 0x341a25f5
- (void)forwardInvocation:(id)invocation;	// 0x341a136d
// declared property getter: - (BOOL)holdQueue;	// 0x341a263d
- (void)invokeAll;	// 0x341a24a1
// declared property getter: - (BOOL)isEmpty;	// 0x341a2529
- (id)methodSignatureForSelector:(SEL)selector;	// 0x341a142d
// declared property getter: - (id)options;	// 0x341a261d
- (id)peek;	// 0x341a2559
// declared property getter: - (id)protocol;	// 0x341a14dd
// declared property getter: - (id)protocolChecker;	// 0x341a262d
// declared property getter: - (id)queue;	// 0x341a260d
- (void)removeAllInvocations;	// 0x341a2335
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x341a25b1
// declared property setter: - (void)setDequeueRate:(double)rate;	// 0x341a14fd
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x341a1479
// declared property setter: - (void)setTarget:(id)target;	// 0x341a25dd
// declared property getter: - (id)target;	// 0x341a25c9
@end

