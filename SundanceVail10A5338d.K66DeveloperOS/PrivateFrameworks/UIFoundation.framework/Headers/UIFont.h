/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <UIFont.h> // Unknown library


@interface UIFont (UIFont_AttributedStringDrawing)
+ (id)fontWithCTFont:(CTFontRef)ctfont;	// 0x368d62c5
+ (id)fontWithDescriptor:(CTFontDescriptorRef)descriptor size:(float)size;	// 0x368d617d
+ (id)userFontOfSize:(float)size;	// 0x368d616d
- (CTFontRef)CTFont;	// 0x368d6149
- (CTFontDescriptorRef)CTFontDescriptor;	// 0x368d6349
- (float)_ascenderDeltaForBehavior:(int)behavior;	// 0x368d6401
- (CGFontRef)_backingCGSFont;	// 0x368d66d9
- (float)_baseLineHeightForFont:(BOOL)font;	// 0x368d6399
- (unsigned)_defaultGlyphForChar:(unsigned short)aChar;	// 0x368d6879
- (float)_defaultLineHeightForUILayout;	// 0x368d69ad
- (id)_familyName;	// 0x368d6861
- (BOOL)_isDefaultFace;	// 0x368d6161
- (BOOL)_isHiraginoFont;	// 0x368d637d
- (id)_kernOverride;	// 0x368d64f9
- (const unsigned short *)_latin1MappingTable:(bool *)table;	// 0x368d6871
- (float)_leading;	// 0x368d6381
- (CGAffineTransform)_textMatrixTransformForContext:(CGContextRef)context;	// 0x368d6405
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short *)nativeGlyphs count:(long)count;	// 0x368d6501
- (CGSize)advancementForGlyph:(unsigned)glyph;	// 0x368d6719
- (id)bestMatchingFontForCharacters:(const unsigned short *)characters length:(unsigned)length attributes:(id)attributes actualCoveredLength:(unsigned *)length4;	// 0x368d68dd
- (CGRect)boundingRectForFont;	// 0x368d66dd
- (id)coveredCharacterSet;	// 0x368d615d
- (CTFontRef)ctFontRef;	// 0x368d614d
- (void)getAdvancements:(CGSize *)advancements forGlyphs:(const unsigned *)glyphs count:(unsigned)count;	// 0x368d653d
- (void)getAdvancements:(CGSize *)advancements forPackedGlyphs:(const void *)packedGlyphs length:(unsigned)length;	// 0x368d66a5
- (void)getBoundingRects:(CGRect *)rects forCGGlyphs:(const unsigned short *)cgglyphs count:(unsigned)count;	// 0x368d68ad
- (unsigned)getCaretPositions:(float *)positions forGlyph:(unsigned)glyph maximumLength:(unsigned)length;	// 0x368d6809
- (unsigned)glyphWithName:(id)name;	// 0x368d6329
- (unsigned)hyphenGlyphForLocale:(id)locale;	// 0x368d67b9
- (BOOL)isVertical;	// 0x368d6379
- (id)lastResortFont;	// 0x368d6969
- (unsigned)numberOfGlyphs;	// 0x368d630d
- (unsigned)renderingMode;	// 0x368d64fd
- (id)screenFontWithRenderingMode:(unsigned)renderingMode;	// 0x368d67b5
- (void)setInContext:(CGContextRef)context;	// 0x368d6469
- (float)underlineThickness;	// 0x368d6715
- (id)verticalFont;	// 0x368d6375
@end
