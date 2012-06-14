/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIVignette : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputIntensity;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34a3c9fd; S=0x34a3ca0d; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x34a3ca31; S=0x34a3ca41; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x34a3ca65; S=0x34a3ca75; @synthesize
+ (id)customAttributes;	// 0x34a3c209
- (BOOL)_isIdentity;	// 0x34a3c76d
- (id)_kernel;	// 0x34a3c541
// declared property getter: - (id)inputImage;	// 0x34a3c9fd
// declared property getter: - (id)inputIntensity;	// 0x34a3ca31
// declared property getter: - (id)inputRadius;	// 0x34a3ca65
- (id)outputImage;	// 0x34a3c7b5
- (void)setDefaults;	// 0x34a3c6fd
// declared property setter: - (void)setInputImage:(id)image;	// 0x34a3ca0d
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x34a3ca41
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x34a3ca75
@end
