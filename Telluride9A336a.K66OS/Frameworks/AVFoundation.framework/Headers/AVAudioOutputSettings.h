/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) NSDictionary *audioSettingsDictionary;	// G=0x3149ed5d; 
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x3149ec3d
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x3149ece9
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3149e905
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3149ec81
+ (id)defaultAudioOutputSettings;	// 0x3149ebf1
+ (id)registeredOutputSettingsClasses;	// 0x3149ecf9
- (id)initWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x3149ed99
// declared property getter: - (id)audioSettingsDictionary;	// 0x3149ed5d
- (id)compatibleMediaTypes;	// 0x3149ed6d
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x3149ed41
@end
