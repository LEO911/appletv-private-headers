/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "APSMessage.h"


@interface APSOutgoingMessage : APSMessage {
}
@property(assign, nonatomic, getter=isCritical) BOOL critical;	// G=0x33494385; S=0x334943b5; 
@property(assign) unsigned messageID;	// G=0x3349425d; S=0x33494291; converted property
@property(assign, nonatomic) int payloadFormat;	// G=0x33494555; S=0x33494589; 
@property(assign, nonatomic) unsigned payloadLength;	// G=0x334945cd; S=0x33494601; 
@property(assign, nonatomic) unsigned timeout;	// G=0x3349430d; S=0x33494341; 
@property(retain) id timestamp;	// G=0x334942d5; S=0x334942f1; converted property
- (BOOL)hasTimedOut;	// 0x334944e1
// declared property getter: - (BOOL)isCritical;	// 0x33494385
// converted property getter: - (unsigned)messageID;	// 0x3349425d
// declared property getter: - (int)payloadFormat;	// 0x33494555
// declared property getter: - (unsigned)payloadLength;	// 0x334945cd
- (void)setCancelled:(BOOL)cancelled;	// 0x3349449d
// declared property setter: - (void)setCritical:(BOOL)critical;	// 0x334943b5
// converted property setter: - (void)setMessageID:(unsigned)anId;	// 0x33494291
// declared property setter: - (void)setPayloadFormat:(int)format;	// 0x33494589
// declared property setter: - (void)setPayloadLength:(unsigned)length;	// 0x33494601
- (void)setSent:(BOOL)sent;	// 0x33494429
- (void)setTimedOut:(BOOL)anOut;	// 0x33494511
// declared property setter: - (void)setTimeout:(unsigned)timeout;	// 0x33494341
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x334942f1
// declared property getter: - (unsigned)timeout;	// 0x3349430d
// converted property getter: - (id)timestamp;	// 0x334942d5
- (BOOL)wasCancelled;	// 0x3349446d
- (BOOL)wasSent;	// 0x334943f9
@end
