/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "APSMessage.h"


@interface APSOutgoingMessage : APSMessage {
}
@property(assign, nonatomic, getter=isCritical) BOOL critical;	// G=0x33c7a385; S=0x33c7a3b5; 
@property(assign) unsigned messageID;	// G=0x33c7a25d; S=0x33c7a291; converted property
@property(assign, nonatomic) int payloadFormat;	// G=0x33c7a555; S=0x33c7a589; 
@property(assign, nonatomic) unsigned payloadLength;	// G=0x33c7a5cd; S=0x33c7a601; 
@property(assign, nonatomic) unsigned timeout;	// G=0x33c7a30d; S=0x33c7a341; 
@property(retain) id timestamp;	// G=0x33c7a2d5; S=0x33c7a2f1; converted property
- (BOOL)hasTimedOut;	// 0x33c7a4e1
// declared property getter: - (BOOL)isCritical;	// 0x33c7a385
// converted property getter: - (unsigned)messageID;	// 0x33c7a25d
// declared property getter: - (int)payloadFormat;	// 0x33c7a555
// declared property getter: - (unsigned)payloadLength;	// 0x33c7a5cd
- (void)setCancelled:(BOOL)cancelled;	// 0x33c7a49d
// declared property setter: - (void)setCritical:(BOOL)critical;	// 0x33c7a3b5
// converted property setter: - (void)setMessageID:(unsigned)anId;	// 0x33c7a291
// declared property setter: - (void)setPayloadFormat:(int)format;	// 0x33c7a589
// declared property setter: - (void)setPayloadLength:(unsigned)length;	// 0x33c7a601
- (void)setSent:(BOOL)sent;	// 0x33c7a429
- (void)setTimedOut:(BOOL)anOut;	// 0x33c7a511
// declared property setter: - (void)setTimeout:(unsigned)timeout;	// 0x33c7a341
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x33c7a2f1
// declared property getter: - (unsigned)timeout;	// 0x33c7a30d
// converted property getter: - (id)timestamp;	// 0x33c7a2d5
- (BOOL)wasCancelled;	// 0x33c7a46d
- (BOOL)wasSent;	// 0x33c7a3f9
@end
