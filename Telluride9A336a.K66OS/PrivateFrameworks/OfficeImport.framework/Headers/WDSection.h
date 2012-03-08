/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

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
	XXStruct_FH8jNC mOriginalProperties;	// 40 = 0x28
	XXStruct_FH8jNC mTrackedProperties;	// 176 = 0xb0
}
@property(assign) int borderDepth;	// G=0x34e112c5; S=0x34cb99bd; converted property
@property(assign) int borderDisplay;	// G=0x34e1140d; S=0x34cb9a15; converted property
@property(assign) int borderOffset;	// G=0x34e11555; S=0x34cb9a6d; converted property
@property(assign) unsigned long bottomMargin;	// G=0x34cb4479; S=0x34cb2f79; converted property
@property(assign) int breakType;	// G=0x34ccf101; S=0x34cb990d; converted property
@property(assign) int chapterNumberSeparator;	// G=0x34e11fb1; S=0x34e12041; converted property
@property(assign) unsigned short columnCount;	// G=0x34e12151; S=0x34cb9b7d; converted property
@property(assign) long columnSpace;	// G=0x34e12281; S=0x34cb9d3d; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x34e121e5; S=0x34cd2bd5; converted property
@property(assign) unsigned long footerMargin;	// G=0x34e10b11; S=0x34cce9b1; converted property
@property(retain) id formattingChangeDate;	// G=0x34e12865; S=0x34e129ad; converted property
@property(assign) BOOL formattingChanged;	// G=0x34e12505; S=0x34e125a1; converted property
@property(assign) unsigned long gutterMargin;	// G=0x34e10c5d; S=0x34cb2fd1; converted property
@property(assign) unsigned long headerMargin;	// G=0x34cb49f1; S=0x34cb9965; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x34e126c1; S=0x34e12755; converted property
@property(assign) unsigned long leftMargin;	// G=0x34c1d881; S=0x34cb2e71; converted property
@property(assign) short lineNumberDistance;	// G=0x34e11935; S=0x34cd2b7d; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x34e117e9; S=0x34cf9c55; converted property
@property(assign) int lineNumberRestart;	// G=0x34e11a81; S=0x34cf9cad; converted property
@property(assign) short lineNumberStart;	// G=0x34e1169d; S=0x34d8dff1; converted property
@property(assign) unsigned long pageHeight;	// G=0x34c1dbc9; S=0x34cb2e19; converted property
@property(assign) int pageNumberFormat;	// G=0x34e11bc9; S=0x34d42651; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x34e11e5d; S=0x34cb9b1d; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x34e11d11; S=0x34cb9ac5; converted property
@property(assign) int pageOrientation;	// G=0x34e10911; S=0x34d30785; converted property
@property(assign) unsigned long pageScale;	// G=0x34e10771; S=0x34e10801; converted property
@property(assign) unsigned long pageWidth;	// G=0x34cb40d5; S=0x34cb2dc1; converted property
@property(assign) int resolveMode;	// G=0x34cb3029; S=0x34cb2799; converted property
@property(assign) unsigned long rightMargin;	// G=0x34cb43e5; S=0x34cb2ec9; converted property
@property(assign) BOOL titlePage;	// G=0x34cb4e79; S=0x34cb3129; converted property
@property(assign) unsigned long topMargin;	// G=0x34c1d7ed; S=0x34cb2f21; converted property
@property(assign) int verticalJustification;	// G=0x34e123bd; S=0x34d682a5; converted property
- (id)initWithDocument:(id)document;	// 0x34cae0dd
- (void)appendColumnSpace:(unsigned long)space;	// 0x34cd2e15
- (void)appendColumnWidth:(unsigned long)width;	// 0x34cd2c91
// converted property getter: - (int)borderDepth;	// 0x34e112c5
// converted property getter: - (int)borderDisplay;	// 0x34e1140d
// converted property getter: - (int)borderOffset;	// 0x34e11555
- (id)bottomBorder;	// 0x34e11035
// converted property getter: - (unsigned long)bottomMargin;	// 0x34cb4479
// converted property getter: - (int)breakType;	// 0x34ccf101
// converted property getter: - (int)chapterNumberSeparator;	// 0x34e11fb1
// converted property getter: - (unsigned short)columnCount;	// 0x34e12151
// converted property getter: - (long)columnSpace;	// 0x34e12281
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x34e12a75
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x34e12c35
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x34e121e5
- (void)dealloc;	// 0x34c20a39
- (id)document;	// 0x34e10761
- (id)evenPageFooter;	// 0x34c1d569
- (id)evenPageHeader;	// 0x34c1e065
- (id)firstPageFooter;	// 0x34c1d4b5
- (id)firstPageHeader;	// 0x34c1e045
// converted property getter: - (unsigned long)footerMargin;	// 0x34e10b11
// converted property getter: - (id)formattingChangeDate;	// 0x34e12865
// converted property getter: - (BOOL)formattingChanged;	// 0x34e12505
// converted property getter: - (unsigned long)gutterMargin;	// 0x34e10c5d
// converted property getter: - (unsigned long)headerMargin;	// 0x34cb49f1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x34e126c1
- (BOOL)isBorderDepthOverridden;	// 0x34e11355
- (BOOL)isBorderDisplayOverridden;	// 0x34e1149d
- (BOOL)isBorderOffsetOverridden;	// 0x34e115e5
- (BOOL)isBottomBorderOverridden;	// 0x34e110c5
- (BOOL)isBottomMarginOverridden;	// 0x34cb4b21
- (BOOL)isBreakTypeOverridden;	// 0x34c1d611
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x34e12099
- (BOOL)isColumnCountOverridden;	// 0x34cb3071
- (BOOL)isColumnSpaceOverridden;	// 0x34e12315
- (BOOL)isColumnsEqualWidthOverridden;	// 0x34d15c89
- (BOOL)isFooterMarginOverridden;	// 0x34e10ba5
- (BOOL)isFormattingChangeDateOverridden;	// 0x34e128f5
- (BOOL)isFormattingChangedOverridden;	// 0x34e12609
- (BOOL)isGutterMarginOverridden;	// 0x34e10ced
- (BOOL)isHeaderMarginOverridden;	// 0x34e10a59
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x34e127ad
- (BOOL)isLastColumnWidthDefined;	// 0x34e12b6d
- (BOOL)isLeftBorderOverridden;	// 0x34e10f7d
- (BOOL)isLeftMarginOverridden;	// 0x34cb45a9
- (BOOL)isLineNumberDistanceOverridden;	// 0x34e119c9
- (BOOL)isLineNumberIncrementOverridden;	// 0x34e1187d
- (BOOL)isLineNumberRestartOverridden;	// 0x34e11b11
- (BOOL)isLineNumberStartOverridden;	// 0x34e11731
- (BOOL)isPageHeightOverridden;	// 0x34cb4165
- (BOOL)isPageNumberFormatOverridden;	// 0x34e11c59
- (BOOL)isPageNumberRestartOverridden;	// 0x34e11ef9
- (BOOL)isPageNumberStartOverridden;	// 0x34e11da5
- (BOOL)isPageOrientationOverridden;	// 0x34e109a1
- (BOOL)isPageScaleOverridden;	// 0x34e10859
- (BOOL)isPageWidthOverridden;	// 0x34cb401d
- (BOOL)isRightBorderOverridden;	// 0x34e1120d
- (BOOL)isRightMarginOverridden;	// 0x34cb46fd
- (BOOL)isTitlePageOverridden;	// 0x34c1d915
- (BOOL)isTopBorderOverridden;	// 0x34e10e35
- (BOOL)isTopMarginOverridden;	// 0x34cb4851
- (BOOL)isVerticalJustificationOverridden;	// 0x34e1244d
- (id)leftBorder;	// 0x34e10eed
// converted property getter: - (unsigned long)leftMargin;	// 0x34c1d881
// converted property getter: - (short)lineNumberDistance;	// 0x34e11935
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x34e117e9
// converted property getter: - (int)lineNumberRestart;	// 0x34e11a81
// converted property getter: - (short)lineNumberStart;	// 0x34e1169d
- (id)mutableBottomBorder;	// 0x34d79f79
- (id)mutableLeftBorder;	// 0x34d79ea5
- (id)mutableRightBorder;	// 0x34d7a04d
- (id)mutableTopBorder;	// 0x34d79dd1
- (id)oddPageFooter;	// 0x34c1d559
- (id)oddPageHeader;	// 0x34c1e055
// converted property getter: - (unsigned long)pageHeight;	// 0x34c1dbc9
// converted property getter: - (int)pageNumberFormat;	// 0x34e11bc9
// converted property getter: - (BOOL)pageNumberRestart;	// 0x34e11e5d
// converted property getter: - (unsigned short)pageNumberStart;	// 0x34e11d11
// converted property getter: - (int)pageOrientation;	// 0x34e10911
// converted property getter: - (unsigned long)pageScale;	// 0x34e10771
// converted property getter: - (unsigned long)pageWidth;	// 0x34cb40d5
// converted property getter: - (int)resolveMode;	// 0x34cb3029
- (id)rightBorder;	// 0x34e1117d
// converted property getter: - (unsigned long)rightMargin;	// 0x34cb43e5
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x34cb99bd
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x34cb9a15
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x34cb9a6d
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x34cb2f79
// converted property setter: - (void)setBreakType:(int)type;	// 0x34cb990d
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x34e12041
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x34cb9b7d
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x34cb9d3d
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x34cd2bd5
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x34cce9b1
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x34e129ad
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x34e125a1
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x34cb2fd1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x34cb9965
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x34e12755
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x34cb2e71
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x34cd2b7d
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x34cf9c55
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x34cf9cad
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x34d8dff1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x34cb2e19
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x34d42651
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x34cb9b1d
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x34cb9ac5
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x34d30785
// converted property setter: - (void)setPageScale:(unsigned long)scale;	// 0x34e10801
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x34cb2dc1
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34cb2799
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x34cb2ec9
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x34cb3129
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x34cb2f21
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x34d682a5
- (id)text;	// 0x34c1dccd
// converted property getter: - (BOOL)titlePage;	// 0x34cb4e79
- (id)topBorder;	// 0x34e10da5
// converted property getter: - (unsigned long)topMargin;	// 0x34c1d7ed
// converted property getter: - (int)verticalJustification;	// 0x34e123bd
@end
