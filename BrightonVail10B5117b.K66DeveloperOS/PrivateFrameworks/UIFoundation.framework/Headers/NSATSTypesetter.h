/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTypesetter.h"

@class NSParagraphStyle, NSAttributedString, NSArray, NSTextContainer, NSLayoutManager;

@interface NSATSTypesetter : NSTypesetter {
	NSAttributedString *attributedString;	// 8 = 0x8
	NSRange paragraphGlyphRange;	// 12 = 0xc
	NSRange paragraphSeparatorGlyphRange;	// 20 = 0x14
	float lineFragmentPadding;	// 28 = 0x1c
	NSLayoutManager *layoutManager;	// 32 = 0x20
	NSArray *textContainers;	// 36 = 0x24
	NSTextContainer *currentTextContainer;	// 40 = 0x28
	unsigned currentTextContainerIndex;	// 44 = 0x2c
	CGSize currentTextContainerSize;	// 48 = 0x30
	NSParagraphStyle *currentParagraphStyle;	// 56 = 0x38
	void *_atsReserved[8];	// 60 = 0x3c
	id _private;	// 92 = 0x5c
}
+ (BOOL)_allowsScreenFontKerning;	// 0x35c4c9dd
+ (void)initialize;	// 0x35c4c725
+ (id)sharedInstance;	// 0x35c4c87d
+ (id)sharedTypesetter;	// 0x35c4c8dd
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x35c4f2e9
- (int)_baseWritingDirection;	// 0x35c4cba1
- (BOOL)_baselineRenderingMode;	// 0x35c4ce81
- (const char *)_bidiLevels;	// 0x35c4cc31
- (CTTypesetterRef)_ctTypesetter;	// 0x35c4ccc5
- (void)_doBidiProcessing;	// 0x35c4c9ed
- (void)_flushCachedObjects;	// 0x35c4e15d
- (BOOL)_forceTruncation;	// 0x35c4cf7d
- (BOOL)_forceWordWrapping;	// 0x35c4d079
- (id)_getATSTypesetterGuts;	// 0x35c4ce1d
- (BOOL)_isDeallocating;	// 0x35c4c8fd
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned *)index characterIndex:(unsigned *)index2 atPoint:(CGPoint *)point renderingContext:(id *)context;	// 0x35c4d175
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x35c4f315
- (void)_setBaselineRenderingMode:(BOOL)mode;	// 0x35c4cef1
- (void)_setForceTruncation:(BOOL)truncation;	// 0x35c4cfed
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x35c4d0e9
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x35c4e1f9
- (BOOL)_tryRetain;	// 0x35c4c8f9
- (BOOL)_usesScreenFonts;	// 0x35c4e1f5
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x35c4e779
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x35c4f0d5
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x35c4e52d
- (void)beginParagraph;	// 0x35c4e239
- (void)dealloc;	// 0x35c4c991
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x35c4e6c5
- (void)endParagraph;	// 0x35c4e3a1
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)index;	// 0x35c4ead9
- (float)hyphenationFactorForGlyphAtIndex:(unsigned)index;	// 0x35c4ea91
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x35c4edc5
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x35c4eae1
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x35c4e7a5
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect remainingRect:(CGRect *)rect;	// 0x35c4f381
- (oneway void)release;	// 0x35c4c901
@end
