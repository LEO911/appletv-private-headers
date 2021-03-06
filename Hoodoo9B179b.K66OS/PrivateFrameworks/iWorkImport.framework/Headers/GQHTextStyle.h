/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHTextStyle : NSObject {
}
+ (GSFontRef)createFontFromName:(CFStringRef)name size:(float)size;	// 0x359a5399
+ (BOOL)getDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x359a5491
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x359a546d
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state isSpan:(BOOL)span;	// 0x359a5679
+ (const char *)name;	// 0x359a538d
+ (CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)fontName;	// 0x359a54b5
+ (BOOL)platformGetDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x359a55f9
+ (void)reduceFontSizeForSuperscriptedText:(id)superscriptedText style:(id)style state:(id)state;	// 0x359a5e2d
@end

