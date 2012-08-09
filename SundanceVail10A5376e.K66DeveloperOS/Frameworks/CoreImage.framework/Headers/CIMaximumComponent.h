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
@interface CIMaximumComponent : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3734e449; S=0x3734e459; @synthesize
+ (id)customAttributes;	// 0x3734e17d
- (id)_kernel;	// 0x3734e261
// declared property getter: - (id)inputImage;	// 0x3734e449
- (id)outputImage;	// 0x3734e3c1
// declared property setter: - (void)setInputImage:(id)image;	// 0x3734e459
@end
