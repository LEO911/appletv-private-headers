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
@property(retain) id defaultGridlineColor;	// G=0x3712961d; S=0x3712963d; converted property
@property(retain) id defaultGridlineColorReference;	// G=0x371297e5; S=0x36f9f599; converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// G=0x36fb54d1; S=0x36faf641; converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// G=0x36fb6f3d; S=0x36faf651; converted property
@property(retain) id escherDrawing;	// G=0x37129799; S=0x371297a9; converted property
@property(retain) id headerFooter;	// G=0x371296c1; S=0x36fa4519; converted property
@property(assign, getter=isHidden) bool hidden;	// G=0x36fa014d; S=0x36f9f621; converted property
@property(assign, nonatomic) bool isDialogSheet;	// G=0x37129781; S=0x36fa3bcd; @synthesize=mIsDialogSheet
@property(retain) id name;	// G=0x36fb4a01; S=0x36f9f5dd; converted property
@property(retain) id pageSetup;	// G=0x3700bf35; S=0x36fa4735; converted property
+ (id)sheetWithWorkbook:(id)workbook;	// 0x37129549
- (id)initWithWorkbook:(id)workbook;	// 0x36f9f209
- (void)addDrawable:(id)drawable;	// 0x36fae26d
- (void)applyProcessors;	// 0x36fb2b31
- (void)dealloc;	// 0x36fbdd35
// converted property getter: - (id)defaultGridlineColor;	// 0x3712961d
// converted property getter: - (id)defaultGridlineColorReference;	// 0x371297e5
- (void)doneWithNonRowContent;	// 0x37129595
- (id)drawableAtIndex:(unsigned)index;	// 0x36fb5ba5
- (unsigned)drawableCount;	// 0x36fb5b85
- (id)drawableEnumerator;	// 0x371297f5
- (id)drawables;	// 0x371296f1
- (id)edCommentForShape:(id)shape;	// 0x37129741
- (id)edTextBoxForShape:(id)shape;	// 0x37129701
// converted property getter: - (id)escherDrawing;	// 0x37129799
// converted property getter: - (id)headerFooter;	// 0x371296c1
// declared property getter: - (bool)isDialogSheet;	// 0x37129781
// converted property getter: - (bool)isDisplayFormulas;	// 0x36fb54d1
// converted property getter: - (bool)isDisplayGridlines;	// 0x36fb6f3d
// converted property getter: - (bool)isHidden;	// 0x36fa014d
// converted property getter: - (id)name;	// 0x36fb4a01
// converted property getter: - (id)pageSetup;	// 0x3700bf35
- (id)processors;	// 0x36fa36d1
- (void)reduceMemoryIfPossible;	// 0x37129795
- (void)removeDrawableAtIndex:(unsigned)index;	// 0x371296d1
// converted property setter: - (void)setDefaultGridlineColor:(id)color;	// 0x3712963d
// converted property setter: - (void)setDefaultGridlineColorReference:(id)reference;	// 0x36f9f599
// converted property setter: - (void)setDisplayFormulas:(bool)formulas;	// 0x36faf641
// converted property setter: - (void)setDisplayGridlines:(bool)gridlines;	// 0x36faf651
- (void)setEDComment:(id)comment forShape:(id)shape;	// 0x37129761
- (void)setEDTextBox:(id)box forShape:(id)shape;	// 0x37129721
// converted property setter: - (void)setEscherDrawing:(id)drawing;	// 0x371297a9
// converted property setter: - (void)setHeaderFooter:(id)footer;	// 0x36fa4519
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x36f9f621
// declared property setter: - (void)setIsDialogSheet:(bool)sheet;	// 0x36fa3bcd
// converted property setter: - (void)setName:(id)name;	// 0x36f9f5dd
// converted property setter: - (void)setPageSetup:(id)setup;	// 0x36fa4735
- (void)setup;	// 0x36f9f415
- (void)teardown;	// 0x36fbd651
- (id)warnings;	// 0x370b536d
- (id)workbook;	// 0x370981a5
@end

