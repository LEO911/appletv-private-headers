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
+ (BOOL)_allowsScreenFontKerning;	// 0x32c609dd
+ (void)initialize;	// 0x32c60725
+ (id)sharedInstance;	// 0x32c6087d
+ (id)sharedTypesetter;	// 0x32c608dd
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x32c632e9
- (int)_baseWritingDirection;	// 0x32c60ba1
- (BOOL)_baselineRenderingMode;	// 0x32c60e81
- (const char *)_bidiLevels;	// 0x32c60c31
- (CTTypesetterRef)_ctTypesetter;	// 0x32c60cc5
- (void)_doBidiProcessing;	// 0x32c609ed
- (void)_flushCachedObjects;	// 0x32c6215d
- (BOOL)_forceTruncation;	// 0x32c60f7d
- (BOOL)_forceWordWrapping;	// 0x32c61079
- (id)_getATSTypesetterGuts;	// 0x32c60e1d
- (BOOL)_isDeallocating;	// 0x32c608fd
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned *)index characterIndex:(unsigned *)index2 atPoint:(CGPoint *)point renderingContext:(id *)context;	// 0x32c61175
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x32c63315
- (void)_setBaselineRenderingMode:(BOOL)mode;	// 0x32c60ef1
- (void)_setForceTruncation:(BOOL)truncation;	// 0x32c60fed
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x32c610e9
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x32c621f9
- (BOOL)_tryRetain;	// 0x32c608f9
- (BOOL)_usesScreenFonts;	// 0x32c621f5
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x32c62779
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x32c630d5
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x32c6252d
- (void)beginParagraph;	// 0x32c62239
- (void)dealloc;	// 0x32c60991
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x32c626c5
- (void)endParagraph;	// 0x32c623a1
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)index;	// 0x32c62ad9
- (float)hyphenationFactorForGlyphAtIndex:(unsigned)index;	// 0x32c62a91
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x32c62dc5
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x32c62ae1
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x32c627a5
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect remainingRect:(CGRect *)rect;	// 0x32c63381
- (oneway void)release;	// 0x32c60901
@end
