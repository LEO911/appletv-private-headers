/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPLayoutArea : CPRegion {
	BOOL isFirstLayout;	// 68 = 0x44
}
@property(assign) BOOL isFirstLayout;	// G=0x33a17f01; S=0x33a17f11; converted property
@property(assign) BOOL isImageRegion;	// G=0x33a181d1; S=0x33a18155; converted property
- (id)init;	// 0x33a17ea1
- (void)accept:(id)accept;	// 0x33a17ee5
- (void)addColumnBreaks;	// 0x33a17f21
- (id)description;	// 0x33a183fd
- (BOOL)isBoxRegion;	// 0x33a18149
// converted property getter: - (BOOL)isFirstLayout;	// 0x33a17f01
- (BOOL)isGraphicalRegion;	// 0x33a1814d
// converted property getter: - (BOOL)isImageRegion;	// 0x33a181d1
- (BOOL)isRowRegion;	// 0x33a18151
- (BOOL)isShapeRegion;	// 0x33a181d5
- (BOOL)isSimilarTo:(id)to;	// 0x33a17efd
- (CGRect)layoutAreaBounds;	// 0x33a181d9
- (id)properties;	// 0x33a1839d
- (float)selectionBottom;	// 0x33a18305
// converted property setter: - (void)setIsFirstLayout:(BOOL)layout;	// 0x33a17f11
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x33a18155
@end
