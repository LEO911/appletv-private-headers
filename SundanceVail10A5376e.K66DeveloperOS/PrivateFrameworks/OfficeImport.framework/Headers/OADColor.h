/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x36f6b685; S=0x36fd8415; converted property
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x36f73ba9
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0x36f815d9
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x36f8126d
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x36f73ded
+ (id)tsuColorWithOADColor:(id)oadcolor;	// 0x371451f9
+ (id)tsuColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x36f73b45
+ (id)tsuColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x36f73fcd
- (void)addTransform:(id)transform;	// 0x36f81f95
- (void)addTransformOfType:(int)type;	// 0x37145195
- (void)addTransformOfType:(int)type value:(float)value;	// 0x37098059
- (id)colorForStyleColor:(id)styleColor;	// 0x37056911
- (id)copyWithZone:(NSZone *)zone;	// 0x37145191
- (void)dealloc;	// 0x36f00411
- (unsigned)hash;	// 0x36f6b585
- (BOOL)isEqual:(id)equal;	// 0x36f6b5a5
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x36fd8415
// converted property getter: - (id)transforms;	// 0x36f6b685
@end
