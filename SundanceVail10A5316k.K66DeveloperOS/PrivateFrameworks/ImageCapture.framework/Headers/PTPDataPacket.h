/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString;

@interface PTPDataPacket : NSObject {
	unsigned short _operationCode;	// 4 = 0x4
	unsigned long _transactionID;	// 8 = 0x8
	id _data;	// 12 = 0xc
	NSString *_filepath;	// 16 = 0x10
	int _fd;	// 20 = 0x14
	long long _bufferSize;	// 24 = 0x18
	long long _offsetInBuffer;	// 32 = 0x20
	PTPRange _range;	// 40 = 0x28
	long long _bytesTransferred;	// 56 = 0x38
}
@property(readonly, assign) long long bufferSize;	// G=0x328c09c9; converted property
@property(assign) long long bytesTransferred;	// G=0x328c0ad5; S=0x328c0aed; converted property
@property(retain) id data;	// G=0x328c090d; S=0x328c091d; converted property
@property(readonly, retain) NSString *filepath;	// G=0x328bff31; converted property
@property(readonly, assign) long long offsetInBuffer;	// G=0x328c09e1; converted property
@property(assign) unsigned short operationCode;	// G=0x328c08cd; S=0x328c08dd; converted property
@property(readonly, assign) PTPRange range;	// G=0x328c09f9; converted property
@property(assign) unsigned long transactionID;	// G=0x328c08ed; S=0x328c08fd; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x328bff41
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andFilepath:(id)filepath;	// 0x328c0009
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x328c013d
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x328c0241
// converted property getter: - (long long)bufferSize;	// 0x328c09c9
// converted property getter: - (long long)bytesTransferred;	// 0x328c0ad5
- (id)contentForTCP;	// 0x328c03c5
- (id)contentForUSB;	// 0x328c0509
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x328c0661
- (long long)copyDataToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport fromOffset:(unsigned long long)offset;	// 0x328c0e89
- (long long)copyFromBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x328c1089
- (long long)copyHeaderToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x328c0f15
- (long long)copyToBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x328c0b01
- (long long)copyToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x328c0c41
// converted property getter: - (id)data;	// 0x328c090d
- (void)dealloc;	// 0x328c034d
- (id)description;	// 0x328c07d1
// converted property getter: - (id)filepath;	// 0x328bff31
// converted property getter: - (long long)offsetInBuffer;	// 0x328c09e1
// converted property getter: - (unsigned short)operationCode;	// 0x328c08cd
// converted property getter: - (PTPRange)range;	// 0x328c09f9
// converted property setter: - (void)setBytesTransferred:(long long)transferred;	// 0x328c0aed
// converted property setter: - (void)setData:(id)data;	// 0x328c091d
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x328c08dd
- (int)setRange:(PTPRange)range;	// 0x328c0a1d
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x328c08fd
// converted property getter: - (unsigned long)transactionID;	// 0x328c08ed
@end
