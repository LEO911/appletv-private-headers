/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
	BOOL mIsVertical;	// 112 = 0x70
	BOOL mIsOutward;	// 113 = 0x71
	float mRadius;	// 116 = 0x74
}
+ (void)initialize;	// 0x31d5c8a9
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x31d5c921
- (CGRect)circumscribedBounds;	// 0x31d5d209
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x31d5cae1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x31d5d2d5
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x31d5d391
@end
