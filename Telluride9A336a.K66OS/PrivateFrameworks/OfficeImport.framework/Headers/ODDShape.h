/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject {
@private
	int mType;	// 4 = 0x4
	int mPresetType;	// 8 = 0x8
	NSMutableArray *mAdjustments;	// 12 = 0xc
}
@property(assign) int presetType;	// G=0x34e2da01; S=0x34e2da11; converted property
@property(assign) int type;	// G=0x34e2d9e1; S=0x34e2d9f1; converted property
- (id)init;	// 0x34e2da31
- (void)addAdjustment:(id)adjustment;	// 0x34e2da95
- (id)adjustments;	// 0x34e2da21
- (void)dealloc;	// 0x34e2dab9
// converted property getter: - (int)presetType;	// 0x34e2da01
// converted property setter: - (void)setPresetType:(int)type;	// 0x34e2da11
// converted property setter: - (void)setType:(int)type;	// 0x34e2d9f1
// converted property getter: - (int)type;	// 0x34e2d9e1
@end

