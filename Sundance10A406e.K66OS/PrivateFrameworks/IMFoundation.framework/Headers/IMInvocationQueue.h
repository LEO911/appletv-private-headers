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
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3687f509; 
@property(assign) id delegate;	// G=0x3687f59d; S=0x3687f5b1; @synthesize=_delegate
@property(assign, nonatomic) double dequeueRate;	// G=0x3687f5f5; S=0x3687e4fd; @synthesize=_dequeueRate
@property(readonly, assign, nonatomic) BOOL holdQueue;	// G=0x3687f63d; @synthesize=_holdQueue
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x3687f529; 
@property(readonly, assign, nonatomic) NSMutableArray *options;	// G=0x3687f61d; @synthesize=_options
@property(retain, nonatomic) Protocol *protocol;	// G=0x3687e4dd; S=0x3687e479; 
@property(readonly, assign, nonatomic) NSProtocolChecker *protocolChecker;	// G=0x3687f62d; @synthesize=_protocolChecker
@property(readonly, assign, nonatomic) NSMutableArray *queue;	// G=0x3687f60d; @synthesize=_queue
@property(assign) id target;	// G=0x3687f5c9; S=0x3687f5dd; @synthesize=_target
- (id)init;	// 0x3687e255
- (BOOL)_acceptsOptions:(unsigned)options;	// 0x3687eba9
- (void)_checkQueue;	// 0x3687e7cd
- (id)_dequeueInvocation;	// 0x3687f18d
- (int)_enqueueInvocation:(id)invocation options:(unsigned)options;	// 0x3687efd1
- (void)_holdQueueNotification:(id)notification;	// 0x3687e56d
- (BOOL)_insertInvocation:(id)invocation options:(unsigned)options;	// 0x3687edcd
- (BOOL)_invokeInvocation:(id)invocation;	// 0x3687e6f5
- (int)_maxQueueLimitSize;	// 0x3687eb75
- (int)_numberOfLimitedMessagesInQueue;	// 0x3687ea3d
- (unsigned)_optionsForInvocation:(id)invocation;	// 0x3687e9d5
- (void)_releaseQueueNotification:(id)notification;	// 0x3687e5e5
- (BOOL)_replaceSimilarInvocation:(id)invocation;	// 0x3687ec19
- (void)_setQueueTimer;	// 0x3687e641
- (void)_stepQueueNotification:(id)notification;	// 0x3687e521
// declared property getter: - (unsigned)count;	// 0x3687f509
- (void)dealloc;	// 0x3687e2f5
// declared property getter: - (id)delegate;	// 0x3687f59d
// declared property getter: - (double)dequeueRate;	// 0x3687f5f5
- (void)forwardInvocation:(id)invocation;	// 0x3687e36d
// declared property getter: - (BOOL)holdQueue;	// 0x3687f63d
- (void)invokeAll;	// 0x3687f4a1
// declared property getter: - (BOOL)isEmpty;	// 0x3687f529
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3687e42d
// declared property getter: - (id)options;	// 0x3687f61d
- (id)peek;	// 0x3687f559
// declared property getter: - (id)protocol;	// 0x3687e4dd
// declared property getter: - (id)protocolChecker;	// 0x3687f62d
// declared property getter: - (id)queue;	// 0x3687f60d
- (void)removeAllInvocations;	// 0x3687f335
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3687f5b1
// declared property setter: - (void)setDequeueRate:(double)rate;	// 0x3687e4fd
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x3687e479
// declared property setter: - (void)setTarget:(id)target;	// 0x3687f5dd
// declared property getter: - (id)target;	// 0x3687f5c9
@end
