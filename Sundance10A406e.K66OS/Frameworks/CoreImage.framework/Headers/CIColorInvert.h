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
@interface CIColorInvert : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36b44a8d; S=0x36b44a9d; @synthesize
+ (id)customAttributes;	// 0x36b449a9
// declared property getter: - (id)inputImage;	// 0x36b44a8d
- (id)outputImage;	// 0x36b448b5
// declared property setter: - (void)setInputImage:(id)image;	// 0x36b44a9d
@end

