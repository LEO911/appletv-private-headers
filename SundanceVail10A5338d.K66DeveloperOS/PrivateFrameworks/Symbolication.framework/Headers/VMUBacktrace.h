/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"


@interface VMUBacktrace : NSObject <NSCopying> {
	int _flavor;	// 4 = 0x4
	struct {
		struct {
			double t_begin;
			double t_end;
			int pid;
			unsigned thread;
			int run_state;
			unsigned long long dispatch_queue_serial_num;
		} context;
		unsigned long long *frames;
		char *frame_types;
		unsigned length;
	} _callstack;	// 8 = 0x8
}
@property(assign) int threadState;	// G=0x34ca9501; S=0x34ca94ed; converted property
- (id)initWithSamplingContext:(sampling_context_t *)samplingContext thread:(unsigned)thread;	// 0x34ca8bb9
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit;	// 0x34ca8ca1
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit taskMemoryCache:(id)cache;	// 0x34ca8db5
- (id).cxx_construct;	// 0x34ca9529
- (CSTypeRef)_symbolicator;	// 0x34ca8afd
- (unsigned long long *)backtrace;	// 0x34ca94b1
- (unsigned)backtraceLength;	// 0x34ca94c5
- (id)copyWithZone:(NSZone *)zone;	// 0x34ca8fa5
- (void)dealloc;	// 0x34ca90a9
- (id)description;	// 0x34ca90f9
- (unsigned long long)dispatchQueueSerialNumber;	// 0x34ca9515
- (void)fixupStackWithSamplingContext:(sampling_context_t *)samplingContext symbolicator:(CSTypeRef)symbolicator;	// 0x34ca935d
- (void)fixupStackWithTask:(unsigned)task symbolicator:(CSTypeRef)symbolicator taskMemoryCache:(id)cache;	// 0x34ca931d
- (BOOL)hasSameCallstack:(id)callstack;	// 0x34ca93a5
- (void)removeTopmostFrame;	// 0x34ca9439
- (void)setEndTime:(double)time;	// 0x34ca947d
- (void)setLengthTime:(double)time;	// 0x34ca9491
- (void)setStartTime:(double)time;	// 0x34ca9469
// converted property setter: - (void)setThreadState:(int)state;	// 0x34ca94ed
- (unsigned)thread;	// 0x34ca94d9
// converted property getter: - (int)threadState;	// 0x34ca9501
- (unsigned long long)topmostFrame;	// 0x34ca9421
@end
