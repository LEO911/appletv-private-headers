/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSGlyphStorage.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSStorage, NSTextContainer, NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, UIFont, NSRunStorage, NSSortedArray;

@interface NSLayoutManager : NSObject <NSCoding, NSGlyphStorage> {
	NSTextStorage *_textStorage;	// 4 = 0x4
	NSGlyphGenerator *_glyphGenerator;	// 8 = 0x8
	NSTypesetter *_typesetter;	// 12 = 0xc
	NSMutableArray *_textContainers;	// 16 = 0x10
	NSStorage *_containerUsedRects;	// 20 = 0x14
	NSStorage *_glyphs;	// 24 = 0x18
	NSRunStorage *_containerRuns;	// 28 = 0x1c
	NSRunStorage *_fragmentRuns;	// 32 = 0x20
	NSRunStorage *_glyphLocations;	// 36 = 0x24
	NSRunStorage *_glyphRotationRuns;	// 40 = 0x28
	CGRect _extraLineFragmentRect;	// 44 = 0x2c
	CGRect _extraLineFragmentUsedRect;	// 60 = 0x3c
	NSTextContainer *_extraLineFragmentContainer;	// 76 = 0x4c
	NSSortedArray *_glyphHoles;	// 80 = 0x50
	NSSortedArray *_layoutHoles;	// 84 = 0x54
	lmFlags _lmFlags;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	unsigned short _textViewResizeDisableStack;	// 96 = 0x60
	unsigned short _displayInvalidationDisableStack;	// 98 = 0x62
	NSRange _deferredDisplayCharRange;	// 100 = 0x64
	CGRect *_cachedRectArray;	// 108 = 0x6c
	unsigned _cachedRectArrayCapacity;	// 112 = 0x70
	char *_glyphBuffer;	// 116 = 0x74
	unsigned _glyphBufferSize;	// 120 = 0x78
	NSRange _cachedLocationNominalGlyphRange;	// 124 = 0x7c
	unsigned _cachedLocationGlyphIndex;	// 132 = 0x84
	CGPoint _cachedLocation;	// 136 = 0x88
	NSRange _cachedFontCharRange;	// 144 = 0x90
	UIFont *_cachedFont;	// 152 = 0x98
	unsigned _firstUnlaidGlyphIndex;	// 156 = 0x9c
	unsigned _firstUnlaidCharIndex;	// 160 = 0xa0
	NSRange _newlyFilledGlyphRange;	// 164 = 0xa4
	id _extraData;	// 172 = 0xac
}
@property(assign) BOOL allowsNonContiguousLayout;	// G=0x37562dd1; S=0x37562d1d; converted property
@property(assign) BOOL backgroundLayoutEnabled;	// G=0x37562f21; S=0x37562ebd; converted property
@property(assign) id delegate;	// G=0x37562349; S=0x37562359; converted property
@property(readonly, assign) CGRect extraLineFragmentRect;	// G=0x37564ec9; converted property
@property(readonly, assign) CGRect extraLineFragmentUsedRect;	// G=0x37564edd; converted property
@property(readonly, assign) unsigned firstUnlaidGlyphIndex;	// G=0x375648e9; converted property
@property(assign) BOOL flipsIfNeeded;	// G=0x3755c1ad; S=0x3755c1c5; converted property
@property(retain) NSGlyphGenerator *glyphGenerator;	// G=0x375620bd; S=0x37562105; converted property
@property(assign) float hyphenationFactor;	// G=0x375631e1; S=0x37563145; converted property
@property(assign) BOOL ignoresAntialiasThreshold;	// G=0x3755c341; S=0x3755c345; converted property
@property(assign) BOOL ignoresViewTransformations;	// G=0x3755c271; S=0x3755c289; converted property
@property(assign) BOOL showsControlCharacters;	// G=0x37563131; S=0x37563099; converted property
@property(assign) BOOL showsInvisibleCharacters;	// G=0x37563085; S=0x37562fed; converted property
@property(readonly, retain) NSMutableArray *textContainers;	// G=0x37562431; converted property
@property(retain) NSTextStorage *textStorage;	// G=0x3756183d; S=0x3756185d; converted property
@property(retain) NSTypesetter *typesetter;	// G=0x375621fd; S=0x37562255; converted property
@property(assign) int typesetterBehavior;	// G=0x37563225; S=0x37563201; converted property
@property(assign) BOOL usesFontLeading;	// G=0x37568bed; S=0x37568c05; converted property
@property(assign) BOOL usesScreenFonts;	// G=0x37562f35; S=0x37562f49; converted property
+ (id)_defaultLinkAttributes;	// 0x3754f18d
+ (void)_doSomeBackgroundLayout;	// 0x37552461
+ (BOOL)_ignoresViewTransformations;	// 0x375608e5
+ (BOOL)_inBackgroundLayout;	// 0x3755245d
+ (BOOL)_showsControlCharacters;	// 0x375608f9
+ (BOOL)_showsInvisibleCharacters;	// 0x375608e9
+ (BOOL)_usesScreenFonts;	// 0x375608e1
+ (void)initialize;	// 0x37560769
- (id)init;	// 0x37560df9
- (id)initWithCoder:(id)coder;	// 0x375612c5
- (void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)rawGlyphRange byDelta:(int)delta;	// 0x3755025d
- (BOOL)_alwaysDrawsActive;	// 0x3755c349
- (id)_attachmentSizesRun;	// 0x3755bdbd
- (id)_blockDescription;	// 0x37553161
- (NSRange)_blockRangeForCharRange:(NSRange)charRange;	// 0x3754f271
- (NSRange)_blockRangeForGlyphRange:(NSRange)glyphRange;	// 0x3754f545
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange;	// 0x3754f8cd
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange completeRows:(BOOL *)rows;	// 0x3754f5b1
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange;	// 0x3754f975
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange completeRows:(BOOL *)rows;	// 0x3754f8f9
- (CGRect)_boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer fast:(BOOL)fast fullLineRectsOnly:(BOOL)only;	// 0x37555ed5
- (BOOL)_canDoLayout;	// 0x37550261
- (NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)andAfterContainer;	// 0x37562441
- (void)_clearCurrentAttachmentSettings;	// 0x3755be75
- (void)_clearTemporaryAttributes;	// 0x3755be9d
- (void)_clearTemporaryAttributesForCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x3755bee1
- (void)_commonInit;	// 0x37560909
- (id)_containerDescription;	// 0x37552469
- (unsigned)_currentAttachmentIndex;	// 0x3755bdf9
- (CGRect)_currentAttachmentRect;	// 0x3755bdc1
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)glyphIndex nextGlyphIndex:(unsigned *)index;	// 0x375506c9
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)glyphIndex forCharacterRange:(NSRange)characterRange inTextContainer:(id)textContainer lineLimit:(unsigned)limit nextGlyphIndex:(unsigned *)index;	// 0x375506c1
- (void)_drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point parameters:(NSDrawingParameters *)parameters;	// 0x37559321
- (void)_drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x37559be9
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders;	// 0x3755e3d1
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders flipped:(BOOL)flipped;	// 0x3755df01
- (void)_drawLineForGlyphRange:(NSRange)glyphRange type:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x3755e431
- (BOOL)_drawsUnderlinesLikeWebKit;	// 0x3755d9a1
- (NSRange)_extendedCharRangeForInvalidation:(NSRange)invalidation editedCharRange:(NSRange)range;	// 0x3754fa69
- (void)_fillGlyphHoleAtIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x375502b1
- (void)_fillGlyphHoleForCharacterRange:(NSRange)characterRange startGlyphIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x37550345
- (void)_fillLayoutHoleAtIndex:(unsigned)index desiredNumberOfLines:(unsigned)lines;	// 0x37551fc9
- (void)_fillLayoutHoleForCharacterRange:(NSRange)characterRange desiredNumberOfLines:(unsigned)lines isSoft:(BOOL)soft;	// 0x375507e9
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer hintGlyphRange:(NSRange)range okToFillHoles:(BOOL)fillHoles;	// 0x37556745
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x37556dad
- (void)_firstTextViewChanged;	// 0x3755931d
- (void)_fixSelectionAfterChangeInCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x37553db5
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;	// 0x37563701
- (unsigned)_glyphAtIndex:(unsigned)index characterIndex:(unsigned *)index2 glyphInscription:(unsigned *)inscription isValidIndex:(BOOL *)index4;	// 0x3755bb65
- (id)_glyphDescription;	// 0x37552d39
- (id)_glyphDescriptionForGlyphRange:(NSRange)glyphRange;	// 0x37552b51
- (id)_glyphGenerator;	// 0x375620f5
- (id)_glyphHoleDescription;	// 0x37552d6d
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x375522e5
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x37552309
- (id)_glyphLocationDescription;	// 0x37552b3d
- (NSRange)_glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer fast:(BOOL)fast okToFillHoles:(BOOL)fillHoles;	// 0x37557461
- (NSRange)_glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range okToFillHoles:(BOOL)fillHoles;	// 0x37552331
- (id)_glyphTreeDescription;	// 0x37553159
- (void)_growCachedRectArrayToSize:(unsigned)size;	// 0x37553db9
- (BOOL)_hasSeenRightToLeft;	// 0x3755c195
- (unsigned)_indexOfFirstGlyphInTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x3755806d
- (void)_insertGlyphs:(unsigned *)glyphs elasticAttributes:(BOOL *)attributes count:(unsigned)count atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x3755bd59
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned)index;	// 0x3755c791
- (void)_invalidateDisplayIfNeeded;	// 0x37553d39
- (void)_invalidateGlyphsForCharacterRange:(NSRange)characterRange editedCharacterRange:(NSRange)range changeInLength:(int)length actualCharacterRange:(NSRange *)range4;	// 0x37563261
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length;	// 0x37558b39
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length includeBlocks:(BOOL)blocks;	// 0x375586dd
- (void)_invalidateInsertionPoint;	// 0x37553d09
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft;	// 0x375592f9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft invalidateUsage:(BOOL)usage;	// 0x37558b5d
- (void)_invalidateUsageForTextContainersInRange:(NSRange)range;	// 0x37553641
- (BOOL)_isInUILayoutMode;	// 0x3755c14d
- (id)_layoutHoleDescription;	// 0x37552f6d
- (id)_layoutTreeDescription;	// 0x3755315d
- (id)_lineFragmentDescription;	// 0x37552b29
- (id)_lineFragmentDescription:(BOOL)description;	// 0x37552ae5
- (id)_lineFragmentDescriptionForGlyphRange:(NSRange)glyphRange includeGlyphLocations:(BOOL)locations;	// 0x3755280d
- (void)_lineGlyphRange:(NSRange)range type:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x3755fe39
- (void)_markSelfAsDirtyForBackgroundLayout:(id)backgroundLayout;	// 0x37552465
- (void)_mergeGlyphHoles;	// 0x3754f269
- (void)_mergeLayoutHoles;	// 0x3754f26d
- (BOOL)_needToFlushGlyph;	// 0x3755bbf1
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)index;	// 0x375507e1
- (char *)_packedGlyphs:(unsigned)glyphs range:(NSRange)range length:(unsigned *)length;	// 0x37559b09
- (NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)glyphRange;	// 0x3755237d
- (void)_primitiveDeleteGlyphsInRange:(NSRange)range;	// 0x37563df5
- (NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)characterRange;	// 0x375523e1
- (void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x37563501
- (void)_promoteGlyphStoreToFormat:(unsigned)format;	// 0x3755bdb9
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned)index;	// 0x37553695
- (CGRect *)_rectArrayForRange:(NSRange)range withinSelectionRange:(NSRange)range2 rangeIsCharRange:(BOOL)range3 singleRectOnly:(BOOL)only fullLineRectsOnly:(BOOL)only5 inTextContainer:(id)textContainer rectCount:(unsigned *)count rangeWithinContainer:(NSRange *)container glyphsDrawOutsideLines:(BOOL *)lines;	// 0x37553e0d
- (void)_resizeTextViewForTextContainer:(id)textContainer;	// 0x37553dad
- (float)_rotationForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3755ba85
- (id)_rowArrayCache;	// 0x3754f9e5
- (id)_selectedRanges;	// 0x37553db1
- (id)_selectionRangesForInsertionPointRange:(NSRange)insertionPointRange;	// 0x3755d919
- (void)_setAlwaysDrawsActive:(BOOL)active;	// 0x3755c371
- (void)_setCurrentAttachmentRect:(CGRect)rect index:(unsigned)index;	// 0x3755be1d
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)kit;	// 0x3755d91d
- (void)_setGlyphGenerator:(id)generator;	// 0x375621ed
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate integerOffsetPerLineEstimate:(unsigned)estimate2;	// 0x37562e49
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate offsetPerLineEstimate:(float)estimate2;	// 0x37562de5
- (void)_setHasSeenRightToLeft:(BOOL)left;	// 0x3755c171
- (void)_setIsInUILayoutMode:(BOOL)uilayoutMode;	// 0x3755c129
- (void)_setNeedToFlushGlyph:(BOOL)flushGlyph;	// 0x3755bc09
- (void)_setRotation:(float)rotation forGlyphAtIndex:(unsigned)index;	// 0x3755ba4d
- (void)_setRowArrayCache:(id)cache;	// 0x3754fa09
- (void)_showStyledCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context options:(id)options lineHeight:(float)height;	// 0x3755db55
- (void)_simpleDeleteGlyphsInRange:(NSRange)range;	// 0x3755bcc5
- (void)_simpleInsertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index elastic:(BOOL)elastic;	// 0x3755bc2d
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x375522c1
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x37552075
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x375688ad
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x375689c1
- (id)_temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x37568aed
- (void)_updateUsageForTextContainer:(id)textContainer addingUsedRect:(CGRect)rect;	// 0x375533f5
- (NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned)index;	// 0x37553cb5
- (void)addTemporaryAttribute:(id)attribute value:(id)value forCharacterRange:(NSRange)characterRange;	// 0x37568489
- (void)addTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x37568271
- (void)addTextContainer:(id)container;	// 0x3756256d
// converted property getter: - (BOOL)allowsNonContiguousLayout;	// 0x37562dd1
- (CGSize)attachmentSizeForGlyphAtIndex:(unsigned)index;	// 0x3756547d
- (id)attributedString;	// 0x3756184d
// converted property getter: - (BOOL)backgroundLayoutEnabled;	// 0x37562f21
- (float)baselineOffsetForGlyphAtIndex:(unsigned)index;	// 0x3755c24d
- (CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer;	// 0x375669c9
- (CGRect)boundsRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37566469
- (CGRect)boundsRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x37566295
- (unsigned)characterIndexForGlyphAtIndex:(unsigned)index;	// 0x37564021
- (unsigned)characterIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceBetweenInsertionPoints:(float *)distanceBetweenInsertionPoints;	// 0x37567a29
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x375665f1
- (void)dealloc;	// 0x37560f79
- (float)defaultBaselineOffsetForFont:(id)font;	// 0x37568bc1
- (float)defaultLineHeightForFont:(id)font;	// 0x37568b49
// converted property getter: - (id)delegate;	// 0x37562349
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x37563e05
- (id)description;	// 0x375616f9
- (void)drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x3755dad9
- (void)drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x3755db31
- (void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x3755fddd
- (void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x3755fd81
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)index;	// 0x37565461
- (void)encodeWithCoder:(id)coder;	// 0x3756110d
- (void)ensureGlyphsForCharacterRange:(NSRange)characterRange;	// 0x37563931
- (void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;	// 0x37563939
- (void)ensureLayoutForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x37563cb1
- (void)ensureLayoutForCharacterRange:(NSRange)characterRange;	// 0x37563941
- (void)ensureLayoutForGlyphRange:(NSRange)glyphRange;	// 0x37563995
- (void)ensureLayoutForTextContainer:(id)textContainer;	// 0x3756399d
// converted property getter: - (CGRect)extraLineFragmentRect;	// 0x37564ec9
- (id)extraLineFragmentTextContainer;	// 0x37564eed
// converted property getter: - (CGRect)extraLineFragmentUsedRect;	// 0x37564edd
- (void)fillBackgroundRectArray:(CGRect *)array count:(unsigned)count forCharacterRange:(NSRange)characterRange color:(id)color;	// 0x3755db05
- (void)finalize;	// 0x37560e3d
- (unsigned)firstUnlaidCharacterIndex;	// 0x3756470d
// converted property getter: - (unsigned)firstUnlaidGlyphIndex;	// 0x375648e9
// converted property getter: - (BOOL)flipsIfNeeded;	// 0x3755c1ad
- (float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x375679b1
- (void)getFirstUnlaidCharacterIndex:(unsigned *)index glyphIndex:(unsigned *)index2;	// 0x375648fd
- (unsigned)getGlyphs:(unsigned *)glyphs range:(NSRange)range;	// 0x37564139
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits;	// 0x375640c1
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x375640f9
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)index inDisplayOrder:(BOOL)displayOrder positions:(float **)positions characterIndexes:(unsigned **)indexes count:(unsigned *)count alternatePositions:(float **)positions6 characterIndexes:(unsigned **)indexes7 count:(unsigned *)count8;	// 0x3755d7cd
- (unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)index alternatePositions:(BOOL)positions inDisplayOrder:(BOOL)displayOrder positions:(float *)positions4 characterIndexes:(unsigned *)indexes;	// 0x37567f15
- (unsigned)glyphAtIndex:(unsigned)index;	// 0x37563f81
- (unsigned)glyphAtIndex:(unsigned)index isValidIndex:(BOOL *)index2;	// 0x37563f35
// converted property getter: - (id)glyphGenerator;	// 0x375620bd
- (unsigned)glyphIndexForCharacterAtIndex:(unsigned)index;	// 0x37564061
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x37566ae5
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceThroughGlyph:(float *)distanceThroughGlyph;	// 0x375679d1
- (NSRange)glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x37566a1d
- (NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)boundingRectWithoutAdditionalLayout inTextContainer:(id)textContainer;	// 0x37566a79
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x37566561
- (NSRange)glyphRangeForTextContainer:(id)textContainer;	// 0x37566681
- (BOOL)hasNonContiguousLayout;	// 0x37562e65
// converted property getter: - (float)hyphenationFactor;	// 0x375631e1
// converted property getter: - (BOOL)ignoresAntialiasThreshold;	// 0x3755c341
// converted property getter: - (BOOL)ignoresViewTransformations;	// 0x3755c271
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x37563da1
- (void)insertGlyphs:(const unsigned *)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;	// 0x37563d6d
- (void)insertTextContainer:(id)container atIndex:(unsigned)index;	// 0x375625ad
- (int)intAttribute:(int)attribute forGlyphAtIndex:(unsigned)index;	// 0x375640a1
- (void)invalidateDisplayForCharacterRange:(NSRange)characterRange;	// 0x37563505
- (void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x375636b9
- (void)invalidateGlyphsForCharacterRange:(NSRange)characterRange changeInLength:(int)length actualCharacterRange:(NSRange *)range;	// 0x375633f5
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange;	// 0x37563ebd
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x3756341d
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange isSoft:(BOOL)soft actualCharacterRange:(NSRange *)range;	// 0x3756348d
- (BOOL)isValidGlyphIndex:(unsigned)index;	// 0x37564001
- (unsigned)layoutOptions;	// 0x37563245
- (CGRect)layoutRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3756636d
- (CGRect)layoutRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x37566085
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37564e09
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x37564dd1
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37564ea5
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range allowLayout:(BOOL)layout;	// 0x37564e65
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x37564e2d
- (CGPoint)locationForGlyphAtIndex:(unsigned)index;	// 0x37564efd
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned)index;	// 0x37565445
- (unsigned)numberOfGlyphs;	// 0x37563ed5
- (NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)nominallySpacedGlyphsContainingIndex;	// 0x375668b1
- (CGRect *)rectArrayForCharacterRange:(NSRange)characterRange withinSelectedCharacterRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x37566941
- (CGRect *)rectArrayForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x37566985
- (void)removeTemporaryAttribute:(id)attribute forCharacterRange:(NSRange)characterRange;	// 0x375686d5
- (void)removeTextContainerAtIndex:(unsigned)index;	// 0x3756289d
- (void)replaceGlyphAtIndex:(unsigned)index withGlyph:(unsigned)glyph;	// 0x37563dc9
- (void)replaceTextStorage:(id)storage;	// 0x37561f31
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37559a75
// converted property setter: - (void)setAllowsNonContiguousLayout:(BOOL)layout;	// 0x37562d1d
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x375646f5
// converted property setter: - (void)setBackgroundLayoutEnabled:(BOOL)enabled;	// 0x37562ebd
- (void)setBaselineOffset:(float)offset forGlyphAtIndex:(unsigned)index;	// 0x3755c269
- (void)setBoundsRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x37565ecd
- (void)setCharacterIndex:(unsigned)index forGlyphAtIndex:(unsigned)index2;	// 0x37563e4d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x37562359
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphAtIndex:(unsigned)index;	// 0x375646b9
- (void)setExtraLineFragmentRect:(CGRect)rect usedRect:(CGRect)rect2 textContainer:(id)container;	// 0x375643f9
// converted property setter: - (void)setFlipsIfNeeded:(BOOL)needed;	// 0x3755c1c5
// converted property setter: - (void)setGlyphGenerator:(id)generator;	// 0x37562105
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x37563145
// converted property setter: - (void)setIgnoresAntialiasThreshold:(BOOL)threshold;	// 0x3755c345
// converted property setter: - (void)setIgnoresViewTransformations:(BOOL)transformations;	// 0x3755c289
- (void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;	// 0x37563e79
- (void)setLayoutRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x37565a9d
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3;	// 0x37564259
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x3755c1e9
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;	// 0x375645e5
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange coalesceRuns:(BOOL)runs;	// 0x37564581
- (void)setLocations:(CGPoint *)locations startingGlyphIndexes:(unsigned *)indexes count:(unsigned)count forGlyphRange:(NSRange)glyphRange;	// 0x37564649
- (void)setNotShownAttribute:(BOOL)attribute forGlyphAtIndex:(unsigned)index;	// 0x375646b1
// converted property setter: - (void)setShowsControlCharacters:(BOOL)characters;	// 0x37563099
// converted property setter: - (void)setShowsInvisibleCharacters:(BOOL)characters;	// 0x37562fed
- (void)setTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x375680b9
- (void)setTextContainer:(id)container forGlyphRange:(NSRange)glyphRange;	// 0x37564169
// converted property setter: - (void)setTextStorage:(id)storage;	// 0x3756185d
// converted property setter: - (void)setTypesetter:(id)typesetter;	// 0x37562255
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x37563201
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x37568c05
// converted property setter: - (void)setUsesScreenFonts:(BOOL)fonts;	// 0x37562f49
- (void)showAttachmentCell:(id)cell inRect:(CGRect)rect characterIndex:(unsigned)index;	// 0x3755deb5
- (void)showCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context;	// 0x3755dd05
// converted property getter: - (BOOL)showsControlCharacters;	// 0x37563131
// converted property getter: - (BOOL)showsInvisibleCharacters;	// 0x37563085
- (void)strikethroughGlyphRange:(NSRange)range strikethroughType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x375603e5
- (id)substituteFontForFont:(id)font;	// 0x37568b11
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x37568879
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x375688bd
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x37567fa1
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x375689f5
- (void)textContainerChangedGeometry:(id)geometry;	// 0x37562bc1
- (void)textContainerChangedTextView:(id)view;	// 0x37562ced
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37564b4d
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x37564939
// converted property getter: - (id)textContainers;	// 0x37562431
// converted property getter: - (id)textStorage;	// 0x3756183d
- (void)textStorage:(id)storage edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range5;	// 0x37563705
// converted property getter: - (id)typesetter;	// 0x375621fd
// converted property getter: - (int)typesetterBehavior;	// 0x37563225
- (void)underlineGlyphRange:(NSRange)range underlineType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x37560435
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x37564d45
// converted property getter: - (BOOL)usesFontLeading;	// 0x37568bed
// converted property getter: - (BOOL)usesScreenFonts;	// 0x37562f35
@end
