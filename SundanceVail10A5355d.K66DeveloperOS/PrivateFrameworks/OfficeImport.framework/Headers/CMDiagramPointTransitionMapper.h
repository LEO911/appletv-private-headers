/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"

@class NSDictionary;

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {
	int mShapeType;	// 24 = 0x18
	NSDictionary *mAdjustValues;	// 28 = 0x1c
}
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type adjustValues:(id)values parent:(id)parent;	// 0x31d4aab9
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds shapeType:(int)type parent:(id)parent;	// 0x31d4aa81
- (void)mapAt:(id)at withState:(id)state;	// 0x31d4ab11
@end

