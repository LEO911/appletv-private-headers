/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNode.h"

@class EDWarnings, TSUPointerKeyDictionary, EDWorkbook, ESDContainer, EDString, EDProcessors, NSMutableArray, EDPageSetup, EDHeaderFooter, EDColorReference;

@interface EDSheet : OCDDelayedNode {
	EDWorkbook *mWorkbook;	// 12 = 0xc
	EDString *mName;	// 16 = 0x10
	bool mHidden;	// 20 = 0x14
	bool mDisplayFormulas;	// 21 = 0x15
	bool mDisplayGridlines;	// 22 = 0x16
	bool mIsDialogSheet;	// 23 = 0x17
	EDColorReference *mDefaultGridlineColorReference;	// 24 = 0x18
	EDHeaderFooter *mHeaderFooter;	// 28 = 0x1c
	EDPageSetup *mPageSetup;	// 32 = 0x20
	NSMutableArray *mDrawables;	// 36 = 0x24
	TSUPointerKeyDictionary *mTextBoxMap;	// 40 = 0x28
	TSUPointerKeyDictionary *mCommentMap;	// 44 = 0x2c
	EDProcessors *mProcessors;	// 48 = 0x30
	EDWarnings *mWarnings;	// 52 = 0x34
	ESDContainer *mEscherDrawing;	// 56 = 0x38
}
@property(retain) id defaultGridlineColor;	// G=0x33b81c4d; S=0x33b81c6d; converted property
@property(retain) id defaultGridlineColorReference;	// G=0x33b81e15; S=0x339f7c31; converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// G=0x33a0db69; S=0x33a07cd9; converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// G=0x33a0f5d5; S=0x33a07ce9; converted property
@property(retain) id escherDrawing;	// G=0x33b81dc9; S=0x33b81dd9; converted property
@property(retain) id headerFooter;	// G=0x33b81cf1; S=0x339fcbb1; converted property
@property(assign, getter=isHidden) bool hidden;	// G=0x339f87e5; S=0x339f7cb9; converted property
@property(assign, nonatomic) bool isDialogSheet;	// G=0x33b81db1; S=0x339fc265; @synthesize=mIsDialogSheet
@property(retain) id name;	// G=0x33a0d099; S=0x339f7c75; converted property
@property(retain) id pageSetup;	// G=0x33a645cd; S=0x339fcdcd; converted property
+ (id)sheetWithWorkbook:(id)workbook;	// 0x33b81b79
- (id)initWithWorkbook:(id)workbook;	// 0x339f78a1
- (void)addDrawable:(id)drawable;	// 0x33a06905
- (void)applyProcessors;	// 0x33a0b1c9
- (void)dealloc;	// 0x33a163cd
// converted property getter: - (id)defaultGridlineColor;	// 0x33b81c4d
// converted property getter: - (id)defaultGridlineColorReference;	// 0x33b81e15
- (void)doneWithNonRowContent;	// 0x33b81bc5
- (id)drawableAtIndex:(unsigned)index;	// 0x33a0e23d
- (unsigned)drawableCount;	// 0x33a0e21d
- (id)drawableEnumerator;	// 0x33b81e25
- (id)drawables;	// 0x33b81d21
- (id)edCommentForShape:(id)shape;	// 0x33b81d71
- (id)edTextBoxForShape:(id)shape;	// 0x33b81d31
// converted property getter: - (id)escherDrawing;	// 0x33b81dc9
// converted property getter: - (id)headerFooter;	// 0x33b81cf1
// declared property getter: - (bool)isDialogSheet;	// 0x33b81db1
// converted property getter: - (bool)isDisplayFormulas;	// 0x33a0db69
// converted property getter: - (bool)isDisplayGridlines;	// 0x33a0f5d5
// converted property getter: - (bool)isHidden;	// 0x339f87e5
// converted property getter: - (id)name;	// 0x33a0d099
// converted property getter: - (id)pageSetup;	// 0x33a645cd
- (id)processors;	// 0x339fbd69
- (void)reduceMemoryIfPossible;	// 0x33b81dc5
- (void)removeDrawableAtIndex:(unsigned)index;	// 0x33b81d01
// converted property setter: - (void)setDefaultGridlineColor:(id)color;	// 0x33b81c6d
// converted property setter: - (void)setDefaultGridlineColorReference:(id)reference;	// 0x339f7c31
// converted property setter: - (void)setDisplayFormulas:(bool)formulas;	// 0x33a07cd9
// converted property setter: - (void)setDisplayGridlines:(bool)gridlines;	// 0x33a07ce9
- (void)setEDComment:(id)comment forShape:(id)shape;	// 0x33b81d91
- (void)setEDTextBox:(id)box forShape:(id)shape;	// 0x33b81d51
// converted property setter: - (void)setEscherDrawing:(id)drawing;	// 0x33b81dd9
// converted property setter: - (void)setHeaderFooter:(id)footer;	// 0x339fcbb1
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x339f7cb9
// declared property setter: - (void)setIsDialogSheet:(bool)sheet;	// 0x339fc265
// converted property setter: - (void)setName:(id)name;	// 0x339f7c75
// converted property setter: - (void)setPageSetup:(id)setup;	// 0x339fcdcd
- (void)setup;	// 0x339f7aad
- (void)teardown;	// 0x33a15ce9
- (id)warnings;	// 0x33b0da2d
- (id)workbook;	// 0x33af0865
@end
