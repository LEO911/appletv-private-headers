/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString, NSArray;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *data;	// G=0x353c1b0d; S=0x353c1b29; 
@property(assign, nonatomic) int packetNumber;	// G=0x353c1b79; S=0x353c1be9; 
@property(copy, nonatomic) NSArray *packets;	// G=0x353c1c2d; S=0x353c1c49; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)speechPacket;	// 0x353c1a7d
+ (id)speechPacketWithDictionary:(id)dictionary context:(id)context;	// 0x353c1ac1
// declared property getter: - (id)data;	// 0x353c1b0d
- (id)encodedClassName;	// 0x353c1a71
- (id)groupIdentifier;	// 0x353c1a61
// declared property getter: - (int)packetNumber;	// 0x353c1b79
// declared property getter: - (id)packets;	// 0x353c1c2d
// declared property setter: - (void)setData:(id)data;	// 0x353c1b29
// declared property setter: - (void)setPacketNumber:(int)number;	// 0x353c1be9
// declared property setter: - (void)setPackets:(id)packets;	// 0x353c1c49
@end

