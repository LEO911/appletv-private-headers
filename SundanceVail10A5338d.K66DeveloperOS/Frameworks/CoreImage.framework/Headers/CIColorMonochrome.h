/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor;	// G=0x3532c2dd; S=0x3532c2ed; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3532c2a9; S=0x3532c2b9; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x3532c311; S=0x3532c321; @synthesize
+ (id)customAttributes;	// 0x3532be71
- (id)_kernel;	// 0x3532bca9
// declared property getter: - (id)inputColor;	// 0x3532c2dd
// declared property getter: - (id)inputImage;	// 0x3532c2a9
// declared property getter: - (id)inputIntensity;	// 0x3532c311
- (id)outputImage;	// 0x3532c189
- (void)setDefaults;	// 0x3532c0f9
// declared property setter: - (void)setInputColor:(id)color;	// 0x3532c2ed
// declared property setter: - (void)setInputImage:(id)image;	// 0x3532c2b9
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x3532c321
@end
