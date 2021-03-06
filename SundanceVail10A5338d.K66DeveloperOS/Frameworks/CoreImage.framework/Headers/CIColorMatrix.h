/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMatrix : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRVector;	// 40 = 0x28
	CIVector *inputGVector;	// 44 = 0x2c
	CIVector *inputBVector;	// 48 = 0x30
	CIVector *inputAVector;	// 52 = 0x34
	CIVector *inputBiasVector;	// 56 = 0x38
}
@property(copy, nonatomic) CIVector *inputAVector;	// G=0x352ee12d; S=0x352ee141; @synthesize
@property(copy, nonatomic) CIVector *inputBVector;	// G=0x352ee0f5; S=0x352ee109; @synthesize
@property(copy, nonatomic) CIVector *inputBiasVector;	// G=0x352ee165; S=0x352ee179; @synthesize
@property(copy, nonatomic) CIVector *inputGVector;	// G=0x352ee0bd; S=0x352ee0d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x352ee051; S=0x352ee061; @synthesize
@property(copy, nonatomic) CIVector *inputRVector;	// G=0x352ee085; S=0x352ee099; @synthesize
+ (id)customAttributes;	// 0x352ed5bd
// declared property getter: - (id)inputAVector;	// 0x352ee12d
// declared property getter: - (id)inputBVector;	// 0x352ee0f5
// declared property getter: - (id)inputBiasVector;	// 0x352ee165
// declared property getter: - (id)inputGVector;	// 0x352ee0bd
// declared property getter: - (id)inputImage;	// 0x352ee051
// declared property getter: - (id)inputRVector;	// 0x352ee085
- (id)outputImage;	// 0x352ed9d9
- (void)setDefaults;	// 0x352ed8dd
// declared property setter: - (void)setInputAVector:(id)vector;	// 0x352ee141
// declared property setter: - (void)setInputBVector:(id)vector;	// 0x352ee109
// declared property setter: - (void)setInputBiasVector:(id)vector;	// 0x352ee179
// declared property setter: - (void)setInputGVector:(id)vector;	// 0x352ee0d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x352ee061
// declared property setter: - (void)setInputRVector:(id)vector;	// 0x352ee099
@end

