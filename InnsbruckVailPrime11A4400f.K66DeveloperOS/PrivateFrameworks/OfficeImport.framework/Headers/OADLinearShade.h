/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"


@interface OADLinearShade : OADShade {
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0x31780d85; S=0x316cfecd; converted property
@property(assign) BOOL scaled;	// G=0x318ee919; S=0x316cfeed; converted property
+ (id)defaultProperties;	// 0x316cfe29
- (id)initWithDefaults;	// 0x316cfe71
// converted property getter: - (float)angle;	// 0x31780d85
- (id)copyWithZone:(NSZone *)zone;	// 0x316cff0d
- (unsigned)hash;	// 0x3178052d
- (BOOL)isAngleOverridden;	// 0x31780db5
- (BOOL)isEqual:(id)equal;	// 0x317cd569
- (BOOL)isScaledOverridden;	// 0x318ee949
// converted property getter: - (BOOL)scaled;	// 0x318ee919
// converted property setter: - (void)setAngle:(float)angle;	// 0x316cfecd
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x316cfeed
@end

