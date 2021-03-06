/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphics : NSObject {
	CGRect _imageRect;	// 4 = 0x4
	UIKBThemeRef _categoryTheme;	// 20 = 0x14
	UIKBThemeRef _categorySelectedTheme;	// 24 = 0x18
	UIKBThemeRef _controlTheme;	// 28 = 0x1c
	UIKBThemeRef _controlPressedTheme;	// 32 = 0x20
	UIKBThemeRef _dividerTheme;	// 36 = 0x24
	UIKBThemeRef _darkDividerTheme;	// 40 = 0x28
	UIKBThemeRef _selectedDividerTheme;	// 44 = 0x2c
	UIKBThemeRef _backgroundTheme;	// 48 = 0x30
	CGColorRef _selectedDividerStart;	// 52 = 0x34
	CGColorRef _symbolColor;	// 56 = 0x38
	CGGradientRef _darkDividerGradient;	// 60 = 0x3c
	CGGradientRef _selectedGradient;	// 64 = 0x40
	CGGradientRef _selectedDividerGradient;	// 68 = 0x44
	CGGradientRef _backgroundGradient;	// 72 = 0x48
}
+ (unsigned char)colCount:(BOOL)count;	// 0x32ff2799
+ (CFDictionaryRef)createEmojiFontAttributes:(BOOL)attributes;	// 0x32ff2581
+ (CFDictionaryRef)emojiFontAttributes;	// 0x32ff2685
+ (CGSize)emojiSize:(BOOL)size;	// 0x32ff270d
+ (id)imageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x32ff0f0d
+ (BOOL)isLandscape;	// 0x32ff06ad
+ (CGPoint)margin:(BOOL)margin;	// 0x32ff27fd
+ (CGPoint)padding:(BOOL)padding;	// 0x32ff2889
+ (unsigned char)rowCount:(BOOL)count;	// 0x32ff2755
+ (id)sharedInstance;	// 0x32ff0665
- (id)init;	// 0x32ff0581
- (id)backgroundGradientGenerator:(id)generator;	// 0x32ff1681
- (id)categoryKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x32ff1f91
- (id)categoryNatureGenerator:(id)generator;	// 0x32ff1395
- (id)categoryObjectsGenerator:(id)generator;	// 0x32ff13b5
- (id)categoryPeopleGenerator:(id)generator;	// 0x32ff1341
- (id)categoryPlacesGenerator:(id)generator;	// 0x32ff13d5
- (id)categoryRecentsGenerator:(id)generator;	// 0x32ff1321
- (id)categorySymbolsGenerator:(id)generator;	// 0x32ff13f5
- (id)categoryWithSymbol:(id)symbol pressed:(id)pressed;	// 0x32ff1195
- (UIKBThemeRef)createProtoThemeForKey:(id)key keyboard:(id)keyboard state:(int)state;	// 0x32ff1c21
- (id)darkDividerGenerator:(id)generator;	// 0x32ff1155
- (void)dealloc;	// 0x32ff05c9
- (id)dividerGenerator:(id)generator;	// 0x32ff1135
- (id)dividerWithTheme:(UIKBThemeRef)theme;	// 0x32ff1015
- (void)drawTopEdgeInContext:(CGContextRef)context withTheme:(UIKBThemeRef)theme;	// 0x32ff0f61
- (id)emojiPressedGenerator:(id)generator rect:(CGRect)rect;	// 0x32ff1881
- (id)generateImageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x32ff0d65
- (void)initializeThemes;	// 0x32ff079d
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size;	// 0x32ff1f45
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size offset:(CGPoint)offset;	// 0x32ff1e3d
- (id)pageIndicatorCurrentGenerator:(id)generator;	// 0x32ff1645
- (id)pageIndicatorGenerator:(id)generator;	// 0x32ff1415
- (id)protoKeyWithDisplayString:(id)displayString;	// 0x32ff1ce9
- (id)protoKeyboard;	// 0x32ff1db9
- (void)releaseThemes;	// 0x32ff06f1
- (id)selectedDividerGenerator:(id)generator;	// 0x32ff1175
@end

