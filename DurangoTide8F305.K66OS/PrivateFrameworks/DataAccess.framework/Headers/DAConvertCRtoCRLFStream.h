/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSInputStream.h> // Unknown library

@class NSData;

@interface DAConvertCRtoCRLFStream : NSInputStream {
	NSData *_mimeData;	// 4 = 0x4
	NSData *_preflightData;	// 8 = 0x8
	NSData *_postflightData;	// 12 = 0xc
	unsigned _totalLength;	// 16 = 0x10
	unsigned _readOffset;	// 20 = 0x14
	BOOL _lastByteCopiedWasCR;	// 24 = 0x18
	BOOL _openEventSent;	// 25 = 0x19
	unsigned _streamStatus;	// 28 = 0x1c
	BOOL _intendToStream;	// 32 = 0x20
	id _delegate;	// 36 = 0x24
	CFRunLoopSourceRef _rls;	// 40 = 0x28
	/*function-pointer*/ void *_clientCallback;	// 44 = 0x2c
	XXStruct_4pnlqD _clientContext;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x30233181; S=0x30233191; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x302331a1; converted property
- (id)initWithData:(id)data;	// 0x302331d9
- (id)initWithMIMEData:(id)mimedata preflightData:(id)data postflightData:(id)data3 intendToStream:(BOOL)stream;	// 0x30233571
- (void)_scheduleCallback;	// 0x3023343d
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x30233455
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_4pnlqD *)context;	// 0x302336f9
- (void)_streamEventTrigger;	// 0x30233291
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3023352d
- (void)close;	// 0x30233549
- (void)dealloc;	// 0x3023365d
// converted property getter: - (id)delegate;	// 0x30233181
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x302331d5
- (BOOL)hasBytesAvailable;	// 0x302331b1
- (void)open;	// 0x302331f9
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x30233769
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3023321d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3023324d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30233191
// converted property getter: - (unsigned)streamStatus;	// 0x302331a1
@end

