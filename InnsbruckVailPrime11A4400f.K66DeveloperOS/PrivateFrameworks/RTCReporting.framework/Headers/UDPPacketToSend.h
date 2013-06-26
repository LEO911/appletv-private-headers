/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

#import </libobjc.A.h>

@class NSData;

@interface UDPPacketToSend : NSObject {
	int _state;	// 4 = 0x4
	int _numberOfChecks;	// 8 = 0x8
	int _numberOfRetransmits;	// 12 = 0xc
	unsigned short _eventNumber;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(retain) NSData *data;	// G=0x32632191; S=0x326321a5; @synthesize=_data
@property(assign) unsigned short eventNumber;	// G=0x32632161; S=0x32632179; @synthesize=_eventNumber
@property(assign) int numberOfChecks;	// G=0x32632109; S=0x3263211d; @synthesize=_numberOfChecks
@property(assign) int numberOfRetransmits;	// G=0x32632135; S=0x32632149; @synthesize=_numberOfRetransmits
@property(assign) int state;	// G=0x326320dd; S=0x326320f1; @synthesize=_state
- (id)initWithBytes:(char *)bytes length:(unsigned short)length eventNum:(unsigned short)num;	// 0x3263200d
// declared property getter: - (id)data;	// 0x32632191
- (void)dealloc;	// 0x32632091
// declared property getter: - (unsigned short)eventNumber;	// 0x32632161
// declared property getter: - (int)numberOfChecks;	// 0x32632109
// declared property getter: - (int)numberOfRetransmits;	// 0x32632135
// declared property setter: - (void)setData:(id)data;	// 0x326321a5
// declared property setter: - (void)setEventNumber:(unsigned short)number;	// 0x32632179
// declared property setter: - (void)setNumberOfChecks:(int)checks;	// 0x3263211d
// declared property setter: - (void)setNumberOfRetransmits:(int)retransmits;	// 0x32632149
// declared property setter: - (void)setState:(int)state;	// 0x326320f1
// declared property getter: - (int)state;	// 0x326320dd
@end
