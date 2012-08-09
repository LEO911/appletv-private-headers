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
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x3532cf79; S=0x3532cf89; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3532cf45; S=0x3532cf55; @synthesize
+ (id)_filter_display_name;	// 0x3532ccc1
+ (id)_kernel;	// 0x3532ccc5
+ (id)customAttributes;	// 0x3532ccc9
- (CGRect)_extent;	// 0x3532cdb9
// declared property getter: - (id)inputBackgroundImage;	// 0x3532cf79
// declared property getter: - (id)inputImage;	// 0x3532cf45
- (id)outputImage;	// 0x3532ce4d
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x3532cf89
// declared property setter: - (void)setInputImage:(id)image;	// 0x3532cf55
@end
