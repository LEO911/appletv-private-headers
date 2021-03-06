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
@interface CIDisintegrateWithMaskTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
	NSNumber *inputTime;	// 48 = 0x30
	NSNumber *inputShadowRadius;	// 52 = 0x34
	NSNumber *inputShadowDensity;	// 56 = 0x38
	CIVector *inputShadowOffset;	// 60 = 0x3c
}
@property(retain) CIImage *inputImage;	// G=0x369c8361; S=0x369c8375; @synthesize
@property(retain) CIImage *inputMaskImage;	// G=0x369c83d1; S=0x369c83e5; @synthesize
@property(retain) NSNumber *inputShadowDensity;	// G=0x369c8479; S=0x369c848d; @synthesize
@property(retain) CIVector *inputShadowOffset;	// G=0x369c84b1; S=0x369c84c5; @synthesize
@property(retain) NSNumber *inputShadowRadius;	// G=0x369c8441; S=0x369c8455; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x369c8399; S=0x369c83ad; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x369c8409; S=0x369c841d; @synthesize
+ (id)customAttributes;	// 0x369c78f1
- (id)_kernel;	// 0x369c7e29
// declared property getter: - (id)inputImage;	// 0x369c8361
// declared property getter: - (id)inputMaskImage;	// 0x369c83d1
// declared property getter: - (id)inputShadowDensity;	// 0x369c8479
// declared property getter: - (id)inputShadowOffset;	// 0x369c84b1
// declared property getter: - (id)inputShadowRadius;	// 0x369c8441
// declared property getter: - (id)inputTargetImage;	// 0x369c8399
// declared property getter: - (id)inputTime;	// 0x369c8409
- (id)outputImage;	// 0x369c808d
- (void)setDefaults;	// 0x369c7d59
// declared property setter: - (void)setInputImage:(id)image;	// 0x369c8375
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x369c83e5
// declared property setter: - (void)setInputShadowDensity:(id)density;	// 0x369c848d
// declared property setter: - (void)setInputShadowOffset:(id)offset;	// 0x369c84c5
// declared property setter: - (void)setInputShadowRadius:(id)radius;	// 0x369c8455
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x369c83ad
// declared property setter: - (void)setInputTime:(id)time;	// 0x369c841d
@end

