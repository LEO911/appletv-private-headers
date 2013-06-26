/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputGradientImage;	// 40 = 0x28
	CIImage *cachedGradientImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *cachedGradientImage;	// G=0x2d75cffd; S=0x2d75d00d; @synthesize
@property(retain, nonatomic) CIImage *inputGradientImage;	// G=0x2d75cfed; S=0x2d75cc45; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d75cfcd; S=0x2d75cfdd; @synthesize
+ (id)customAttributes;	// 0x2d75c9cd
- (id)_kernel;	// 0x2d75cab1
// declared property getter: - (id)cachedGradientImage;	// 0x2d75cffd
- (id)gradientImage;	// 0x2d75cca5
// declared property getter: - (id)inputGradientImage;	// 0x2d75cfed
// declared property getter: - (id)inputImage;	// 0x2d75cfcd
- (id)outputImage;	// 0x2d75cef5
// declared property setter: - (void)setCachedGradientImage:(id)image;	// 0x2d75d00d
// declared property setter: - (void)setInputGradientImage:(id)image;	// 0x2d75cc45
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d75cfdd
@end
