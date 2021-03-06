/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSkyAmount;	// 40 = 0x28
	NSNumber *inputGrassAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputGrassAmount;	// G=0x3073e66d; S=0x3073e67d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3073e605; S=0x3073e615; @synthesize
@property(copy, nonatomic) NSNumber *inputSkyAmount;	// G=0x3073e639; S=0x3073e649; @synthesize
+ (id)customAttributes;	// 0x3073de65
- (id)_kernel;	// 0x3073e1f5
// declared property getter: - (id)inputGrassAmount;	// 0x3073e66d
// declared property getter: - (id)inputImage;	// 0x3073e605
// declared property getter: - (id)inputSkyAmount;	// 0x3073e639
- (id)outputImage;	// 0x3073e405
- (void)setDefaults;	// 0x3073e385
// declared property setter: - (void)setInputGrassAmount:(id)amount;	// 0x3073e67d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3073e615
// declared property setter: - (void)setInputSkyAmount:(id)amount;	// 0x3073e649
@end

