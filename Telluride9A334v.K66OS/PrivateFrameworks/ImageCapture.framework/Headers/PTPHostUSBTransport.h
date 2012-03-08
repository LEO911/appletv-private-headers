/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "PTPTransport.h"

@class NSString, NSMutableData;

@interface PTPHostUSBTransport : PTPTransport {
	unsigned _locationID;	// 196 = 0xc4
	unsigned short _vendorID;	// 200 = 0xc8
	unsigned short _productID;	// 202 = 0xca
	NSString *_usbSerialNumberString;	// 204 = 0xcc
	IOUSBInterfaceStruct300Ref *_interfaceInterfaceRef;	// 208 = 0xd0
	unsigned char _bulkPipeIn;	// 212 = 0xd4
	unsigned char _bulkPipeOut;	// 213 = 0xd5
	unsigned char _interruptPipeIn;	// 214 = 0xd6
	unsigned _readBufferSize;	// 216 = 0xd8
	unsigned _writeBufferSize;	// 220 = 0xdc
	unsigned _eventDataBufferSize;	// 224 = 0xe0
	char *_readBuffer;	// 228 = 0xe4
	char *_writeBuffer;	// 232 = 0xe8
	char *_eventDataBuffer;	// 236 = 0xec
	NSMutableData *_eventData;	// 240 = 0xf0
	int _maxPacketSizeBulkIn;	// 244 = 0xf4
	int _maxPacketSizeBulkOut;	// 248 = 0xf8
	int _maxPacketSizeInterruptIn;	// 252 = 0xfc
	CFRunLoopSourceRef _CFRunLoopSource;	// 256 = 0x100
	BOOL _connected;	// 260 = 0x104
}
@property(assign) BOOL connected;	// G=0x32254f65; S=0x32256ec1; converted property
@property(readonly, assign) unsigned short productID;	// G=0x32254f45; converted property
@property(readonly, retain) NSString *usbSerialNumberString;	// G=0x32254f55; converted property
@property(readonly, assign) unsigned short vendorID;	// G=0x32254f35; converted property
- (id)initWithLocationID:(unsigned long)locationID delegate:(id)delegate;	// 0x32255441
- (void)abortPendingIO;	// 0x32255579
- (unsigned short)cancelRequest:(id)request;	// 0x322565a1
- (void)cancelTransaction:(id)transaction;	// 0x32255415
- (void)clearBulkInPipeStall;	// 0x3225561d
- (void)clearPipeStall:(unsigned char)stall;	// 0x32254f7d
// converted property getter: - (BOOL)connected;	// 0x32254f65
- (void)dealloc;	// 0x32257809
- (id)description;	// 0x32255001
- (void)deviceReset;	// 0x32256451
- (unsigned short)deviceStatus;	// 0x32256785
- (void)dumpData:(void *)data length:(int)length comment:(id)comment;	// 0x32255c35
- (BOOL)handleBulkData:(unsigned long)data result:(int)result;	// 0x32255841
- (void)handleInterruptData:(unsigned long)data;	// 0x32255691
- (unsigned long)locationID;	// 0x32254f25
// converted property getter: - (unsigned short)productID;	// 0x32254f45
- (int)readBulkDataWithTimeout:(unsigned long)timeout;	// 0x322560b5
- (int)readInterruptData;	// 0x32255f65
- (BOOL)sendCancel:(id)cancel;	// 0x32254f75
- (void)sendData:(id)data;	// 0x32256941
- (void)sendDataPackets:(id)packets;	// 0x32256aa5
- (BOOL)sendEvent:(id)event;	// 0x32254f79
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x32255049
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x32255225
// converted property setter: - (void)setConnected:(BOOL)connected;	// 0x32256ec1
- (BOOL)startInitiator;	// 0x32257149
- (void)stop;	// 0x32256fb1
// converted property getter: - (id)usbSerialNumberString;	// 0x32254f55
// converted property getter: - (unsigned short)vendorID;	// 0x32254f35
- (BOOL)writeBulkData:(id)data;	// 0x322562b5
@end
