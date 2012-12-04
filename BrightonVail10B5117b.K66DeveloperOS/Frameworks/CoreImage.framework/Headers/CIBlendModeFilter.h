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
@interface CIBlendModeFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x3159f1b9; S=0x3159f1c9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3159f199; S=0x3159f1a9; @synthesize
+ (id)_filter_display_name;	// 0x3159ef15
+ (id)_kernel;	// 0x3159ef19
+ (id)customAttributes;	// 0x3159ef1d
- (CGRect)_extent;	// 0x3159f00d
// declared property getter: - (id)inputBackgroundImage;	// 0x3159f1b9
// declared property getter: - (id)inputImage;	// 0x3159f199
- (id)outputImage;	// 0x3159f0a1
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x3159f1c9
// declared property setter: - (void)setInputImage:(id)image;	// 0x3159f1a9
@end
