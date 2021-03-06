/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQSDocument, GQHTableState, GQHXML;
@protocol GQHContext;

@interface GQHState : NSObject {
	GQHXML *mHtmlDoc;	// 4 = 0x4
	CGSize mScale;	// 8 = 0x8
	CFStringRef mStyleData;	// 16 = 0x10
	GQHTableState *mTableState;	// 20 = 0x14
	GQSDocument *mProcessorState;	// 24 = 0x18
	CFDictionaryRef mStyleIndexes;	// 28 = 0x1c
	CFDictionaryRef mStyleNameMap;	// 32 = 0x20
	CFArrayRef mImplicitStyles;	// 36 = 0x24
	int mColoredBackgroundLayerCount;	// 40 = 0x28
	int mMultiColumnedDepth;	// 44 = 0x2c
	CFArrayRef mGraphicPropertiesStack;	// 48 = 0x30
	int mParagraphCount;	// 52 = 0x34
	int mParagraphIndex;	// 56 = 0x38
	int mCachedCellStyleIndex;	// 60 = 0x3c
	CFDictionaryRef mCachedTableStyles;	// 64 = 0x40
	int mCachedTextStyleIndex;	// 68 = 0x44
	CFDictionaryRef mCachedTextStyles;	// 72 = 0x48
	int mInlineStyleIndex;	// 76 = 0x4c
	CFDictionaryRef mInlineStyles;	// 80 = 0x50
	CFDictionaryRef mColorStrings;	// 84 = 0x54
	id<GQHContext> mShapeContext;	// 88 = 0x58
	int mOutlineLevel;	// 92 = 0x5c
	int mOutlineStyleType;	// 96 = 0x60
	int mShapeIDCounter;	// 100 = 0x64
	unsigned mTextScale;	// 104 = 0x68
}
@property(assign) BOOL coloredBackground;	// G=0x34c0cf59; S=0x34c0cea1; converted property
@property(assign) BOOL multiColumned;	// G=0x34c0d085; S=0x34c0cfcd; converted property
@property(assign) int outlineLevel;	// G=0x34c0d545; S=0x34c0d555; converted property
@property(assign) int outlineStyleType;	// G=0x34c0d559; S=0x34c0d569; converted property
@property(assign) int paragraphCount;	// G=0x34c0d145; S=0x34c0d135; converted property
@property(assign) int paragraphIndex;	// G=0x34c0d165; S=0x34c0d155; converted property
@property(assign) CGSize scale;	// G=0x34c0cbd9; S=0x34c0cbc5; converted property
@property(assign) unsigned textScale;	// G=0x34c0d5b5; S=0x34c0d5c5; converted property
- (id)initWithState:(id)state;	// 0x34c0ca45
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x34c0ca69
- (id)initWithState:(id)state needIndexFile:(BOOL)file documentSize:(CGSize)size;	// 0x34c0c785
- (id).cxx_construct;	// 0x34c0d5f1
- (CFStringRef)addCacheForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x34c0d1b5
- (CFStringRef)addCachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x34c0d2e5
- (void)addCachedStyle:(CFStringRef)style;	// 0x34c0cd1d
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x34c0cbf1
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x34c0cdb9
- (BOOL)allowInlineWrap;	// 0x34c0d5ed
- (CFStringRef)cachedClassStringForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula;	// 0x34c0d175
- (CFStringRef)cachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span;	// 0x34c0d2a9
- (CFStringRef)className:(id)name;	// 0x34c0cd3d
// converted property getter: - (BOOL)coloredBackground;	// 0x34c0cf59
- (CFStringRef)createStyleName:(id)name type:(const char *)type;	// 0x34c0cdbd
- (CFStringRef)createUniqueShapeId:(const char *)anId;	// 0x34c0d56d
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x34c0cdf5
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x34c0ce25
- (void)dealloc;	// 0x34c0ca8d
- (BOOL)drawablesNeedCssZOrdering;	// 0x34c0cdf1
- (void)enterGraphicObject;	// 0x34c0d09d
- (BOOL)finishMainHtml;	// 0x34c0cd71
- (CFStringRef)getColorString:(id)string;	// 0x34c0d3d1
- (id)htmlDoc;	// 0x34c0cbb5
- (id)implicitStyle;	// 0x34c0ce45
- (int)indexForStyle:(const char *)style;	// 0x34c0d5f5
- (void)invalidateTextScale;	// 0x34c0d5d5
- (void)leaveGraphicObject;	// 0x34c0d0e5
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x34c0cc5d
- (CFStringRef)makeInlineStyle:(CFStringRef)style inDocument:(id)document;	// 0x34c0cc7d
// converted property getter: - (BOOL)multiColumned;	// 0x34c0d085
- (BOOL)needAbsolutelyPositionedTables;	// 0x34c0d5e9
// converted property getter: - (int)outlineLevel;	// 0x34c0d545
// converted property getter: - (int)outlineStyleType;	// 0x34c0d559
// converted property getter: - (int)paragraphCount;	// 0x34c0d145
// converted property getter: - (int)paragraphIndex;	// 0x34c0d165
- (void)popImplicitStyle;	// 0x34c0ce75
- (id)processorState;	// 0x34c0cd61
- (void)pushImplicitStyle:(id)style;	// 0x34c0ce31
// converted property getter: - (CGSize)scale;	// 0x34c0cbd9
// converted property setter: - (void)setColoredBackground:(BOOL)background;	// 0x34c0cea1
// converted property setter: - (void)setMultiColumned:(BOOL)columned;	// 0x34c0cfcd
// converted property setter: - (void)setOutlineLevel:(int)level;	// 0x34c0d555
// converted property setter: - (void)setOutlineStyleType:(int)type;	// 0x34c0d569
// converted property setter: - (void)setParagraphCount:(int)count;	// 0x34c0d135
// converted property setter: - (void)setParagraphIndex:(int)index;	// 0x34c0d155
// converted property setter: - (void)setScale:(CGSize)scale;	// 0x34c0cbc5
// converted property setter: - (void)setTextScale:(unsigned)scale;	// 0x34c0d5c5
- (id)shapeContext;	// 0x34c0d531
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x34c0d50d
- (id)tableState;	// 0x34c0cd51
// converted property getter: - (unsigned)textScale;	// 0x34c0d5b5
- (BOOL)useOutline;	// 0x34c0d541
@end

