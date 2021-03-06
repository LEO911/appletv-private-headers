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
@interface CIGammaAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputPower;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3022e4b1; S=0x3022e4c1; @synthesize
@property(copy, nonatomic) NSNumber *inputPower;	// G=0x3022e4e5; S=0x3022e4f5; @synthesize
+ (id)customAttributes;	// 0x3022e045
- (BOOL)_isIdentity;	// 0x3022e2ad
// declared property getter: - (id)inputImage;	// 0x3022e4b1
// declared property getter: - (id)inputPower;	// 0x3022e4e5
- (id)outputImage;	// 0x3022e2fd
- (void)setDefaults;	// 0x3022e269
// declared property setter: - (void)setInputImage:(id)image;	// 0x3022e4c1
// declared property setter: - (void)setInputPower:(id)power;	// 0x3022e4f5
@end

