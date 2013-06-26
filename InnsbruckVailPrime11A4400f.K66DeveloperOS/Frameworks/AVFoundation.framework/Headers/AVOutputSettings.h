/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying> {
	NSDictionary *_outputSettingsDictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isCodecAvailableOnCurrentSystem) BOOL codecAvailableOnCurrentSystem;	// G=0x2c306645; 
@property(readonly, assign, nonatomic) NSSet *compatibleMediaTypes;	// G=0x2c3065dd; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettingsDictionary;	// G=0x2c3066e1; @synthesize=_outputSettingsDictionary
@property(readonly, assign, nonatomic) BOOL willYieldCompressedSamples;	// G=0x2c306611; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x2c3061f5
+ (unsigned)_validateOutputSettingsDictionary:(id)dictionary compatibilityDescription:(id *)description;	// 0x2c306025
+ (id)defaultOutputSettingsForMediaType:(id)mediaType;	// 0x2c3063e9
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x2c305f11
+ (id)outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary;	// 0x2c30617d
+ (id)registeredOutputSettingsClasses;	// 0x2c305ead
+ (unsigned)validateOutputSettingsDictionary:(id)dictionary;	// 0x2c306011
- (id)init;	// 0x2c30646d
- (id)initWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x2c306481
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x2c306679
// declared property getter: - (id)compatibleMediaTypes;	// 0x2c3065dd
- (id)copyWithZone:(NSZone *)zone;	// 0x2c30655d
- (void)dealloc;	// 0x2c306511
- (id)description;	// 0x2c30656d
// declared property getter: - (BOOL)isCodecAvailableOnCurrentSystem;	// 0x2c306645
// declared property getter: - (id)outputSettingsDictionary;	// 0x2c3066e1
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x2c3066ad
// declared property getter: - (BOOL)willYieldCompressedSamples;	// 0x2c306611
@end
