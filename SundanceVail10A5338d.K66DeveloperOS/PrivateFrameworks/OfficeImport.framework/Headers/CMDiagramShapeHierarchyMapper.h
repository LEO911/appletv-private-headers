/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"

@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
	NSMutableDictionary *mNodeInfoMap;	// 112 = 0x70
	BOOL mIsLayered;	// 116 = 0x74
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x33b1cbf1
- (CGRect)boundsForNode:(id)node;	// 0x33b1de25
- (void)copyInfoForNode:(id)node depth:(int)depth;	// 0x33b2dc85
- (void)dealloc;	// 0x33b1eb15
- (id)infoForNode:(id)node;	// 0x33b1d7a5
- (void)mapAt:(id)at withState:(id)state;	// 0x33b1cd1d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x33b1eb11
- (void)mapLayerNodes:(id)nodes at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x33b210d5
- (CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x33b1daa5
- (void)mapNode:(id)node at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x33b1debd
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x33b1d1ed
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset index:(int)index;	// 0x33b1dc05
- (void)setUpLayers;	// 0x33b1ccb9
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x33b1dd85
@end

