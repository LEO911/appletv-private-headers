/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAudioMixInputParameters.h"

@class AVMutableAudioMixInputParametersInternal;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
	AVMutableAudioMixInputParametersInternal *_mutableInputParameters;	// 8 = 0x8
}
@property(retain, nonatomic) opaqueMTAudioProcessingTap *audioTapProcessor;	// G=0x302b5e79; S=0x302b5ea5; 
@property(assign, nonatomic) int trackID;	// G=0x302b5e21; S=0x302b5e4d; 
+ (id)audioMixInputParameters;	// 0x302b5ddd
+ (id)audioMixInputParametersWithTrack:(id)track;	// 0x302b5d6d
// declared property getter: - (opaqueMTAudioProcessingTap *)audioTapProcessor;	// 0x302b5e79
// declared property setter: - (void)setAudioTapProcessor:(opaqueMTAudioProcessingTap *)processor;	// 0x302b5ea5
// declared property setter: - (void)setTrackID:(int)anId;	// 0x302b5e4d
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x302b5f51
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x302b5ed1
// declared property getter: - (int)trackID;	// 0x302b5e21
@end

