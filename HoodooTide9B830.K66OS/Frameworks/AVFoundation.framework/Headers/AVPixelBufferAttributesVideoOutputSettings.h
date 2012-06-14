/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x35e69de1; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x35e69b3d
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x35e699dd
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x35e69b8d
- (int)height;	// 0x35e69d8d
- (BOOL)isDictionaryFullyFormed;	// 0x35e69ddd
// declared property getter: - (id)pixelBufferAttributes;	// 0x35e69de1
- (int)width;	// 0x35e69d41
- (BOOL)willYieldCompressedSamples;	// 0x35e69dd9
@end
