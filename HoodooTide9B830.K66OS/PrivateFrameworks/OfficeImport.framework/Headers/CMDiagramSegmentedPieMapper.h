/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper {
@private
	BOOL mDrawArrows;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x313d6e3d
- (void)mapAt:(id)at withState:(id)state;	// 0x313d6ef5
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x313d6c1d
- (int)pointCount;	// 0x313d6bf5
- (void)setDrawArrows:(BOOL)arrows;	// 0x313d6c0d
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x313d6ea1
@end
