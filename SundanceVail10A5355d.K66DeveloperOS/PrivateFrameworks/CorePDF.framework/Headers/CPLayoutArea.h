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
@property(assign) BOOL isFirstLayout;	// G=0x34cd7199; S=0x34cd71a9; converted property
@property(assign) BOOL isImageRegion;	// G=0x34cd7469; S=0x34cd73ed; converted property
- (id)init;	// 0x34cd7139
- (void)accept:(id)accept;	// 0x34cd717d
- (void)addColumnBreaks;	// 0x34cd71b9
- (id)description;	// 0x34cd7695
- (BOOL)isBoxRegion;	// 0x34cd73e1
// converted property getter: - (BOOL)isFirstLayout;	// 0x34cd7199
- (BOOL)isGraphicalRegion;	// 0x34cd73e5
// converted property getter: - (BOOL)isImageRegion;	// 0x34cd7469
- (BOOL)isRowRegion;	// 0x34cd73e9
- (BOOL)isShapeRegion;	// 0x34cd746d
- (BOOL)isSimilarTo:(id)to;	// 0x34cd7195
- (CGRect)layoutAreaBounds;	// 0x34cd7471
- (id)properties;	// 0x34cd7635
- (float)selectionBottom;	// 0x34cd759d
// converted property setter: - (void)setIsFirstLayout:(BOOL)layout;	// 0x34cd71a9
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x34cd73ed
@end
