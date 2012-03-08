/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIHNodeInfo : NSObject {
@private
	int mTreeDepth;	// 4 = 0x4
	int mRow;	// 8 = 0x8
	ODIHRange mXRange;	// 12 = 0xc
	BOOL mConnectToVerticalSide;	// 20 = 0x14
	int mExtraRowsBetweenParentAndSelf;	// 24 = 0x18
	float mXOffsetRelativeToParent;	// 28 = 0x1c
	ODIHRangeVector *mXRanges;	// 32 = 0x20
}
@property(assign) BOOL connectToVerticalSide;	// G=0x353db0b1; S=0x353db0c1; converted property
@property(assign) int extraRowsBetweenParentAndSelf;	// G=0x353db0d1; S=0x353db0e1; converted property
@property(assign) int row;	// G=0x353db091; S=0x353db0a1; converted property
@property(assign) int treeDepth;	// G=0x353db071; S=0x353db081; converted property
@property(assign) float xOffsetRelativeToParent;	// G=0x353db0f1; S=0x353db101; converted property
@property(assign) ODIHRange xRange;	// G=0x353db045; S=0x353db05d; converted property
- (id)init;	// 0x353db145
- (void)addToXOffsetRelativeToParent:(float)parent;	// 0x353db111
// converted property getter: - (BOOL)connectToVerticalSide;	// 0x353db0b1
- (void)dealloc;	// 0x353db1e9
// converted property getter: - (int)extraRowsBetweenParentAndSelf;	// 0x353db0d1
// converted property getter: - (int)row;	// 0x353db091
// converted property setter: - (void)setConnectToVerticalSide:(BOOL)verticalSide;	// 0x353db0c1
// converted property setter: - (void)setExtraRowsBetweenParentAndSelf:(int)aSelf;	// 0x353db0e1
// converted property setter: - (void)setRow:(int)row;	// 0x353db0a1
// converted property setter: - (void)setTreeDepth:(int)depth;	// 0x353db081
// converted property setter: - (void)setXOffsetRelativeToParent:(float)parent;	// 0x353db101
// converted property setter: - (void)setXRange:(ODIHRange)range;	// 0x353db05d
// converted property getter: - (int)treeDepth;	// 0x353db071
// converted property getter: - (float)xOffsetRelativeToParent;	// 0x353db0f1
// converted property getter: - (ODIHRange)xRange;	// 0x353db045
- (ODIHRangeVector *)xRanges;	// 0x353db135
@end
