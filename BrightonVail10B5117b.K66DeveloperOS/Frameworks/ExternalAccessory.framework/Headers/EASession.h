/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library

@class NSString, NSInputStream, EAAccessory, NSOutputStream;

@interface EASession : NSObject {
@private
	EAAccessory *_accessory;	// 4 = 0x4
@protected
	unsigned _sessionID;	// 8 = 0x8
	NSString *_protocolString;	// 12 = 0xc
	NSInputStream *_inputStream;	// 16 = 0x10
@private
	NSOutputStream *_outputStream;	// 20 = 0x14
@protected
	BOOL _openCompleted;	// 24 = 0x18
	int _sock;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) EAAccessory *accessory;	// G=0x3193fe7d; @synthesize=_accessory
@property(readonly, assign, nonatomic) NSInputStream *inputStream;	// G=0x3193fe9d; @synthesize=_inputStream
@property(assign, getter=isOpenCompleted) BOOL openCompleted;	// G=0x3193fddd; S=0x3193fded; converted property
@property(readonly, assign, nonatomic) NSOutputStream *outputStream;	// G=0x3193fead; @synthesize=_outputStream
@property(readonly, assign, nonatomic) NSString *protocolString;	// G=0x3193fe8d; @synthesize=_protocolString
- (id)init;	// 0x3193f7ad
- (id)initWithAccessory:(id)accessory forProtocol:(id)protocol;	// 0x3193f7e5
- (void)_endStreams;	// 0x3193fd9d
- (unsigned)_sessionID;	// 0x3193fd21
- (id)_shortDescription;	// 0x3193fcc9
- (void)_streamClosed;	// 0x3193fd31
// declared property getter: - (id)accessory;	// 0x3193fe7d
- (void)dealloc;	// 0x3193fb01
- (id)description;	// 0x3193fc19
// declared property getter: - (id)inputStream;	// 0x3193fe9d
// converted property getter: - (BOOL)isOpenCompleted;	// 0x3193fddd
// declared property getter: - (id)outputStream;	// 0x3193fead
// declared property getter: - (id)protocolString;	// 0x3193fe8d
// converted property setter: - (void)setOpenCompleted:(BOOL)completed;	// 0x3193fded
@end

