/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPRegion : CPChunk {
	BOOL isTextRegion;	// 52 = 0x34
	BOOL isImageRegion;	// 53 = 0x35
	BOOL isCompoundShape;	// 54 = 0x36
	CPRegion *nextRegion;	// 56 = 0x38
	int order;	// 60 = 0x3c
	id link;	// 64 = 0x40
}
@property(assign) BOOL isCompoundShape;	// G=0x33837e85; S=0x33837e95; converted property
@property(assign) BOOL isImageRegion;	// G=0x33837d09; S=0x33837d0d; converted property
@property(assign) BOOL isTextRegion;	// G=0x33837cf5; S=0x33837d9d; converted property
@property(retain) id link;	// G=0x3383803d; S=0x3383802d; converted property
@property(retain) CPRegion *nextRegion;	// G=0x33837fb9; S=0x33837fc9; converted property
@property(assign) int order;	// G=0x3383800d; S=0x3383801d; converted property
- (void)accept:(id)accept;	// 0x33837cdd
- (id)copyWithZone:(NSZone *)zone;	// 0x33837c8d
- (void)dealloc;	// 0x33837c41
- (BOOL)isBodyZone;	// 0x33837d99
- (BOOL)isBoxRegion;	// 0x33837d05
// converted property getter: - (BOOL)isCompoundShape;	// 0x33837e85
- (BOOL)isGraphicalRegion;	// 0x33837dad
// converted property getter: - (BOOL)isImageRegion;	// 0x33837d09
- (BOOL)isIndivisible;	// 0x33837f09
- (BOOL)isListItemRegion;	// 0x33837d55
- (BOOL)isParagraphRegion;	// 0x33837d51
- (BOOL)isRotated;	// 0x33837ea9
- (BOOL)isRowRegion;	// 0x33837d59
- (BOOL)isShapeRegion;	// 0x33837d4d
- (BOOL)isTableCellRegion;	// 0x33837d95
// converted property getter: - (BOOL)isTextRegion;	// 0x33837cf5
- (BOOL)isZone;	// 0x33837ea5
// converted property getter: - (id)link;	// 0x3383803d
// converted property getter: - (id)nextRegion;	// 0x33837fb9
// converted property getter: - (int)order;	// 0x3383800d
// converted property setter: - (void)setIsCompoundShape:(BOOL)shape;	// 0x33837e95
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x33837d0d
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x33837d9d
// converted property setter: - (void)setLink:(id)link;	// 0x3383802d
// converted property setter: - (void)setNextRegion:(id)region;	// 0x33837fc9
// converted property setter: - (void)setOrder:(int)order;	// 0x3383801d
@end

