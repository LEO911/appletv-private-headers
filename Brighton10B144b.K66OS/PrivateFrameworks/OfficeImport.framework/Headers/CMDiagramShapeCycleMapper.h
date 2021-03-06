/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
	float mScale;	// 112 = 0x70
	BOOL mCircularArrows;	// 116 = 0x74
	int mDiagramType;	// 120 = 0x78
	int mArrowShapeType;	// 124 = 0x7c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x349ca4f1
- (CGRect)circumscribedBounds;	// 0x349ca64d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x349ca829
- (void)mapTransitionArrowsAt:(id)at index:(unsigned)index withState:(id)state;	// 0x349d9181
- (void)mapTransitionPointAt:(id)at index:(unsigned)index withState:(id)state;	// 0x349cade1
- (CGRect)nodeBoundsWithIndex:(unsigned)index;	// 0x349cacf9
- (CGSize)nodeSize;	// 0x349ca6f1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x349cac01
@end

