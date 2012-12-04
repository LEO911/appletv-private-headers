/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVAudioBuffer : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) int bytesCapacity;	// G=0x3033b82d; 
@property(assign) int bytesDataSize;	// G=0x3033b841; S=0x3033b855; 
@property(readonly, assign) int channels;	// G=0x3033b819; 
@property(readonly, assign) void *data;	// G=0x3033b871; 
@property(readonly, assign) int packetDescriptionCapacity;	// G=0x3033b885; 
@property(readonly, assign) int packetDescriptionCount;	// G=0x3033b899; 
@property(readonly, assign) AudioStreamPacketDescription *packetDescriptions;	// G=0x3033b8ad; 
- (id)initWithAudioQueueBuffer:(MyAudioQueueBuffer *)audioQueueBuffer channels:(int)channels;	// 0x3033b9c5
// declared property getter: - (int)bytesCapacity;	// 0x3033b82d
// declared property getter: - (int)bytesDataSize;	// 0x3033b841
// declared property getter: - (int)channels;	// 0x3033b819
// declared property getter: - (void *)data;	// 0x3033b871
- (void)dealloc;	// 0x3033b96d
- (void)finalize;	// 0x3033b8f5
// declared property getter: - (int)packetDescriptionCapacity;	// 0x3033b885
// declared property getter: - (int)packetDescriptionCount;	// 0x3033b899
// declared property getter: - (AudioStreamPacketDescription *)packetDescriptions;	// 0x3033b8ad
// declared property setter: - (void)setBytesDataSize:(int)size;	// 0x3033b855
- (void)setPacketDescriptions:(const AudioStreamPacketDescription *)descriptions count:(int)count;	// 0x3033b8c1
@end
