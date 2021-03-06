/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : UIView {
@private
	UIColor *_tintColor;	// 44 = 0x2c
	UIImage *_backgroundImage;	// 48 = 0x30
	unsigned _barStyle : 3;	// 52 = 0x34
	unsigned _isTranslucent : 1;	// 52 = 0x34
	unsigned _usesEmbeddedAppearance : 1;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x32184bdd; S=0x3200bded; 
@property(assign, nonatomic) int barStyle;	// G=0x31ff2dfd; S=0x32184c0d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32184bcd; S=0x32184c95; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32184b85; S=0x32184c55; 
@property(assign, nonatomic) BOOL usesEmbeddedAppearance;	// G=0x32184bb9; S=0x31febfa5; 
- (BOOL)_canDrawContent;	// 0x31feb0c1
// declared property getter: - (id)backgroundImage;	// 0x32184bdd
// declared property getter: - (int)barStyle;	// 0x31ff2dfd
- (void)dealloc;	// 0x32185475
- (void)drawRect:(CGRect)rect;	// 0x31ff2c19
// declared property getter: - (BOOL)isTranslucent;	// 0x32184b85
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3200bded
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32184c0d
// declared property setter: - (void)setTintColor:(id)color;	// 0x32184c95
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32184c55
// declared property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x31febfa5
// declared property getter: - (id)tintColor;	// 0x32184bcd
// declared property getter: - (BOOL)usesEmbeddedAppearance;	// 0x32184bb9
@end

