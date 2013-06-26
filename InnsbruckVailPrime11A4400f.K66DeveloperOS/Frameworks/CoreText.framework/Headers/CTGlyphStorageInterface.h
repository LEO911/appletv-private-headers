/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import </libobjc.A.h>


@interface CTGlyphStorageInterface : NSObject {
	long _glyphCount;	// 4 = 0x4
	unsigned short *_glyphs;	// 8 = 0x8
	CGSize *_advances;	// 12 = 0xc
	unsigned *_props;	// 16 = 0x10
	int *_stringIndexes;	// 20 = 0x14
	int *_absorbedCounts;	// 24 = 0x18
}
- (void)initGlyphStack:(long)stack;	// 0x2da4e9fd
- (CTGlyphStorageRef)createCopy:(XXStruct_K5nmsA)copy;	// 0x2da4e9d5
- (void)disposeGlyphStack;	// 0x2da4ea09
- (void)getCustomAdvance:(CGSize *)advance forIndex:(long)index;	// 0x2da4e9d9
- (void)insertGlyphs:(XXStruct_K5nmsA)glyphs;	// 0x2da4e9f9
- (void)moveGlyphsTo:(long)to from:(XXStruct_K5nmsA)from;	// 0x2da4e9f5
- (void)popGlyph:(long)glyph;	// 0x2da4ea05
- (void)pushGlyph:(long)glyph;	// 0x2da4ea01
- (void)setAbsorbedCount:(long)count forIndex:(long)index;	// 0x2da4e9e9
- (void)setAdvance:(CGSize)advance forIndex:(long)index;	// 0x2da4e9e1
- (void)setGlyphID:(unsigned short)anId forIndex:(long)index;	// 0x2da4e9dd
- (void)setProps:(unsigned)props forIndex:(long)index;	// 0x2da4e9e5
- (void)setStringIndex:(long)index forIndex:(long)index2;	// 0x2da4e9ed
- (void)swapGlyph:(long)glyph withIndex:(long)index;	// 0x2da4e9f1
@end
