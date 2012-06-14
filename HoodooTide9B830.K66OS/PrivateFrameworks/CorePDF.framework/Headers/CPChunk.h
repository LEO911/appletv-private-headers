/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;	// 24 = 0x18
	BOOL shrinksWithChildren;	// 40 = 0x28
	BOOL dirtyBounds;	// 41 = 0x29
	unsigned position;	// 44 = 0x2c
	long insertionOrder;	// 48 = 0x30
}
@property(assign) CGPoint anchor;	// G=0x3106c3d9; S=0x3106d395; converted property
@property(assign) CGRect bounds;	// G=0x3106d5c1; S=0x3106c3a1; converted property
@property(assign) unsigned chunkPosition;	// G=0x3106c49d; S=0x3106c4ad; converted property
@property(assign) long insertionOrder;	// G=0x3106c425; S=0x3106c3f5; converted property
@property(assign) BOOL shrinksWithChildren;	// G=0x3106c459; S=0x3106c469; converted property
+ (float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;	// 0x3106c349
- (id)init;	// 0x3106c4bd
- (float)absoluteGapTo:(id)to;	// 0x3106d28d
- (void)accept:(id)accept;	// 0x3106d97d
- (void)add:(id)add;	// 0x3106d911
- (void)add:(id)add atIndex:(unsigned)index;	// 0x3106d8a5
- (void)addChildrenOf:(id)of;	// 0x3106d865
- (CGRect)adjustToPointBoundary:(CGRect)pointBoundary;	// 0x3106d555
- (CGSize)advance;	// 0x3106c439
- (float)advanceDeltaAfterSpace;	// 0x3106c3f1
// converted property getter: - (CGPoint)anchor;	// 0x3106c3d9
- (float)bottom;	// 0x3106c975
// converted property getter: - (CGRect)bounds;	// 0x3106d5c1
- (BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;	// 0x3106c715
- (float)center;	// 0x3106c9d5
// converted property getter: - (unsigned)chunkPosition;	// 0x3106c49d
- (float)clusterGapTo:(id)to;	// 0x3106d31d
- (int)clusterLevelHint;	// 0x3106c455
- (int)compareAnchorX:(id)x;	// 0x3106cf11
- (int)compareAnchorY:(id)y;	// 0x3106cf69
- (int)compareAnchorYDescending:(id)descending;	// 0x3106ceb9
- (int)compareChunkPosition:(id)position;	// 0x3106ca6d
- (int)compareInsertionOrder:(id)order;	// 0x3106ce2d
- (int)compareLinearBounds:(id)bounds;	// 0x3106ccb5
- (int)compareTopDescending:(id)descending;	// 0x3106cb89
- (int)compareX:(id)x;	// 0x3106ce61
- (int)compareXBounds:(id)bounds;	// 0x3106cd69
- (int)compareY:(id)y;	// 0x3106cc45
- (int)compareYBounds:(id)bounds;	// 0x3106cbd5
- (int)compareYDescending:(id)descending;	// 0x3106cb31
- (int)compareYDescendingX:(id)x;	// 0x3106caa1
- (int)compareZ:(id)z;	// 0x3106cdf9
- (int)compareZDescending:(id)descending;	// 0x3106cdc5
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x3106d995
- (id)copyWithZone:(NSZone *)zone;	// 0x3106da39
- (id)describeBounds;	// 0x3106d41d
- (void)fitBoundsToChildren;	// 0x3106d10d
- (float)fontSize;	// 0x3106c435
- (BOOL)geometricallyContains:(id)contains;	// 0x3106c76d
// converted property getter: - (long)insertionOrder;	// 0x3106c425
- (BOOL)intersectsChild:(CGRect)child;	// 0x3106c5b1
- (float)left;	// 0x3106ca3d
- (float)opticalLeading;	// 0x3106c39d
- (void)orderedInsert:(id)insert usingSelector:(SEL)selector;	// 0x3106c8f9
- (BOOL)overlapsHorizontallyWith:(id)with;	// 0x3106c879
- (BOOL)overlapsVerticallyWith:(id)with;	// 0x3106c7e9
- (float)referenceAdvanceWidth;	// 0x3106d26d
- (void)remove:(id)remove;	// 0x3106d815
- (void)removeAll;	// 0x3106d7a5
- (CGRect)renderedBounds;	// 0x3106d439
- (void)resizeWith:(id)with;	// 0x3106cfe5
- (float)right;	// 0x3106ca0d
- (float)rotationAngle;	// 0x3106c52d
// converted property setter: - (void)setAnchor:(CGPoint)anchor;	// 0x3106d395
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3106c3a1
- (void)setChildren:(id)children;	// 0x3106d609
// converted property setter: - (void)setChunkPosition:(unsigned)position;	// 0x3106c4ad
// converted property setter: - (void)setInsertionOrder:(long)order;	// 0x3106c3f5
// converted property setter: - (void)setShrinksWithChildren:(BOOL)children;	// 0x3106c469
// converted property getter: - (BOOL)shrinksWithChildren;	// 0x3106c459
- (void)sortUsingSelector:(SEL)selector;	// 0x3106cfc1
- (id)takeChildren;	// 0x3106d735
- (id)takeChildrenAmong:(id)among;	// 0x3106d6cd
- (float)top;	// 0x3106c9a5
- (void)translateObjectYBy:(float)by;	// 0x3106c479
@end
