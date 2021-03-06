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
@interface CIPerspectiveTransform : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputTopLeft;	// 40 = 0x28
	CIVector *inputTopRight;	// 44 = 0x2c
	CIVector *inputBottomRight;	// 48 = 0x30
	CIVector *inputBottomLeft;	// 52 = 0x34
}
@property(copy, nonatomic) CIVector *inputBottomLeft;	// G=0x35358365; S=0x35358379; @synthesize
@property(copy, nonatomic) CIVector *inputBottomRight;	// G=0x3535832d; S=0x35358341; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x35358289; S=0x35358299; @synthesize
@property(copy, nonatomic) CIVector *inputTopLeft;	// G=0x353582bd; S=0x353582d1; @synthesize
@property(copy, nonatomic) CIVector *inputTopRight;	// G=0x353582f5; S=0x35358309; @synthesize
+ (id)customAttributes;	// 0x35357de5
// declared property getter: - (id)inputBottomLeft;	// 0x35358365
// declared property getter: - (id)inputBottomRight;	// 0x3535832d
// declared property getter: - (id)inputImage;	// 0x35358289
// declared property getter: - (id)inputTopLeft;	// 0x353582bd
// declared property getter: - (id)inputTopRight;	// 0x353582f5
- (id)outputImage;	// 0x353580d9
- (void)setDefaults;	// 0x35358015
// declared property setter: - (void)setInputBottomLeft:(id)left;	// 0x35358379
// declared property setter: - (void)setInputBottomRight:(id)right;	// 0x35358341
// declared property setter: - (void)setInputImage:(id)image;	// 0x35358299
// declared property setter: - (void)setInputTopLeft:(id)left;	// 0x353582d1
// declared property setter: - (void)setInputTopRight:(id)right;	// 0x35358309
@end

