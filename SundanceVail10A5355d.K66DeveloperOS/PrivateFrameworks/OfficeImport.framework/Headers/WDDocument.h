/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class WDFontTable, OADBackground, WDRevisionAuthorTable, WDText, WDCitationTable, NSMutableArray, WDListDefinitionTable, WDStyleSheet, WDListTable, OADTheme, NSString, NSDate;

@interface WDDocument : OCDDocument {
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDCitationTable *mCitationTable;	// 36 = 0x24
	WDListTable *mListTable;	// 40 = 0x28
	NSMutableArray *mSections;	// 44 = 0x2c
	unsigned short mDefaultTabWidth;	// 48 = 0x30
	WDText *mImageBulletText;	// 52 = 0x34
	WDText *mFootnoteSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationSeparator;	// 60 = 0x3c
	WDText *mFootnoteContinuationNotice;	// 64 = 0x40
	WDText *mEndnoteSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationSeparator;	// 72 = 0x48
	WDText *mEndnoteContinuationNotice;	// 76 = 0x4c
	int mFootnoteNumberFormat;	// 80 = 0x50
	int mEndnoteNumberFormat;	// 84 = 0x54
	int mFootnotePosition;	// 88 = 0x58
	int mEndnotePosition;	// 92 = 0x5c
	int mFootnoteRestart;	// 96 = 0x60
	int mEndnoteRestart;	// 100 = 0x64
	unsigned short mFootnoteNumberingStart;	// 104 = 0x68
	int mGutterPosition;	// 108 = 0x6c
	NSString *mOleFilename;	// 112 = 0x70
	NSString *mKinsokuAltBreakBefore;	// 116 = 0x74
	NSString *mKinsokuAltBreakAfter;	// 120 = 0x78
	short mZoomPercentage;	// 124 = 0x7c
	NSString *mVersion;	// 128 = 0x80
	unsigned mMirrorMargins : 1;	// 132 = 0x84
	unsigned mBorderSurroundHeader : 1;	// 132 = 0x84
	unsigned mBorderSurroundFooter : 1;	// 132 = 0x84
	unsigned mKinsokuStrict : 1;	// 132 = 0x84
	unsigned mAutoHyphenate : 1;	// 132 = 0x84
	unsigned mEvenAndOddHeaders : 1;	// 132 = 0x84
	unsigned mGraphicsInHeaderFooter : 1;	// 132 = 0x84
	unsigned mBookFold : 1;	// 132 = 0x84
	unsigned mShowMarkup : 1;	// 133 = 0x85
	unsigned mShowComments : 1;	// 133 = 0x85
	unsigned mTrackChanges : 1;	// 133 = 0x85
	unsigned mShowRevisionMarksOnScreen : 1;	// 133 = 0x85
	unsigned mShowInsertionsAndDeletions : 1;	// 133 = 0x85
	unsigned mShowFormatting : 1;	// 133 = 0x85
	unsigned mShowOutline : 1;	// 133 = 0x85
	NSMutableArray *mDocumentImages;	// 136 = 0x88
	NSMutableArray *mChangeTrackingEditDates;	// 140 = 0x8c
	NSMutableArray *mChangeTrackingEditAuthors;	// 144 = 0x90
	NSDate *mCreationDate;	// 148 = 0x94
	NSMutableArray *mImageBullets;	// 152 = 0x98
	int mZIndexTotalForMainText;	// 156 = 0x9c
	int mZIndexTotalForHeaderFooterText;	// 160 = 0xa0
	OADBackground *mDocumentBackground;	// 164 = 0xa4
	OADTheme *mTheme;	// 168 = 0xa8
}
@property(assign) BOOL autoHyphenate;	// G=0x31e3097d; S=0x31c9fe51; converted property
@property(assign) BOOL bookFold;	// G=0x31e30b45; S=0x31c69769; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x31e30901; S=0x31c9fe31; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x31e308ed; S=0x31c9fe11; converted property
@property(retain) id creationDate;	// G=0x31e30ea9; S=0x31e30eb9; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x31c86f81; S=0x31c69795; converted property
@property(retain) id documentBackground;	// G=0x31e30f05; S=0x31caa4a9; converted property
@property(assign) int endnoteNumberFormat;	// G=0x31e309b5; S=0x31c69ce1; converted property
@property(assign) int endnotePosition;	// G=0x31e309d5; S=0x31c69d01; converted property
@property(assign) int endnoteRestart;	// G=0x31e309f5; S=0x31c69cf1; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x31e30991; S=0x31c6972d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x31e309a5; S=0x31c69841; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x31e30a05; S=0x31c69931; converted property
@property(assign) int footnotePosition;	// G=0x31e309c5; S=0x31c69921; converted property
@property(assign) int footnoteRestart;	// G=0x31e309e5; S=0x31c698b1; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x31e30915; S=0x31e30929; converted property
@property(assign) int gutterPosition;	// G=0x31e30b35; S=0x31c69785; converted property
@property(retain) id kinsokuAltBreakAfter;	// G=0x31e30959; S=0x31d580dd; converted property
@property(retain) id kinsokuAltBreakBefore;	// G=0x31e30949; S=0x31d58119; converted property
@property(assign) BOOL kinsokuStrict;	// G=0x31e30969; S=0x31ca0055; converted property
@property(assign) BOOL mirrorMargins;	// G=0x31e308d9; S=0x31c6974d; converted property
@property(retain) id oleFilename;	// G=0x31cb48d1; S=0x31ca034d; converted property
@property(assign) BOOL showComments;	// G=0x31e30d8d; S=0x31c697a5; converted property
@property(assign) BOOL showFormatting;	// G=0x31e30ddd; S=0x31c69801; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x31e30dc9; S=0x31c697e1; converted property
@property(assign) BOOL showMarkup;	// G=0x31e30d79; S=0x31c697c5; converted property
@property(assign) BOOL showOutline;	// G=0x31e30df1; S=0x31c9fe81; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x31e30db5; S=0x31c9fdf1; converted property
@property(assign) BOOL trackChanges;	// G=0x31e30da1; S=0x31c69821; converted property
@property(retain) id version;	// G=0x31e30cad; S=0x31e30cbd; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x31e30fc9; S=0x31c7aa29; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x31e30fb9; S=0x31c7aa19; converted property
@property(assign) short zoomPercentage;	// G=0x31e30b59; S=0x31c9fe71; converted property
- (id)init;	// 0x31c587d1
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x31e30e05
- (void)addCitation:(id)citation forID:(id)anId;	// 0x31e30a55
- (id)addImageBulletText;	// 0x31d5581d
- (void)addImageBullets;	// 0x31e30b75
- (id)addList:(id)list;	// 0x31e30b15
- (id)addListDefinition;	// 0x31e30ab5
- (void)addRevisionAuthor:(id)author;	// 0x31e30d59
- (id)addSection;	// 0x31c6a2d9
- (id)annotationBlockIterator;	// 0x31e313e1
- (id)annotationIterator;	// 0x31e31255
- (id)applicationName;	// 0x31e30b69
// converted property getter: - (BOOL)autoHyphenate;	// 0x31e3097d
// converted property getter: - (BOOL)bookFold;	// 0x31e30b45
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x31e30901
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x31e308ed
- (id)changeTrackingEditAuthors;	// 0x31e30e99
- (id)changeTrackingEditDates;	// 0x31e30e89
- (int)citationCount;	// 0x31e30a15
- (id)citationFor:(id)aFor;	// 0x31e30a35
// converted property getter: - (id)creationDate;	// 0x31e30ea9
- (void)dealloc;	// 0x31c88c4d
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x31c86f81
// converted property getter: - (id)documentBackground;	// 0x31e30f05
- (id)endnoteBlockIterator;	// 0x31e3135d
- (id)endnoteContinuationNotice;	// 0x31c69d11
- (id)endnoteContinuationSeparator;	// 0x31cb44a1
- (id)endnoteIterator;	// 0x31e311d1
// converted property getter: - (int)endnoteNumberFormat;	// 0x31e309b5
// converted property getter: - (int)endnotePosition;	// 0x31e309d5
// converted property getter: - (int)endnoteRestart;	// 0x31e309f5
- (id)endnoteSeparator;	// 0x31cb4491
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x31e30991
- (id)fontTable;	// 0x31c595d5
- (id)footnoteBlockIterator;	// 0x31e312d9
- (id)footnoteContinuationNotice;	// 0x31c69941
- (id)footnoteContinuationSeparator;	// 0x31cb4481
- (id)footnoteIterator;	// 0x31e3114d
// converted property getter: - (int)footnoteNumberFormat;	// 0x31e309a5
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x31e30a05
// converted property getter: - (int)footnotePosition;	// 0x31e309c5
// converted property getter: - (int)footnoteRestart;	// 0x31e309e5
- (id)footnoteSeparator;	// 0x31cb43ed
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x31e30915
// converted property getter: - (int)gutterPosition;	// 0x31e30b35
- (id)imageBulletParagraph;	// 0x31d2c651
- (id)imageBulletText;	// 0x31e30ef5
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x31d559b5
- (id)imageBullets;	// 0x31caa5bd
- (BOOL)isFromBinary;	// 0x31e31465
// converted property getter: - (id)kinsokuAltBreakAfter;	// 0x31e30959
// converted property getter: - (id)kinsokuAltBreakBefore;	// 0x31e30949
// converted property getter: - (BOOL)kinsokuStrict;	// 0x31e30969
- (id)lastSection;	// 0x31c702f9
- (id)listAt:(int)at;	// 0x31e30af5
- (int)listCount;	// 0x31e30ad5
- (id)listDefinitionAt:(int)at;	// 0x31e30a95
- (int)listDefinitionCount;	// 0x31e30a75
- (id)listDefinitionTable;	// 0x31c67ab5
- (id)listDefinitionWithId:(int)anId;	// 0x31c68c19
- (id)listTable;	// 0x31c68b0d
- (id)mainBlocksIterator;	// 0x31e31045
- (id)mainRunsIterator;	// 0x31e310c9
// converted property getter: - (BOOL)mirrorMargins;	// 0x31e308d9
- (id)newAnnotationBlockIterator;	// 0x31e31409
- (id)newAnnotationIterator;	// 0x31e3127d
- (id)newEndnoteBlockIterator;	// 0x31e31385
- (id)newEndnoteIterator;	// 0x31e311f9
- (id)newFootnoteBlockIterator;	// 0x31e31301
- (id)newFootnoteIterator;	// 0x31e31175
- (id)newMainBlocksIterator;	// 0x31e3106d
- (id)newMainRunsIterator;	// 0x31e310f1
- (id)newSectionIterator;	// 0x31e31001
// converted property getter: - (id)oleFilename;	// 0x31cb48d1
- (void)removeEmptySections;	// 0x31e30f15
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x31e30d39
- (id)revisionAuthorAt:(int)at;	// 0x31e30d19
- (int)revisionAuthorCount;	// 0x31e30cf9
- (id)revisionAuthorTable;	// 0x31cacd71
- (id)sectionAt:(int)at;	// 0x31c7cb35
- (int)sectionCount;	// 0x31c7ba71
- (id)sectionIterator;	// 0x31e30fd9
- (id)sections;	// 0x31c7bb7d
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x31c9fe51
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x31c69769
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x31c9fe31
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x31c9fe11
// converted property setter: - (void)setCreationDate:(id)date;	// 0x31e30eb9
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x31c69795
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x31caa4a9
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x31c69ce1
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x31c69d01
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x31c69cf1
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x31c6972d
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x31c69841
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x31c69931
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x31c69921
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x31c698b1
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x31e30929
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x31c69785
// converted property setter: - (void)setKinsokuAltBreakAfter:(id)after;	// 0x31d580dd
// converted property setter: - (void)setKinsokuAltBreakBefore:(id)before;	// 0x31d58119
// converted property setter: - (void)setKinsokuStrict:(BOOL)strict;	// 0x31ca0055
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x31c6974d
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x31ca034d
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x31c697a5
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x31c69801
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x31c697e1
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x31c697c5
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x31c9fe81
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x31c9fdf1
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x31c69821
// converted property setter: - (void)setVersion:(id)version;	// 0x31e30cbd
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x31c7aa29
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x31c7aa19
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x31c9fe71
// converted property getter: - (BOOL)showComments;	// 0x31e30d8d
// converted property getter: - (BOOL)showFormatting;	// 0x31e30ddd
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x31e30dc9
// converted property getter: - (BOOL)showMarkup;	// 0x31e30d79
// converted property getter: - (BOOL)showOutline;	// 0x31e30df1
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x31e30db5
- (id)styleSheet;	// 0x31c610dd
- (id)theme;	// 0x31c5db8d
// converted property getter: - (BOOL)trackChanges;	// 0x31e30da1
// converted property getter: - (id)version;	// 0x31e30cad
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x31e30fc9
// converted property getter: - (int)zIndexTotalForMainText;	// 0x31e30fb9
// converted property getter: - (short)zoomPercentage;	// 0x31e30b59
@end

