/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import </libobjc.A.h>
#import "NSStreamDelegate.h"

@class NSString, NSMutableData, NSInputStream, NSOutputStream, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {
	NSString *_remoteServiceName;	// 4 = 0x4
	NSString *_localServiceName;	// 8 = 0x8
	BOOL _connected;	// 12 = 0xc
	NSMutableData *_dataReceived;	// 16 = 0x10
	NSInputStream *_inputStream;	// 20 = 0x14
	NSOutputStream *_outputStream;	// 24 = 0x18
	BOOL _shouldSendHello;	// 28 = 0x1c
	BOOL _readyToWrite;	// 29 = 0x1d
	NSMutableData *_dataToSend;	// 32 = 0x20
	unsigned _currentSequenceNumber;	// 36 = 0x24
	NSMutableData *_dataToSendHoldingQueue;	// 40 = 0x28
	NSMutableArray *_receivedDataHoldingQueue;	// 44 = 0x2c
	NSMutableArray *_messageReceiptHandlerList;	// 48 = 0x30
	NSMutableArray *_messageReceiptHandlerHoldingQueue;	// 52 = 0x34
	id _receiveDataHandler;	// 56 = 0x38
	id _connectedHandler;	// 60 = 0x3c
	NSObject<OS_dispatch_queue> *_syncQueue;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_targetQueue;	// 68 = 0x44
}
@property(copy, nonatomic) id connectedHandler;	// G=0x2e8720a9; S=0x2e8720bd; @synthesize=_connectedHandler
@property(retain, nonatomic) NSInputStream *inputStream;	// G=0x2e8720f1; S=0x2e872101; @synthesize=_inputStream
@property(copy, nonatomic) NSString *localServiceName;	// G=0x2e872065; S=0x2e872079; @synthesize=_localServiceName
@property(retain, nonatomic) NSOutputStream *outputStream;	// G=0x2e872111; S=0x2e872121; @synthesize=_outputStream
@property(copy, nonatomic) id receiveDataHandler;	// G=0x2e8720cd; S=0x2e8720e1; @synthesize=_receiveDataHandler
@property(copy, nonatomic) NSString *remoteServiceName;	// G=0x2e872041; S=0x2e872055; @synthesize=_remoteServiceName
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;	// G=0x2e872089; S=0x2e86cc0d; @synthesize=_syncQueue
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;	// G=0x2e872099; S=0x2e86cc39; @synthesize=_targetQueue
+ (void)checkConstants;	// 0x2e8713f1
+ (unsigned)receiveDataLimit;	// 0x2e871585
+ (unsigned)sendDataLimit;	// 0x2e8714a5
- (id)initWithLocalServiceName:(id)localServiceName;	// 0x2e86cab1
- (void)attachInputStream:(id)stream outputStream:(id)stream2;	// 0x2e86d079
- (void)connectToNetService:(id)netService;	// 0x2e86cdb1
// declared property getter: - (id)connectedHandler;	// 0x2e8720a9
- (void)dealloc;	// 0x2e870f35
// declared property getter: - (id)inputStream;	// 0x2e8720f1
- (void)invalidate;	// 0x2e870e4d
// declared property getter: - (id)localServiceName;	// 0x2e872065
// declared property getter: - (id)outputStream;	// 0x2e872111
// declared property getter: - (id)receiveDataHandler;	// 0x2e8720cd
// declared property getter: - (id)remoteServiceName;	// 0x2e872041
- (void)sendData:(id)data withCompletionHandler:(id)completionHandler;	// 0x2e871159
// declared property setter: - (void)setConnectedHandler:(id)handler;	// 0x2e8720bd
// declared property setter: - (void)setInputStream:(id)stream;	// 0x2e872101
// declared property setter: - (void)setLocalServiceName:(id)name;	// 0x2e872079
// declared property setter: - (void)setOutputStream:(id)stream;	// 0x2e872121
// declared property setter: - (void)setReceiveDataHandler:(id)handler;	// 0x2e8720e1
// declared property setter: - (void)setRemoteServiceName:(id)name;	// 0x2e872055
// declared property setter: - (void)setSyncQueue:(id)queue;	// 0x2e86cc0d
// declared property setter: - (void)setTargetQueue:(id)queue;	// 0x2e86cc39
- (void)setupInputStream:(id)stream outputStream:(id)stream2;	// 0x2e86ccb5
- (BOOL)shouldDecideAboutConnection;	// 0x2e86d30d
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x2e871e15
- (id)stringForStreamEventCode:(unsigned)streamEventCode;	// 0x2e871665
- (void)syncAcceptedConnection;	// 0x2e86e3f9
- (void)syncAppendDataToSend:(id)send;	// 0x2e86cc65
- (void)syncCloseConnectionNow;	// 0x2e870749
- (void)syncHandleInputStreamEvent:(unsigned)event;	// 0x2e87185d
- (void)syncHandleOutputStreamEvent:(unsigned)event;	// 0x2e871b39
- (void)syncProcessMessage:(int)message data:(id)data sequenceNumber:(unsigned)number;	// 0x2e86e899
// declared property getter: - (id)syncQueue;	// 0x2e872089
- (void)syncReadFromInputStream;	// 0x2e8716e9
- (void)syncReceivedData:(id)data error:(id)error;	// 0x2e86fb05
- (void)syncSendAccept;	// 0x2e86e3d5
- (void)syncSendData;	// 0x2e86d72d
- (void)syncSendHello;	// 0x2e86e1c9
- (void)syncSendMessage:(int)message data:(id)data withCompletionHandler:(id)completionHandler;	// 0x2e86d91d
- (void)syncSendMessageReceipt:(int)receipt sequenceNumber:(unsigned)number;	// 0x2e86e6b5
// declared property getter: - (id)targetQueue;	// 0x2e872099
@end

