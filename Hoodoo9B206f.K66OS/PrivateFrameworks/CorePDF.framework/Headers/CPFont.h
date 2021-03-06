/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL disposed;	// 116 = 0x74
}
@property(readonly, assign) CGFontRef cgFont;	// G=0x326275bd; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x326266e5; converted property
@property(readonly, retain) NSString *fontName;	// G=0x326266f5; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x3262769d
- (float)ascent;	// 0x32626771
- (float)avgWidth;	// 0x326267fd
- (float)capHeight;	// 0x326267ad
// converted property getter: - (CGFontRef)cgFont;	// 0x326275bd
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x326266e5
- (void)dealloc;	// 0x326275f1
- (float)descent;	// 0x32626785
- (void)dispose;	// 0x3262764d
- (void)finalize;	// 0x32627339
- (unsigned)flags;	// 0x32626729
- (CGRect)fontBBox;	// 0x3262673d
// converted property getter: - (id)fontName;	// 0x326266f5
- (float)fontStretch;	// 0x32626705
- (float)fontWeight;	// 0x32626715
- (void)getFontName;	// 0x32626bc5
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x32627409
- (BOOL)isSameFontAs:(id)as;	// 0x32626875
- (float)italicAngle;	// 0x3262675d
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x32627529
- (float)leading;	// 0x32626799
- (void)loadEmbeddedFontInfo;	// 0x32626e2d
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x32626ce5
- (id)matchingFontName;	// 0x326268ad
- (float)maxWidth;	// 0x32626811
- (float)missingWidth;	// 0x32626825
- (float)spaceWidth;	// 0x32626839
- (float)stemH;	// 0x326267e9
- (float)stemV;	// 0x326267d5
- (float)underlinePosition;	// 0x3262684d
- (float)underlineThickness;	// 0x32626861
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x32627379
- (float)xHeight;	// 0x326267c1
@end

