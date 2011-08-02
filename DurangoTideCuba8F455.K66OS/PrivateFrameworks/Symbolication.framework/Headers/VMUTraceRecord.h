/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library


@interface VMUTraceRecord : NSObject {
	unsigned seqnum;	// 4 = 0x4
	unsigned type;	// 8 = 0x8
	unsigned address;	// 12 = 0xc
	unsigned argument;	// 16 = 0x10
	unsigned depth;	// 20 = 0x14
	unsigned *frames;	// 24 = 0x18
}
@property(readonly, assign) unsigned address;	// G=0x3413dba9; converted property
@property(readonly, assign) unsigned argument;	// G=0x3413dbb9; converted property
@property(readonly, assign) unsigned depth;	// G=0x3413dbc9; converted property
@property(readonly, assign) unsigned *frames;	// G=0x3413dbd9; converted property
@property(readonly, assign) unsigned seqnum;	// G=0x3413db65; converted property
@property(readonly, assign) unsigned type;	// G=0x3413db99; converted property
- (id)initWithBacktrace:(id)backtrace forTask:(unsigned)task;	// 0x3413e089
- (id)initWithLoggingRecord:(XXStruct_qFPbxC *)loggingRecord forTask:(unsigned)task;	// 0x3413db61
- (id)initWithTraceRecord:(id)traceRecord;	// 0x3413e069
- (id)initWithTraceRecord:(id)traceRecord withDepth:(unsigned)depth;	// 0x3413e175
// converted property getter: - (unsigned)address;	// 0x3413dba9
// converted property getter: - (unsigned)argument;	// 0x3413dbb9
// converted property getter: - (unsigned)depth;	// 0x3413dbc9
// converted property getter: - (unsigned *)frames;	// 0x3413dbd9
// converted property getter: - (unsigned)seqnum;	// 0x3413db65
- (unsigned)threadID;	// 0x3413db75
// converted property getter: - (unsigned)type;	// 0x3413db99
@end
