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
@property(readonly, assign, nonatomic) NSDictionary *audioSettingsDictionary;	// G=0x32350d5d; 
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x32350c3d
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x32350ce9
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x32350905
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x32350c81
+ (id)defaultAudioOutputSettings;	// 0x32350bf1
+ (id)registeredOutputSettingsClasses;	// 0x32350cf9
- (id)initWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x32350d99
// declared property getter: - (id)audioSettingsDictionary;	// 0x32350d5d
- (id)compatibleMediaTypes;	// 0x32350d6d
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x32350d41
@end

