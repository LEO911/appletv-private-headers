/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>


@interface PTPEventPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _eventCode;	// 8 = 0x8
	unsigned long _transactionID;	// 12 = 0xc
	unsigned long _parameters[3];	// 16 = 0x10
}
@property(assign) unsigned short eventCode;	// G=0x31292b51; S=0x31292b61; converted property
@property(assign) unsigned long parameter1;	// G=0x31292b91; S=0x31292ba1; converted property
@property(assign) unsigned long parameter2;	// G=0x31292bb1; S=0x31292bc5; converted property
@property(assign) unsigned long parameter3;	// G=0x31292bd9; S=0x31292bed; converted property
@property(assign) unsigned long transactionID;	// G=0x31292b71; S=0x31292b81; converted property
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId;	// 0x31292459
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x312924b9
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x31292529
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x312925a1
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x31292625
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x312926f5
- (id)contentForTCP;	// 0x312927c5
- (id)contentForUSB;	// 0x312928ad
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x31292995
- (id)description;	// 0x31292a75
// converted property getter: - (unsigned short)eventCode;	// 0x31292b51
// converted property getter: - (unsigned long)parameter1;	// 0x31292b91
// converted property getter: - (unsigned long)parameter2;	// 0x31292bb1
// converted property getter: - (unsigned long)parameter3;	// 0x31292bd9
// converted property setter: - (void)setEventCode:(unsigned short)code;	// 0x31292b61
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x31292ba1
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x31292bc5
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x31292bed
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x31292b81
// converted property getter: - (unsigned long)transactionID;	// 0x31292b71
@end

