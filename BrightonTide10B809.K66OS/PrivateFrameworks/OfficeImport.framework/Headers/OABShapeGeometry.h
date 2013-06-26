/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x34883fd5
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x3488400d
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x34a3e90d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x34a3e5f1
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x3486a7e9
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x3488412d
+ (void)readFromLimo:(CsPoint<long>)limo toGeometry:(id)geometry;	// 0x348844c5
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x34882fd9
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x3486a0bd
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x34884251
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x3498d795
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x3498d91d
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x3498da35
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x34a3e601
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShape:(EshShape *)shape;	// 0x34a3e659
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3ef7d
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x34a3f3e5
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3e875
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3ea15
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3f101
@end
