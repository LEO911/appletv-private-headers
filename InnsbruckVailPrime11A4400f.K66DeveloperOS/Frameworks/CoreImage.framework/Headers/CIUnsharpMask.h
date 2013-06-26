/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIUnsharpMask : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d748dfd; S=0x2d748e0d; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x2d748e3d; S=0x2d748e4d; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x2d748e1d; S=0x2d748e2d; @synthesize
+ (id)customAttributes;	// 0x2d748751
- (BOOL)_isIdentity;	// 0x2d748aa1
- (id)_kernel;	// 0x2d748b21
// declared property getter: - (id)inputImage;	// 0x2d748dfd
// declared property getter: - (id)inputIntensity;	// 0x2d748e3d
// declared property getter: - (id)inputRadius;	// 0x2d748e1d
- (id)outputImage;	// 0x2d748cd5
- (void)setDefaults;	// 0x2d748a39
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d748e0d
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x2d748e4d
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x2d748e2d
@end
