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
@property(readonly, assign) int bytesCapacity;	// G=0x326e4bbd; 
@property(assign) int bytesDataSize;	// G=0x326e4bd1; S=0x326e4be5; 
@property(readonly, assign) int channels;	// G=0x326e4ba9; 
@property(readonly, assign) void *data;	// G=0x326e4c01; 
@property(readonly, assign) int packetDescriptionCapacity;	// G=0x326e4c15; 
@property(readonly, assign) int packetDescriptionCount;	// G=0x326e4c29; 
@property(readonly, assign) AudioStreamPacketDescription *packetDescriptions;	// G=0x326e4c3d; 
- (id)initWithAudioQueueBuffer:(MyAudioQueueBuffer *)audioQueueBuffer channels:(int)channels;	// 0x326e4ea9
// declared property getter: - (int)bytesCapacity;	// 0x326e4bbd
// declared property getter: - (int)bytesDataSize;	// 0x326e4bd1
// declared property getter: - (int)channels;	// 0x326e4ba9
// declared property getter: - (void *)data;	// 0x326e4c01
- (void)dealloc;	// 0x326e4dbd
- (void)finalize;	// 0x326e4c85
// declared property getter: - (int)packetDescriptionCapacity;	// 0x326e4c15
// declared property getter: - (int)packetDescriptionCount;	// 0x326e4c29
// declared property getter: - (AudioStreamPacketDescription *)packetDescriptions;	// 0x326e4c3d
// declared property setter: - (void)setBytesDataSize:(int)size;	// 0x326e4be5
- (void)setPacketDescriptions:(const AudioStreamPacketDescription *)descriptions count:(int)count;	// 0x326e4c51
@end
