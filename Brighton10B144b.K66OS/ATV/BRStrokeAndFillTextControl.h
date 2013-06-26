/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRStrokeAndFillTextControl : BRControl {
	NSAttributedString *_attributedString;	// 84 = 0x54
	float _strokeWidth;	// 88 = 0x58
	CGColorRef _strokeColor;	// 92 = 0x5c
}
@property(copy) NSAttributedString *attributedString;	// G=0x30e071; S=0x30e081; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x30e441; S=0x30e455; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x30e415; S=0x30e429; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x30e071
- (void)dealloc;	// 0x30e011
- (void)drawRect:(CGRect)rect;	// 0x30e0d9
// declared property setter: - (void)setAttributedString:(id)string;	// 0x30e081
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x30e455
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x30e429
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30dee9
// declared property getter: - (CGColorRef)strokeColor;	// 0x30e441
// declared property getter: - (float)strokeWidth;	// 0x30e415
@end
