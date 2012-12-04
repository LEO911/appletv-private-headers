/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PTPEndDataPacket : NSObject {
	unsigned short _operationCode;	// 4 = 0x4
	unsigned long _transactionID;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
}
@property(retain) NSData *data;	// G=0x343f0e15; S=0x343f0e25; converted property
@property(assign) unsigned short operationCode;	// G=0x343f0dd5; S=0x343f0de5; converted property
@property(assign) unsigned long transactionID;	// G=0x343f0df5; S=0x343f0e05; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x343f0825
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x343f0899
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x343f0949
- (id)contentForTCP;	// 0x343f0a4d
- (id)contentForUSB;	// 0x343f0b31
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x343f0c29
// converted property getter: - (id)data;	// 0x343f0e15
- (void)dealloc;	// 0x343f0a01
- (id)description;	// 0x343f0d1d
// converted property getter: - (unsigned short)operationCode;	// 0x343f0dd5
// converted property setter: - (void)setData:(id)data;	// 0x343f0e25
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x343f0de5
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x343f0e05
// converted property getter: - (unsigned long)transactionID;	// 0x343f0df5
@end
