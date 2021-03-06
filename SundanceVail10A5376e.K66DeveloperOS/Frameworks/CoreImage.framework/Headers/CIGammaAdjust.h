/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGammaAdjust : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputPower;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x372f952d; S=0x372f953d; @synthesize
@property(copy, nonatomic) NSNumber *inputPower;	// G=0x372f954d; S=0x372f9561; @synthesize
+ (id)customAttributes;	// 0x372f91d1
- (BOOL)_isIdentity;	// 0x372f9449
// declared property getter: - (id)inputImage;	// 0x372f952d
// declared property getter: - (id)inputPower;	// 0x372f954d
- (id)outputImage;	// 0x372f9499
- (void)setDefaults;	// 0x372f9401
// declared property setter: - (void)setInputImage:(id)image;	// 0x372f953d
// declared property setter: - (void)setInputPower:(id)power;	// 0x372f9561
@end

