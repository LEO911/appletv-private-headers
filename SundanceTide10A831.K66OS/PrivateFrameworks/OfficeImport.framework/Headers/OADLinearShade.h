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
@property(assign) float angle;	// G=0x36a4e6a5; S=0x36a4c385; converted property
@property(assign) BOOL scaled;	// G=0x36c13da5; S=0x36a4c3a5; converted property
+ (id)defaultProperties;	// 0x36a4c2e1
- (id)initWithDefaults;	// 0x36a4c329
// converted property getter: - (float)angle;	// 0x36a4e6a5
- (id)copyWithZone:(NSZone *)zone;	// 0x36b23531
- (unsigned)hash;	// 0x36c13e09
- (BOOL)isAngleOverridden;	// 0x36a4e6d5
- (BOOL)isEqual:(id)equal;	// 0x36c13e59
- (BOOL)isScaledOverridden;	// 0x36c13dd5
// converted property getter: - (BOOL)scaled;	// 0x36c13da5
// converted property setter: - (void)setAngle:(float)angle;	// 0x36a4c385
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x36a4c3a5
@end
