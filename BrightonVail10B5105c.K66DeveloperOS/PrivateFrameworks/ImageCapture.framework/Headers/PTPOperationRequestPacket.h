/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationRequestPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned long _dataPhaseInfo;	// 8 = 0x8
	unsigned short _operationCode;	// 12 = 0xc
	unsigned long _transactionID;	// 16 = 0x10
	unsigned long _parameters[5];	// 20 = 0x14
}
@property(assign) unsigned long dataPhaseInfo;	// G=0x35af7d9d; S=0x35af7dad; converted property
@property(readonly, assign) int numParameters;	// G=0x35af7dbd; converted property
@property(assign) unsigned short operationCode;	// G=0x35af7d5d; S=0x35af7d6d; converted property
@property(assign) unsigned long parameter1;	// G=0x35af7e05; S=0x35af7e15; converted property
@property(assign) unsigned long parameter2;	// G=0x35af7e25; S=0x35af7e39; converted property
@property(assign) unsigned long parameter3;	// G=0x35af7e4d; S=0x35af7e61; converted property
@property(assign) unsigned long parameter4;	// G=0x35af7e75; S=0x35af7e89; converted property
@property(assign) unsigned long parameter5;	// G=0x35af7e9d; S=0x35af7eb1; converted property
@property(assign) unsigned long transactionID;	// G=0x35af7d7d; S=0x35af7d8d; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info;	// 0x35af74a5
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info numParameters:(unsigned long)parameters parameters:(unsigned *)parameters5;	// 0x35af7411
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1;	// 0x35af7515
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x35af7599
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x35af7625
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x35af76bd
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x35af7755
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x35af77fd
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x35af78e5
- (id)contentForTCP;	// 0x35af79c5
- (id)contentForUSB;	// 0x35af7abd
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x35af7ba1
// converted property getter: - (unsigned long)dataPhaseInfo;	// 0x35af7d9d
- (id)description;	// 0x35af7c81
// converted property getter: - (int)numParameters;	// 0x35af7dbd
// converted property getter: - (unsigned short)operationCode;	// 0x35af7d5d
// converted property getter: - (unsigned long)parameter1;	// 0x35af7e05
// converted property getter: - (unsigned long)parameter2;	// 0x35af7e25
// converted property getter: - (unsigned long)parameter3;	// 0x35af7e4d
// converted property getter: - (unsigned long)parameter4;	// 0x35af7e75
// converted property getter: - (unsigned long)parameter5;	// 0x35af7e9d
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x35af7dcd
// converted property setter: - (void)setDataPhaseInfo:(unsigned long)info;	// 0x35af7dad
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x35af7d6d
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x35af7e15
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x35af7e39
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x35af7e61
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x35af7e89
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x35af7eb1
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x35af7de9
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x35af7d8d
// converted property getter: - (unsigned long)transactionID;	// 0x35af7d7d
@end

