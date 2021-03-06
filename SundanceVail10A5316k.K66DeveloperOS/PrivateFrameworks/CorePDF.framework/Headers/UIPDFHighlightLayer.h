/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <CALayer.h> // Unknown library


@interface UIPDFHighlightLayer : CALayer {
	CGPathRef _clipPath;	// 48 = 0x30
	CGPathRef _borderPath;	// 52 = 0x34
@private
	CGPoint offset;	// 56 = 0x38
}
@property(assign, nonatomic) CGPathRef borderPath;	// G=0x33a284d5; S=0x33a284e5; @dynamic
@property(assign, nonatomic) CGPathRef clipPath;	// G=0x33a284a1; S=0x33a284b1; @dynamic
@property(assign, nonatomic) CGPoint offset;	// G=0x33a28509; S=0x33a28521; @synthesize
// declared property getter: - (CGPathRef)borderPath;	// 0x33a284d5
// declared property getter: - (CGPathRef)clipPath;	// 0x33a284a1
- (void)dealloc;	// 0x33a2844d
// declared property getter: - (CGPoint)offset;	// 0x33a28509
// declared property setter: - (void)setBorderPath:(CGPathRef)path;	// 0x33a284e5
// declared property setter: - (void)setClipPath:(CGPathRef)path;	// 0x33a284b1
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x33a28521
@end

