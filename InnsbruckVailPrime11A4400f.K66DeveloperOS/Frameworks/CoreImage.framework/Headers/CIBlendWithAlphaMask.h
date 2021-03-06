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
@interface CIBlendWithAlphaMask : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x2d754601; S=0x2d754611; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d7545e1; S=0x2d7545f1; @synthesize
@property(retain, nonatomic) CIImage *inputMaskImage;	// G=0x2d754621; S=0x2d754631; @synthesize
+ (id)customAttributes;	// 0x2d753d35
- (id)_kernel;	// 0x2d753df1
- (id)_kernelNoB;	// 0x2d753fa1
- (id)_kernelNoF;	// 0x2d754131
// declared property getter: - (id)inputBackgroundImage;	// 0x2d754601
// declared property getter: - (id)inputImage;	// 0x2d7545e1
// declared property getter: - (id)inputMaskImage;	// 0x2d754621
- (id)outputImage;	// 0x2d7542c1
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x2d754611
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d7545f1
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x2d754631
@end

