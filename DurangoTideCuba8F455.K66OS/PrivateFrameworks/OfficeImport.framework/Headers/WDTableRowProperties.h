/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class WDTableProperties, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : NSObject <NSCopying> {
@private
	WDTableProperties *mTableProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_98qQxD mOriginalProperties;	// 16 = 0x10
	XXStruct_98qQxD mTrackedProperties;	// 44 = 0x2c
}
@property(assign) BOOL header;	// G=0x32d2de65; S=0x32c881a1; converted property
@property(assign) long height;	// G=0x32c1416d; S=0x32c11935; converted property
@property(assign) int heightType;	// G=0x32d2dd61; S=0x32c118ed; converted property
@property(assign) int resolveMode;	// G=0x32d2d909; S=0x32be234d; converted property
@property(assign) short widthAfter;	// G=0x32d2db55; S=0x32c886a5; converted property
@property(assign) int widthAfterType;	// G=0x32d2dc5d; S=0x32c886f1; converted property
@property(assign) short widthBefore;	// G=0x32d2d94d; S=0x32c1f5ed; converted property
@property(assign) int widthBeforeType;	// G=0x32d2da51; S=0x32c1f639; converted property
- (id)init;	// 0x32d2e18d
- (id)initWithDocument:(id)document;	// 0x32be1eed
- (void)addProperties:(id)properties;	// 0x32d2e14d
- (void)addPropertiesValues:(XXStruct_98qQxD *)values to:(XXStruct_98qQxD *)to;	// 0x32d2df6d
- (id)characterProperties;	// 0x32bb3819
- (id)copyWithZone:(NSZone *)zone;	// 0x32d2e069
- (void)dealloc;	// 0x32bb79b1
// converted property getter: - (BOOL)header;	// 0x32d2de65
// converted property getter: - (long)height;	// 0x32c1416d
// converted property getter: - (int)heightType;	// 0x32d2dd61
- (BOOL)isHeaderOverridden;	// 0x32d2dee5
- (BOOL)isHeightOverridden;	// 0x32bb3a81
- (BOOL)isHeightTypeOverridden;	// 0x32d2dddd
- (BOOL)isWidthAfterOverridden;	// 0x32d2dbd5
- (BOOL)isWidthAfterTypeOverridden;	// 0x32d2dcd9
- (BOOL)isWidthBeforeOverridden;	// 0x32d2d9c9
- (BOOL)isWidthBeforeTypeOverridden;	// 0x32d2dacd
// converted property getter: - (int)resolveMode;	// 0x32d2d909
// converted property setter: - (void)setHeader:(BOOL)header;	// 0x32c881a1
// converted property setter: - (void)setHeight:(long)height;	// 0x32c11935
// converted property setter: - (void)setHeightType:(int)type;	// 0x32c118ed
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x32be234d
// converted property setter: - (void)setWidthAfter:(short)after;	// 0x32c886a5
// converted property setter: - (void)setWidthAfterType:(int)type;	// 0x32c886f1
// converted property setter: - (void)setWidthBefore:(short)before;	// 0x32c1f5ed
// converted property setter: - (void)setWidthBeforeType:(int)type;	// 0x32c1f639
- (id)tableProperties;	// 0x32be233d
// converted property getter: - (short)widthAfter;	// 0x32d2db55
// converted property getter: - (int)widthAfterType;	// 0x32d2dc5d
// converted property getter: - (short)widthBefore;	// 0x32d2d94d
// converted property getter: - (int)widthBeforeType;	// 0x32d2da51
@end

