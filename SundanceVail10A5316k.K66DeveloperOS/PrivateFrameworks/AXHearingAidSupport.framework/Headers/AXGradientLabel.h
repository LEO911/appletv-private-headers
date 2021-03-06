/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "AXHearingAidSupport-Structs.h"
#import <UIView.h> // Unknown library

@class NSString, UIFont, UIImage;

@interface AXGradientLabel : UIView {
	NSString *_text;	// 84 = 0x54
	UIFont *_font;	// 88 = 0x58
	UIImage *_gradient;	// 92 = 0x5c
	CGColorRef _patternColor;	// 96 = 0x60
}
@property(retain, nonatomic) UIFont *font;	// G=0x30feec9d; S=0x30feeff5; @synthesize=_font
@property(retain, nonatomic) UIImage *gradient;	// G=0x30fef005; S=0x30feed45; @synthesize=_gradient
@property(retain, nonatomic) NSString *text;	// G=0x30feefd5; S=0x30feefe5; @synthesize=_text
- (CGColorRef)_patternColor;	// 0x30feeea1
- (void)dealloc;	// 0x30feec11
- (void)drawRect:(CGRect)rect;	// 0x30feeeb1
// declared property getter: - (id)font;	// 0x30feec9d
// declared property getter: - (id)gradient;	// 0x30fef005
// declared property setter: - (void)setFont:(id)font;	// 0x30feeff5
// declared property setter: - (void)setGradient:(id)gradient;	// 0x30feed45
// declared property setter: - (void)setText:(id)text;	// 0x30feefe5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30feecd5
// declared property getter: - (id)text;	// 0x30feefd5
@end

