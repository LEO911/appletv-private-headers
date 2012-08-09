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
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x373338f9; S=0x37333909; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x373338d9; S=0x373338e9; @synthesize
+ (id)_filter_display_name;	// 0x37333655
+ (id)_kernel;	// 0x37333659
+ (id)customAttributes;	// 0x3733365d
- (CGRect)_extent;	// 0x3733374d
// declared property getter: - (id)inputBackgroundImage;	// 0x373338f9
// declared property getter: - (id)inputImage;	// 0x373338d9
- (id)outputImage;	// 0x373337e1
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x37333909
// declared property setter: - (void)setInputImage:(id)image;	// 0x373338e9
@end
