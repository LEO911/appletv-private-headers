/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
	UIColor *embossHighlightColor;	// 4 = 0x4
	UIColor *embossShadowColor;	// 8 = 0x8
	float embossSize;	// 12 = 0xc
	UIColor *innerShadowColor;	// 16 = 0x10
	CGPoint innerShadowOffset;	// 20 = 0x14
	float innerShadowBlur;	// 28 = 0x1c
	int innerShadowBlendMode;	// 32 = 0x20
	UIColor *outerShadowColor;	// 36 = 0x24
	CGPoint outerShadowOffset;	// 40 = 0x28
	float outerShadowBlur;	// 48 = 0x30
	int outerShadowBlendMode;	// 52 = 0x34
	UIColor *topGradientColor;	// 56 = 0x38
	UIColor *bottomGradientColor;	// 60 = 0x3c
	float innerOpacity;	// 64 = 0x40
}
@property(retain, nonatomic) UIColor *bottomGradientColor;	// G=0x32e21289; S=0x32e20049; @synthesize
@property(readonly, assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x32e61c91; 
@property(retain, nonatomic) UIColor *embossHighlightColor;	// G=0x32e21059; S=0x32e2e919; @synthesize
@property(retain, nonatomic) UIColor *embossShadowColor;	// G=0x32e211d1; S=0x32e2e929; @synthesize
@property(assign, nonatomic) float embossSize;	// G=0x32e211e1; S=0x32e2e939; @synthesize
@property(assign, nonatomic) float innerOpacity;	// G=0x32e21299; S=0x32e20059; @synthesize
@property(assign, nonatomic) int innerShadowBlendMode;	// G=0x32e61f2d; S=0x32e2e94d; @synthesize
@property(assign, nonatomic) float innerShadowBlur;	// G=0x32e2124d; S=0x32e1ffd5; @synthesize
@property(retain, nonatomic) UIColor *innerShadowColor;	// G=0x32e21069; S=0x32e1ffc1; @synthesize
@property(assign, nonatomic) CGPoint innerShadowOffset;	// G=0x32e21231; S=0x32e1ffe9; @synthesize
@property(assign, nonatomic) int outerShadowBlendMode;	// G=0x32e61f41; S=0x32e2e961; @synthesize
@property(assign, nonatomic) float outerShadowBlur;	// G=0x32e21279; S=0x32e20011; @synthesize
@property(retain, nonatomic) UIColor *outerShadowColor;	// G=0x32e2107d; S=0x32e1fffd; @synthesize
@property(assign, nonatomic) CGPoint outerShadowOffset;	// G=0x32e2125d; S=0x32e20025; @synthesize
@property(retain, nonatomic) UIColor *topGradientColor;	// G=0x32e21049; S=0x32e20039; @synthesize
+ (id)defaultLetterpressStyle;	// 0x32e2e8e9
+ (id)old2xLetterpressStyle;	// 0x32e61599
// declared property getter: - (id)bottomGradientColor;	// 0x32e21289
- (id)copyWithZone:(NSZone *)zone;	// 0x32e617ad
- (void)dealloc;	// 0x32e212a9
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x32e61c91
// declared property getter: - (id)embossHighlightColor;	// 0x32e21059
// declared property getter: - (id)embossShadowColor;	// 0x32e211d1
// declared property getter: - (float)embossSize;	// 0x32e211e1
// declared property getter: - (float)innerOpacity;	// 0x32e21299
// declared property getter: - (int)innerShadowBlendMode;	// 0x32e61f2d
// declared property getter: - (float)innerShadowBlur;	// 0x32e2124d
// declared property getter: - (id)innerShadowColor;	// 0x32e21069
// declared property getter: - (CGPoint)innerShadowOffset;	// 0x32e21231
- (BOOL)isEqual:(id)equal;	// 0x32e61945
// declared property getter: - (int)outerShadowBlendMode;	// 0x32e61f41
// declared property getter: - (float)outerShadowBlur;	// 0x32e21279
// declared property getter: - (id)outerShadowColor;	// 0x32e2107d
// declared property getter: - (CGPoint)outerShadowOffset;	// 0x32e2125d
// declared property setter: - (void)setBottomGradientColor:(id)color;	// 0x32e20049
// declared property setter: - (void)setEmbossHighlightColor:(id)color;	// 0x32e2e919
// declared property setter: - (void)setEmbossShadowColor:(id)color;	// 0x32e2e929
// declared property setter: - (void)setEmbossSize:(float)size;	// 0x32e2e939
// declared property setter: - (void)setInnerOpacity:(float)opacity;	// 0x32e20059
// declared property setter: - (void)setInnerShadowBlendMode:(int)mode;	// 0x32e2e94d
// declared property setter: - (void)setInnerShadowBlur:(float)blur;	// 0x32e1ffd5
// declared property setter: - (void)setInnerShadowColor:(id)color;	// 0x32e1ffc1
// declared property setter: - (void)setInnerShadowOffset:(CGPoint)offset;	// 0x32e1ffe9
// declared property setter: - (void)setOuterShadowBlendMode:(int)mode;	// 0x32e2e961
// declared property setter: - (void)setOuterShadowBlur:(float)blur;	// 0x32e20011
// declared property setter: - (void)setOuterShadowColor:(id)color;	// 0x32e1fffd
// declared property setter: - (void)setOuterShadowOffset:(CGPoint)offset;	// 0x32e20025
// declared property setter: - (void)setTopGradientColor:(id)color;	// 0x32e20039
// declared property getter: - (id)topGradientColor;	// 0x32e21049
@end

