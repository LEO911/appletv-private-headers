/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <IOSurface/NSConcreteTextStorage.h>

@class UIColor, NSMutableDictionary, NSDictionary, UIFont;

__attribute__((visibility("hidden")))
@interface _UICascadingTextStorage : NSConcreteTextStorage {
	NSMutableDictionary *_defaultAttributes;	// 172 = 0xac
}
@property(copy, nonatomic) NSDictionary *defaultAttributes;	// G=0x2f6b9681; S=0x2f6b9691; 
@property(retain, nonatomic) UIFont *font;	// G=0x2f6b9b21; S=0x2f6b9821; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x2f6ba9c5; S=0x2f6ba739; 
@property(assign, nonatomic) float shadowBlur;	// G=0x2f6ba0ed; S=0x2f6ba05d; 
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x2f6b9f39; S=0x2f6b9eb9; 
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x2f6ba021; S=0x2f6b9f61; 
@property(assign, nonatomic) int textAlignment;	// G=0x2f6ba6b5; S=0x2f6ba429; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x2f6ba395; S=0x2f6ba115; 
+ (id)defaultFont;	// 0x2f6b9769
- (id)_defaultAttributes;	// 0x2f6b978d
- (int)_resolvedTextAlignment;	// 0x2f6baa49
- (void)_restoreOriginalFontAttribute;	// 0x2f6b97f1
- (void)_setShadow:(id)shadow;	// 0x2f6b9bd9
- (id)_shadow;	// 0x2f6b9e25
- (BOOL)_shouldSetOriginalFontAttribute;	// 0x2f6b97ed
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x2f6b95c5
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x2f6b961d
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x2f6b94c5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x2f6b9541
- (void)dealloc;	// 0x2f6b9479
// declared property getter: - (id)defaultAttributes;	// 0x2f6b9681
// declared property getter: - (id)font;	// 0x2f6b9b21
// declared property getter: - (int)lineBreakMode;	// 0x2f6ba9c5
// declared property setter: - (void)setDefaultAttributes:(id)attributes;	// 0x2f6b9691
// declared property setter: - (void)setFont:(id)font;	// 0x2f6b9821
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x2f6ba739
// declared property setter: - (void)setShadowBlur:(float)blur;	// 0x2f6ba05d
// declared property setter: - (void)setShadowColor:(id)color;	// 0x2f6b9eb9
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x2f6b9f61
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x2f6ba429
// declared property setter: - (void)setTextColor:(id)color;	// 0x2f6ba115
// declared property getter: - (float)shadowBlur;	// 0x2f6ba0ed
// declared property getter: - (id)shadowColor;	// 0x2f6b9f39
// declared property getter: - (CGSize)shadowOffset;	// 0x2f6ba021
// declared property getter: - (int)textAlignment;	// 0x2f6ba6b5
// declared property getter: - (id)textColor;	// 0x2f6ba395
@end

