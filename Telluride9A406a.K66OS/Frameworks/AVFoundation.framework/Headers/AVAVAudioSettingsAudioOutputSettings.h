/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVReencodedAudioSettingsForFig.h"
#import "AVDecodedAudioSettingsForFig.h"
#import "AVAudioOutputSettings.h"


@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig> {
@private
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
}
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x30ec81b1
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x30ec8201
- (id)initWithAVAudioSettingsDictionary:(id)avaudioSettingsDictionary exceptionReason:(id *)reason;	// 0x30ec8ae9
- (id)audioOptions;	// 0x30ec82e5
- (AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescription *)sourceFormatDescription audioChannelLayoutSize:(unsigned *)size;	// 0x30ec8405
- (void)getAudioStreamBasicDescription:(AudioStreamBasicDescription *)description forAudioFileTypeID:(unsigned long)audioFileTypeID sourceFormatDescription:(opaqueCMFormatDescription *)description3;	// 0x30ec84dd
- (BOOL)isDictionaryFullyFormed;	// 0x30ec5d71
- (BOOL)willYieldCompressedSamples;	// 0x30ec8a91
@end
