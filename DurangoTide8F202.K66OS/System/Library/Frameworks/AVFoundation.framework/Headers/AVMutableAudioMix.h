/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAudioMix.h"

@class NSArray, AVMutableAudioMixInternal;

@interface AVMutableAudioMix : AVAudioMix {
@private
	AVMutableAudioMixInternal *_mutableAudioMix;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *inputParameters;	// G=0x30415f39; S=0x30415f0d; 
+ (id)audioMix;	// 0x30416161
// declared property getter: - (id)inputParameters;	// 0x30415f39
// declared property setter: - (void)setInputParameters:(id)parameters;	// 0x30415f0d
@end
