/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShapeGeometry.h"

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
	CsRect<int> *mGeometryCoordSpace;	// 12 = 0xc
	CsPoint<int> *mLimo;	// 16 = 0x10
	NSMutableArray *mFormulas;	// 20 = 0x14
	NSMutableArray *mTextBodyRects;	// 24 = 0x18
	NSMutableArray *mPaths;	// 28 = 0x1c
}
@property(assign) CsRect<int> geometryCoordSpace;	// G=0x317d1de1; S=0x3177e085; converted property
@property(assign) CsPoint<int> limo;	// G=0x318ede1d; S=0x3177e0ed; converted property
- (id)init;	// 0x3177ca99
- (void)addFormula:(id)formula;	// 0x317ded7d
- (void)addPath:(id)path;	// 0x3177dcbd
- (void)addTextBodyRect:(id)rect;	// 0x317d1cfd
- (void)dealloc;	// 0x317826f9
- (id)formulaAtIndex:(unsigned)index;	// 0x317deff9
- (unsigned)formulaCount;	// 0x317defd9
// converted property getter: - (CsRect<int>)geometryCoordSpace;	// 0x317d1de1
// converted property getter: - (CsPoint<int>)limo;	// 0x318ede1d
- (id)pathAtIndex:(unsigned)index;	// 0x317d363d
- (unsigned)pathCount;	// 0x317d361d
// converted property setter: - (void)setGeometryCoordSpace:(CsRect<int>)space;	// 0x3177e085
// converted property setter: - (void)setLimo:(CsPoint<int>)limo;	// 0x3177e0ed
- (id)textBodyRectAtIndex:(unsigned)index;	// 0x317d1d1d
- (unsigned)textBodyRectCount;	// 0x3177e5c5
@end
