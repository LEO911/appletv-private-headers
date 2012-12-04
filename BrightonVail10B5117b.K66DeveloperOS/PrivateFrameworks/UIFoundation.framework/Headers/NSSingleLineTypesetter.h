/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSGlyphStorage.h"
#import "NSATSTypesetter.h"


__attribute__((visibility("hidden")))
@interface NSSingleLineTypesetter : NSATSTypesetter <NSGlyphStorage> {
	float _lineWidth;	// 96 = 0x60
	NSRange _currentBufferRange;	// 100 = 0x64
	unsigned *_glyphBuffer;	// 108 = 0x6c
	unsigned *_inscriptionBuffer;	// 112 = 0x70
	BOOL *_elasticBuffer;	// 116 = 0x74
	struct {
		unsigned _usesScreenFonts : 1;
		unsigned _reserved : 31;
	} _slFlags;	// 120 = 0x78
}
+ (bool)_validateAttributes:(id)attributes;	// 0x35c58da5
+ (void)initialize;	// 0x35c58cad
+ (id)singleLineTypesetter;	// 0x35c58bf1
- (id)init;	// 0x35c58e35
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x35c58e31
- (BOOL)_usesScreenFonts;	// 0x35c58e1d
- (id)attributedString;	// 0x35c590e9
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x35c590f9
- (id)createRenderingContextForCharacterRange:(NSRange)characterRange typesetterBehavior:(int)behavior usesScreenFonts:(BOOL)fonts hasStrongRight:(BOOL)right maximumWidth:(float)width;	// 0x35c58ea1
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x35c5930d
- (void)done;	// 0x35c58c5d
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x35c59111
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x35c59205
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x35c59105
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x35c59309
- (void)insertGlyphs:(const unsigned *)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;	// 0x35c59041
- (unsigned)layoutOptions;	// 0x35c590e5
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x35c5931d
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x35c59321
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x35c59315
- (void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;	// 0x35c59085
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x35c59301
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x35c59319
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x35c59311
- (id)substituteFontForFont:(id)font;	// 0x35c592d5
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x35c59305
@end
