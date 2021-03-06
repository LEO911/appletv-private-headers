/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library

@class NSInputStream, NSOutputStream, NSString, EAAccessory;

@interface EASession : NSObject {
@private
	EAAccessory *_accessory;	// 4 = 0x4
	unsigned _sessionID;	// 8 = 0x8
	NSString *_protocolString;	// 12 = 0xc
	NSInputStream *_inputStream;	// 16 = 0x10
	NSOutputStream *_outputStream;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) EAAccessory *accessory;	// G=0x32e644b9; @synthesize=_accessory
@property(readonly, assign, nonatomic) NSInputStream *inputStream;	// G=0x32e64499; @synthesize=_inputStream
@property(readonly, assign, nonatomic) NSOutputStream *outputStream;	// G=0x32e64489; @synthesize=_outputStream
@property(readonly, assign, nonatomic) NSString *protocolString;	// G=0x32e644a9; @synthesize=_protocolString
- (id)init;	// 0x32e644c9
- (id)initWithAccessory:(id)accessory forProtocol:(id)protocol;	// 0x32e645f5
- (unsigned)_sessionID;	// 0x32e64479
- (id)_shortDescription;	// 0x32e644f9
// declared property getter: - (id)accessory;	// 0x32e644b9
- (void)dealloc;	// 0x32e6478d
- (id)description;	// 0x32e6454d
// declared property getter: - (id)inputStream;	// 0x32e64499
// declared property getter: - (id)outputStream;	// 0x32e64489
// declared property getter: - (id)protocolString;	// 0x32e644a9
@end

