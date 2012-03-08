/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"

@class NSMutableArray;

@interface CPPage : CPChunk <CPDisposable> {
	int pageNumber;	// 52 = 0x34
	CGRect pageCropBox;	// 56 = 0x38
	BOOL hasZones;	// 72 = 0x48
	BOOL hasTextLines;	// 73 = 0x49
	BOOL isDirty;	// 74 = 0x4a
	BOOL isStartOfSection;	// 75 = 0x4b
	long maxLayoutZOrder;	// 76 = 0x4c
	CPChunk *background;	// 80 = 0x50
	float complexity;	// 84 = 0x54
	int rotation;	// 88 = 0x58
	NSMutableArray *shapesOnPage;	// 92 = 0x5c
	NSMutableArray *imagesOnPage;	// 96 = 0x60
	NSMutableArray *graphicsOnPage;	// 100 = 0x64
	NSMutableArray *columnsOnPage;	// 104 = 0x68
	CPPDFContext *pdfContext;	// 108 = 0x6c
	BOOL contextOwner;	// 112 = 0x70
	CGPDFPageRef pdfPage;	// 116 = 0x74
	NSMutableArray *textLinesOnPage;	// 120 = 0x78
	void *_layout;	// 124 = 0x7c
	id hitTest;	// 128 = 0x80
	BOOL reconstructed;	// 132 = 0x84
	opaque_pthread_mutex_t mutex;	// 136 = 0x88
}
@property(assign) CPPDFContext *PDFContext;	// G=0x31f34ee1; S=0x31f34ec1; converted property
@property(retain) CPChunk *background;	// G=0x31f3505d; S=0x31f35f35; converted property
@property(readonly, retain) NSMutableArray *columnsOnPage;	// G=0x31f350a9; converted property
@property(assign) float complexity;	// G=0x31f34f39; S=0x31f34f49; converted property
@property(readonly, retain) NSMutableArray *graphicsOnPage;	// G=0x31f34f99; converted property
@property(assign) BOOL hasTextLines;	// G=0x31f34fc9; S=0x31f34fd9; converted property
@property(assign) BOOL hasZones;	// G=0x31f34fb9; S=0x31f34fa9; converted property
@property(readonly, retain) id hitTest;	// G=0x31f4bd65; converted property
@property(readonly, retain) NSMutableArray *imagesOnPage;	// G=0x31f34f89; converted property
@property(assign) BOOL isStartOfSection;	// G=0x31f34fe9; S=0x31f34ff9; converted property
@property(assign) CGRect pageCropBox;	// G=0x31f34f15; S=0x31f34ef1; converted property
@property(assign) int pageNumber;	// G=0x31f34f59; S=0x31f34f69; converted property
@property(readonly, assign) CGPDFPageRef pdfPage;	// G=0x31f34eb1; converted property
@property(assign) int rotation;	// G=0x31f35009; S=0x31f35019; converted property
@property(readonly, retain) NSMutableArray *shapesOnPage;	// G=0x31f34f79; converted property
@property(readonly, retain) NSMutableArray *textLinesOnPage;	// G=0x31f35391; converted property
+ (void)sortByReadingOrder:(id)order;	// 0x31f35219
- (id)init;	// 0x31f350b9
- (id)initWithPDFPage:(CGPDFPageRef)pdfpage;	// 0x31f3647d
// converted property getter: - (CPPDFContext *)PDFContext;	// 0x31f34ee1
- (void)accept:(id)accept;	// 0x31f3612d
- (void)addColumns:(id)columns;	// 0x31f35321
- (void)addImage:(id)image;	// 0x31f36011
- (void)addShape:(id)shape;	// 0x31f36051
// converted property getter: - (id)background;	// 0x31f3505d
- (id)bodyZone;	// 0x31f35f7d
- (id)children;	// 0x31f3506d
- (CPPDFClipBuffer *)clipBuffer;	// 0x31f4bd4d
// converted property getter: - (id)columnsOnPage;	// 0x31f350a9
// converted property getter: - (float)complexity;	// 0x31f34f39
- (id)copyWithZone:(NSZone *)zone;	// 0x31f36145
- (void)dealloc;	// 0x31f362d9
- (void)dispose;	// 0x31f363ed
- (void)finalize;	// 0x31f363ad
// converted property getter: - (id)graphicsOnPage;	// 0x31f34f99
// converted property getter: - (BOOL)hasTextLines;	// 0x31f34fc9
// converted property getter: - (BOOL)hasZones;	// 0x31f34fb9
// converted property getter: - (id)hitTest;	// 0x31f4bd65
// converted property getter: - (id)imagesOnPage;	// 0x31f34f89
// converted property getter: - (BOOL)isStartOfSection;	// 0x31f34fe9
- (void)layDownObjectsOnPage;	// 0x31f35881
- (void)layDownObjectsOnPageOld;	// 0x31f35415
- (CGPDFLayoutRef)layout;	// 0x31f4e015
// converted property getter: - (CGRect)pageCropBox;	// 0x31f34f15
// converted property getter: - (int)pageNumber;	// 0x31f34f59
- (id)parent;	// 0x31f36091
// converted property getter: - (CGPDFPageRef)pdfPage;	// 0x31f34eb1
- (BOOL)populatePDFLayout:(CGPDFLayoutRef)layout;	// 0x31f4d82d
- (void)reconstruct;	// 0x31f36275
- (void)restoreBackGroundObjectToPage;	// 0x31f35f09
// converted property getter: - (int)rotation;	// 0x31f35009
// converted property setter: - (void)setBackground:(id)background;	// 0x31f35f35
- (unsigned)setCellPositionsOf:(id)of from:(unsigned)from;	// 0x31f35d4d
// converted property setter: - (void)setComplexity:(float)complexity;	// 0x31f34f49
- (unsigned)setGraphicPositions:(id)positions from:(unsigned)from;	// 0x31f35ccd
// converted property setter: - (void)setHasTextLines:(BOOL)lines;	// 0x31f34fd9
// converted property setter: - (void)setHasZones:(BOOL)zones;	// 0x31f34fa9
// converted property setter: - (void)setIsStartOfSection:(BOOL)section;	// 0x31f34ff9
// converted property setter: - (void)setPDFContext:(CPPDFContext *)context;	// 0x31f34ec1
// converted property setter: - (void)setPageCropBox:(CGRect)box;	// 0x31f34ef1
// converted property setter: - (void)setPageNumber:(int)number;	// 0x31f34f69
- (unsigned)setPositionsOf:(id)of from:(unsigned)from;	// 0x31f35dcd
- (unsigned)setReadingOrder:(id)order from:(unsigned)from;	// 0x31f358b1
// converted property setter: - (void)setRotation:(int)rotation;	// 0x31f35019
// converted property getter: - (id)shapesOnPage;	// 0x31f34f79
- (void)sortByReadingOrder;	// 0x31f35861
// converted property getter: - (id)textLinesOnPage;	// 0x31f35391
- (unsigned)traverse:(id)traverse ordinal:(unsigned)ordinal;	// 0x31f35e89
@end
