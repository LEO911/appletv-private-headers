/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CICircularScreen : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputWidth;	// 44 = 0x2c
	NSNumber *inputSharpness;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x369b62ad; S=0x369b62c1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369b6279; S=0x369b6289; @synthesize
@property(copy, nonatomic) NSNumber *inputSharpness;	// G=0x369b631d; S=0x369b6331; @synthesize
@property(copy, nonatomic) NSNumber *inputWidth;	// G=0x369b62e5; S=0x369b62f9; @synthesize
+ (id)customAttributes;	// 0x369b5be1
- (id)_kernel;	// 0x369b5f19
// declared property getter: - (id)inputCenter;	// 0x369b62ad
// declared property getter: - (id)inputImage;	// 0x369b6279
// declared property getter: - (id)inputSharpness;	// 0x369b631d
// declared property getter: - (id)inputWidth;	// 0x369b62e5
- (id)outputImage;	// 0x369b60e1
- (void)setDefaults;	// 0x369b5b39
// declared property setter: - (void)setInputCenter:(id)center;	// 0x369b62c1
// declared property setter: - (void)setInputImage:(id)image;	// 0x369b6289
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x369b6331
// declared property setter: - (void)setInputWidth:(id)width;	// 0x369b62f9
@end

