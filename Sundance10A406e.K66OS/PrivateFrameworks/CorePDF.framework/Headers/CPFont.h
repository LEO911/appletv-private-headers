/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL isHorizontal;	// 116 = 0x74
	float defaultWidth;	// 120 = 0x78
	BOOL disposed;	// 124 = 0x7c
}
@property(readonly, assign) CGFontRef cgFont;	// G=0x32adf61d; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x32adf60d; converted property
@property(readonly, retain) NSString *fontName;	// G=0x32adf659; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x32adf86d; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x32adf491
- (float)ascent;	// 0x32adf709
- (float)avgWidth;	// 0x32adf7f5
- (float)capHeight;	// 0x32adf7a5
// converted property getter: - (CGFontRef)cgFont;	// 0x32adf61d
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x32adf60d
- (void)dealloc;	// 0x32adf5ad
- (float)descent;	// 0x32adf74d
- (void)dispose;	// 0x32adf521
- (void)finalize;	// 0x32adf56d
- (unsigned)flags;	// 0x32adf6bd
- (CGRect)fontBBox;	// 0x32adf6d1
// converted property getter: - (id)fontName;	// 0x32adf659
- (float)fontStretch;	// 0x32adf699
- (float)fontWeight;	// 0x32adf6a9
- (void)getFontName;	// 0x32adebc9
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x32adf909
// converted property getter: - (BOOL)isHorizontal;	// 0x32adf86d
- (BOOL)isSameFontAs:(id)as;	// 0x32adf669
- (float)italicAngle;	// 0x32adf6f5
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x32adf881
- (float)leading;	// 0x32adf791
- (void)loadEmbeddedFontInfo;	// 0x32adee19
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x32adece9
- (id)matchingFontName;	// 0x32ade949
- (float)maxWidth;	// 0x32adf809
- (float)missingWidth;	// 0x32adf81d
- (float)spaceWidth;	// 0x32adf831
- (float)stemH;	// 0x32adf7e1
- (float)stemV;	// 0x32adf7cd
- (float)underlinePosition;	// 0x32adf845
- (float)underlineThickness;	// 0x32adf859
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x32adfa0d
- (float)xHeight;	// 0x32adf7b9
@end

