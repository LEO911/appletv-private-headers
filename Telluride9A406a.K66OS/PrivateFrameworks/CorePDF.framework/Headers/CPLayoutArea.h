/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPRegion.h"
#import "CorePDF-Structs.h"


@interface CPLayoutArea : CPRegion {
	BOOL isFirstLayout;	// 68 = 0x44
}
@property(assign) BOOL isFirstLayout;	// G=0x304c994d; S=0x304c995d; converted property
@property(assign) BOOL isImageRegion;	// G=0x304c9979; S=0x304c9c25; converted property
- (id)init;	// 0x304c9981
- (void)accept:(id)accept;	// 0x304c9eb5
- (void)addColumnBreaks;	// 0x304c9cad
- (id)description;	// 0x304c99c5
- (BOOL)isBoxRegion;	// 0x304c996d
// converted property getter: - (BOOL)isFirstLayout;	// 0x304c994d
- (BOOL)isGraphicalRegion;	// 0x304c9971
// converted property getter: - (BOOL)isImageRegion;	// 0x304c9979
- (BOOL)isRowRegion;	// 0x304c9975
- (BOOL)isShapeRegion;	// 0x304c997d
- (BOOL)isSimilarTo:(id)to;	// 0x304c9949
- (CGRect)layoutAreaBounds;	// 0x304c9b11
- (id)properties;	// 0x304c9a19
- (float)selectionBottom;	// 0x304c9a79
// converted property setter: - (void)setIsFirstLayout:(BOOL)layout;	// 0x304c995d
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x304c9c25
@end
