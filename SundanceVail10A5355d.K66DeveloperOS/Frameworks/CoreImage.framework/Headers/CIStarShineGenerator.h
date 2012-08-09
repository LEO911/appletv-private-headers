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
@interface CIStarShineGenerator : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputCrossScale;	// 48 = 0x30
	NSNumber *inputCrossAngle;	// 52 = 0x34
	NSNumber *inputCrossOpacity;	// 56 = 0x38
	NSNumber *inputCrossWidth;	// 60 = 0x3c
	NSNumber *inputEpsilon;	// 64 = 0x40
}
@property(retain) CIVector *inputCenter;	// G=0x369ca661; S=0x369ca675; @synthesize
@property(retain) CIColor *inputColor;	// G=0x369ca699; S=0x369ca6ad; @synthesize
@property(retain) NSNumber *inputCrossAngle;	// G=0x369ca741; S=0x369ca755; @synthesize
@property(retain) NSNumber *inputCrossOpacity;	// G=0x369ca7e9; S=0x369ca7fd; @synthesize
@property(retain) NSNumber *inputCrossScale;	// G=0x369ca779; S=0x369ca78d; @synthesize
@property(retain) NSNumber *inputCrossWidth;	// G=0x369ca7b1; S=0x369ca7c5; @synthesize
@property(retain) NSNumber *inputEpsilon;	// G=0x369ca709; S=0x369ca71d; @synthesize
@property(retain) NSNumber *inputRadius;	// G=0x369ca6d1; S=0x369ca6e5; @synthesize
+ (id)customAttributes;	// 0x369c99e9
- (id)_kernel;	// 0x369ca1e9
// declared property getter: - (id)inputCenter;	// 0x369ca661
// declared property getter: - (id)inputColor;	// 0x369ca699
// declared property getter: - (id)inputCrossAngle;	// 0x369ca741
// declared property getter: - (id)inputCrossOpacity;	// 0x369ca7e9
// declared property getter: - (id)inputCrossScale;	// 0x369ca779
// declared property getter: - (id)inputCrossWidth;	// 0x369ca7b1
// declared property getter: - (id)inputEpsilon;	// 0x369ca709
// declared property getter: - (id)inputRadius;	// 0x369ca6d1
- (id)outputImage;	// 0x369ca415
- (void)setDefaults;	// 0x369ca049
// declared property setter: - (void)setInputCenter:(id)center;	// 0x369ca675
// declared property setter: - (void)setInputColor:(id)color;	// 0x369ca6ad
// declared property setter: - (void)setInputCrossAngle:(id)angle;	// 0x369ca755
// declared property setter: - (void)setInputCrossOpacity:(id)opacity;	// 0x369ca7fd
// declared property setter: - (void)setInputCrossScale:(id)scale;	// 0x369ca78d
// declared property setter: - (void)setInputCrossWidth:(id)width;	// 0x369ca7c5
// declared property setter: - (void)setInputEpsilon:(id)epsilon;	// 0x369ca71d
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x369ca6e5
@end
