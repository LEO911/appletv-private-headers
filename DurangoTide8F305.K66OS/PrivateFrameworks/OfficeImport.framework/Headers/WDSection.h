/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject {
@private
	unsigned mOriginal : 1;	// 4 = 0x4
	unsigned mTracked : 1;	// 4 = 0x4
	unsigned mResolved : 1;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDText *mEvenPageHeader;	// 16 = 0x10
	WDText *mOddPageHeader;	// 20 = 0x14
	WDText *mFirstPageHeader;	// 24 = 0x18
	WDText *mEvenPageFooter;	// 28 = 0x1c
	WDText *mOddPageFooter;	// 32 = 0x20
	WDText *mFirstPageFooter;	// 36 = 0x24
	XXStruct_RW4LwA mOriginalProperties;	// 40 = 0x28
	XXStruct_RW4LwA mTrackedProperties;	// 172 = 0xac
}
@property(assign) int borderDepth;	// G=0x345dd315; S=0x344c6c5d; converted property
@property(assign) int borderDisplay;	// G=0x345dd425; S=0x344c6ca9; converted property
@property(assign) int borderOffset;	// G=0x345dd539; S=0x344c6cf5; converted property
@property(assign) unsigned long bottomMargin;	// G=0x34493551; S=0x34492155; converted property
@property(assign) int breakType;	// G=0x344d61f9; S=0x344c6bc5; converted property
@property(assign) int chapterNumberSeparator;	// G=0x345dde2d; S=0x345ddeb1; converted property
@property(assign) unsigned short columnCount;	// G=0x345ddf8d; S=0x344c6de9; converted property
@property(assign) long columnSpace;	// G=0x345de099; S=0x344c6f51; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x345de011; S=0x344d8ba9; converted property
@property(assign) unsigned long footerMargin;	// G=0x345dcc9d; S=0x344d5f29; converted property
@property(retain) id formattingChangeDate;	// G=0x345de591; S=0x345de6ed; converted property
@property(assign) BOOL formattingChanged;	// G=0x345de2bd; S=0x345de345; converted property
@property(assign) unsigned long gutterMargin;	// G=0x345dcdb1; S=0x344921a1; converted property
@property(assign) unsigned long headerMargin;	// G=0x344c1665; S=0x344c6c11; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x345de42d; S=0x345de4b1; converted property
@property(assign) unsigned long leftMargin;	// G=0x3446b92d; S=0x34492071; converted property
@property(assign) short lineNumberDistance;	// G=0x345dd8c5; S=0x344d8b59; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x345dd7b1; S=0x344ffa3d; converted property
@property(assign) int lineNumberRestart;	// G=0x345dd9d9; S=0x344ffa8d; converted property
@property(assign) short lineNumberStart;	// G=0x345dd64d; S=0x345dd6d1; converted property
@property(assign) unsigned long pageHeight;	// G=0x3446bc15; S=0x34492025; converted property
@property(assign) int pageNumberFormat;	// G=0x345ddaed; S=0x3453e5c5; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x345ddd11; S=0x344c6d91; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x345ddc01; S=0x344c6d41; converted property
@property(assign) int pageOrientation;	// G=0x345dcafd; S=0x3452de51; converted property
@property(assign) unsigned long pageWidth;	// G=0x34493215; S=0x34491fd9; converted property
@property(assign) int resolveMode;	// G=0x344921ed; S=0x344919fd; converted property
@property(assign) unsigned long rightMargin;	// G=0x344934cd; S=0x344920bd; converted property
@property(assign) BOOL titlePage;	// G=0x344c16e9; S=0x344c160d; converted property
@property(assign) unsigned long topMargin;	// G=0x3446b8a9; S=0x34492109; converted property
@property(assign) int verticalJustification;	// G=0x345de1ad; S=0x3455094d; converted property
- (id)initWithDocument:(id)document;	// 0x3448c549
- (void)appendColumnSpace:(unsigned long)space;	// 0x344d8d0d
- (void)appendColumnWidth:(unsigned long)width;	// 0x344d8c01
// converted property getter: - (int)borderDepth;	// 0x345dd315
// converted property getter: - (int)borderDisplay;	// 0x345dd425
// converted property getter: - (int)borderOffset;	// 0x345dd539
- (id)bottomBorder;	// 0x345dd0ed
// converted property getter: - (unsigned long)bottomMargin;	// 0x34493551
// converted property getter: - (int)breakType;	// 0x344d61f9
// converted property getter: - (int)chapterNumberSeparator;	// 0x345dde2d
// converted property getter: - (unsigned short)columnCount;	// 0x345ddf8d
// converted property getter: - (long)columnSpace;	// 0x345de099
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x345de781
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x345de925
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x345de011
- (void)dealloc;	// 0x3446d3b9
- (id)document;	// 0x345dcaed
- (id)evenPageFooter;	// 0x3446b671
- (id)evenPageHeader;	// 0x3446c031
- (id)firstPageFooter;	// 0x3446b5c1
- (id)firstPageHeader;	// 0x3446c011
// converted property getter: - (unsigned long)footerMargin;	// 0x345dcc9d
// converted property getter: - (id)formattingChangeDate;	// 0x345de591
// converted property getter: - (BOOL)formattingChanged;	// 0x345de2bd
// converted property getter: - (unsigned long)gutterMargin;	// 0x345dcdb1
// converted property getter: - (unsigned long)headerMargin;	// 0x344c1665
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x345de42d
- (BOOL)isBorderDepthOverridden;	// 0x345dd399
- (BOOL)isBorderDisplayOverridden;	// 0x345dd4a9
- (BOOL)isBorderOffsetOverridden;	// 0x345dd5bd
- (BOOL)isBottomBorderOverridden;	// 0x345dd171
- (BOOL)isBottomMarginOverridden;	// 0x34493aa9
- (BOOL)isBreakTypeOverridden;	// 0x3446b709
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x345ddefd
- (BOOL)isColumnCountOverridden;	// 0x34492231
- (BOOL)isColumnSpaceOverridden;	// 0x345de11d
- (BOOL)isColumnsEqualWidthOverridden;	// 0x345162b5
- (BOOL)isFooterMarginOverridden;	// 0x345dcd21
- (BOOL)isFormattingChangeDateOverridden;	// 0x345de615
- (BOOL)isFormattingChangedOverridden;	// 0x345de39d
- (BOOL)isGutterMarginOverridden;	// 0x345dce35
- (BOOL)isHeaderMarginOverridden;	// 0x345dcc0d
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x345de501
- (BOOL)isLastColumnWidthDefined;	// 0x345de861
- (BOOL)isLeftBorderOverridden;	// 0x345dd05d
- (BOOL)isLeftMarginOverridden;	// 0x34493669
- (BOOL)isLineNumberDistanceOverridden;	// 0x345dd949
- (BOOL)isLineNumberIncrementOverridden;	// 0x345dd835
- (BOOL)isLineNumberRestartOverridden;	// 0x345dda5d
- (BOOL)isLineNumberStartOverridden;	// 0x345dd721
- (BOOL)isPageHeightOverridden;	// 0x34493299
- (BOOL)isPageNumberFormatOverridden;	// 0x345ddb71
- (BOOL)isPageNumberRestartOverridden;	// 0x345ddd9d
- (BOOL)isPageNumberStartOverridden;	// 0x345ddc85
- (BOOL)isPageOrientationOverridden;	// 0x345dcb81
- (BOOL)isPageWidthOverridden;	// 0x34493185
- (BOOL)isRightBorderOverridden;	// 0x345dd285
- (BOOL)isRightMarginOverridden;	// 0x3449378d
- (BOOL)isTitlePageOverridden;	// 0x3446b9b1
- (BOOL)isTopBorderOverridden;	// 0x345dcf49
- (BOOL)isTopMarginOverridden;	// 0x344938b1
- (BOOL)isVerticalJustificationOverridden;	// 0x345de231
- (id)leftBorder;	// 0x345dcfd9
// converted property getter: - (unsigned long)leftMargin;	// 0x3446b92d
// converted property getter: - (short)lineNumberDistance;	// 0x345dd8c5
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x345dd7b1
// converted property getter: - (int)lineNumberRestart;	// 0x345dd9d9
// converted property getter: - (short)lineNumberStart;	// 0x345dd64d
- (id)mutableBottomBorder;	// 0x345731c1
- (id)mutableLeftBorder;	// 0x34573109
- (id)mutableRightBorder;	// 0x345675a9
- (id)mutableTopBorder;	// 0x34573051
- (id)oddPageFooter;	// 0x3446b661
- (id)oddPageHeader;	// 0x3446c021
// converted property getter: - (unsigned long)pageHeight;	// 0x3446bc15
// converted property getter: - (int)pageNumberFormat;	// 0x345ddaed
// converted property getter: - (BOOL)pageNumberRestart;	// 0x345ddd11
// converted property getter: - (unsigned short)pageNumberStart;	// 0x345ddc01
// converted property getter: - (int)pageOrientation;	// 0x345dcafd
// converted property getter: - (unsigned long)pageWidth;	// 0x34493215
// converted property getter: - (int)resolveMode;	// 0x344921ed
- (id)rightBorder;	// 0x345dd201
// converted property getter: - (unsigned long)rightMargin;	// 0x344934cd
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x344c6c5d
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x344c6ca9
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x344c6cf5
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x34492155
// converted property setter: - (void)setBreakType:(int)type;	// 0x344c6bc5
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x345ddeb1
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x344c6de9
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x344c6f51
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x344d8ba9
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x344d5f29
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x345de6ed
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x345de345
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x344921a1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x344c6c11
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x345de4b1
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x34492071
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x344d8b59
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x344ffa3d
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x344ffa8d
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x345dd6d1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x34492025
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x3453e5c5
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x344c6d91
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x344c6d41
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x3452de51
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x34491fd9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x344919fd
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x344920bd
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x344c160d
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x34492109
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x3455094d
- (id)text;	// 0x3446bd01
// converted property getter: - (BOOL)titlePage;	// 0x344c16e9
- (id)topBorder;	// 0x345dcec5
// converted property getter: - (unsigned long)topMargin;	// 0x3446b8a9
// converted property getter: - (int)verticalJustification;	// 0x345de1ad
@end

