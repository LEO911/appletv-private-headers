/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <NSObject.h> // Unknown library
#import "CoreText-Structs.h"


__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject {
@private
	long _count;	// 4 = 0x4
	const unsigned short *_glyphs;	// 8 = 0x8
	const CGSize *_advances;	// 12 = 0xc
	const unsigned *_props;	// 16 = 0x10
	const int *_stringIndices;	// 20 = 0x14
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x30c5dc85
- (id)initWithCount:(long)count;	// 0x30c46499
- (long)attachmentCountAtIndex:(long)index;	// 0x30c5daa1
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x30c5da6d
- (void)disposeGlyphStack;	// 0x30c5dd15
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x30c5dbf1
- (BOOL)isEqual:(id)equal;	// 0x30c5d9a5
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x30c5dc51
- (void)popGlyphAtIndex:(long)index;	// 0x30c5dce5
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x30c5dbc1
- (void)pushGlyphAtIndex:(long)index;	// 0x30c5dcb5
- (void *)refCon;	// 0x30c5da9d
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x30c5db61
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x30c5dad1
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x30c5db31
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x30c5db01
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x30c5db91
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x30c5dc21
- (void)sync;	// 0x30c5dc81
@end

