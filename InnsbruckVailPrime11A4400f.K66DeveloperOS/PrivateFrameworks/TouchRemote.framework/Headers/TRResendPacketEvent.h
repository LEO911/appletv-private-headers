/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "TRPacketEvent.h"

@class NSArray;

@interface TRResendPacketEvent : TRPacketEvent {
	NSArray *_resendPacketEventClasses;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *resendPacketEventClasses;	// G=0x32c193f1; @synthesize=_resendPacketEventClasses
+ (unsigned)_packetEventType;	// 0x32c1919d
- (id)initWithResendPacketEventClasses:(id)resendPacketEventClasses;	// 0x32c18edd
- (void).cxx_destruct;	// 0x32c19401
- (id)_initWithVersion:(unsigned)version payloadDictionary:(id)dictionary;	// 0x32c191a9
- (id)description;	// 0x32c19105
// declared property getter: - (id)resendPacketEventClasses;	// 0x32c193f1
@end

