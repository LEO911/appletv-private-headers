/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x3159d591; S=0x3159d5a1; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x3159d5b1; S=0x3159d5c1; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x3159d5d1; S=0x3159d5e1; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x3159d5f1; S=0x3159d601; @synthesize
+ (id)customAttributes;	// 0x3159ce79
- (id)_kernel;	// 0x3159cc91
// declared property getter: - (id)inputCenter;	// 0x3159d591
// declared property getter: - (id)inputColor0;	// 0x3159d5b1
// declared property getter: - (id)inputColor1;	// 0x3159d5d1
// declared property getter: - (id)inputRadius;	// 0x3159d5f1
- (id)outputImage;	// 0x3159d279
- (void)setDefaults;	// 0x3159d189
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3159d5a1
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x3159d5c1
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x3159d5e1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x3159d601
@end

