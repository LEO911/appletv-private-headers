/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGloom : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31560d1d; S=0x31560d2d; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x31560d61; S=0x31560d75; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x31560d3d; S=0x31560d51; @synthesize
+ (id)customAttributes;	// 0x31560631
- (BOOL)_isIdentity;	// 0x31560b41
- (id)_kernel;	// 0x31560921
// declared property getter: - (id)inputImage;	// 0x31560d1d
// declared property getter: - (id)inputIntensity;	// 0x31560d61
// declared property getter: - (id)inputRadius;	// 0x31560d3d
- (id)outputImage;	// 0x31560bc1
- (void)setDefaults;	// 0x31560ad9
// declared property setter: - (void)setInputImage:(id)image;	// 0x31560d2d
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x31560d75
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x31560d51
@end
