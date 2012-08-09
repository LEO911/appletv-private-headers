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
@property(assign) BOOL coloredBackground;	// G=0x35835651; S=0x35835599; converted property
@property(assign) BOOL multiColumned;	// G=0x3583577d; S=0x358356c5; converted property
@property(assign) int outlineLevel;	// G=0x35835c3d; S=0x35835c4d; converted property
@property(assign) int outlineStyleType;	// G=0x35835c51; S=0x35835c61; converted property
@property(assign) int paragraphCount;	// G=0x3583583d; S=0x3583582d; converted property
@property(assign) int paragraphIndex;	// G=0x3583585d; S=0x3583584d; converted property
@property(assign) CGSize scale;	// G=0x358352d1; S=0x358352bd; converted property
@property(assign) unsigned textScale;	// G=0x35835cad; S=0x35835cbd; converted property
- (id)initWithState:(id)state;	// 0x3583513d
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x35835161
- (id)initWithState:(id)state needIndexFile:(BOOL)file documentSize:(CGSize)size;	// 0x35834e7d
- (id).cxx_construct;	// 0x35835ce9
- (CFStringRef)addCacheForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x358358ad
- (CFStringRef)addCachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x358359dd
- (void)addCachedStyle:(CFStringRef)style;	// 0x35835415
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x358352e9
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x358354b1
- (BOOL)allowInlineWrap;	// 0x35835ce5
- (CFStringRef)cachedClassStringForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula;	// 0x3583586d
- (CFStringRef)cachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span;	// 0x358359a1
- (CFStringRef)className:(id)name;	// 0x35835435
// converted property getter: - (BOOL)coloredBackground;	// 0x35835651
- (CFStringRef)createStyleName:(id)name type:(const char *)type;	// 0x358354b5
- (CFStringRef)createUniqueShapeId:(const char *)anId;	// 0x35835c65
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x358354ed
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x3583551d
- (void)dealloc;	// 0x35835185
- (BOOL)drawablesNeedCssZOrdering;	// 0x358354e9
- (void)enterGraphicObject;	// 0x35835795
- (BOOL)finishMainHtml;	// 0x35835469
- (CFStringRef)getColorString:(id)string;	// 0x35835ac9
- (id)htmlDoc;	// 0x358352ad
- (id)implicitStyle;	// 0x3583553d
- (int)indexForStyle:(const char *)style;	// 0x35835ced
- (void)invalidateTextScale;	// 0x35835ccd
- (void)leaveGraphicObject;	// 0x358357dd
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x35835355
- (CFStringRef)makeInlineStyle:(CFStringRef)style inDocument:(id)document;	// 0x35835375
// converted property getter: - (BOOL)multiColumned;	// 0x3583577d
- (BOOL)needAbsolutelyPositionedTables;	// 0x35835ce1
// converted property getter: - (int)outlineLevel;	// 0x35835c3d
// converted property getter: - (int)outlineStyleType;	// 0x35835c51
// converted property getter: - (int)paragraphCount;	// 0x3583583d
// converted property getter: - (int)paragraphIndex;	// 0x3583585d
- (void)popImplicitStyle;	// 0x3583556d
- (id)processorState;	// 0x35835459
- (void)pushImplicitStyle:(id)style;	// 0x35835529
// converted property getter: - (CGSize)scale;	// 0x358352d1
// converted property setter: - (void)setColoredBackground:(BOOL)background;	// 0x35835599
// converted property setter: - (void)setMultiColumned:(BOOL)columned;	// 0x358356c5
// converted property setter: - (void)setOutlineLevel:(int)level;	// 0x35835c4d
// converted property setter: - (void)setOutlineStyleType:(int)type;	// 0x35835c61
// converted property setter: - (void)setParagraphCount:(int)count;	// 0x3583582d
// converted property setter: - (void)setParagraphIndex:(int)index;	// 0x3583584d
// converted property setter: - (void)setScale:(CGSize)scale;	// 0x358352bd
// converted property setter: - (void)setTextScale:(unsigned)scale;	// 0x35835cbd
- (id)shapeContext;	// 0x35835c29
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x35835c05
- (id)tableState;	// 0x35835449
// converted property getter: - (unsigned)textScale;	// 0x35835cad
- (BOOL)useOutline;	// 0x35835c39
@end
