/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect {
@private
	float mXScale;	// 24 = 0x18
	float mYScale;	// 28 = 0x1c
	float mXSkew;	// 32 = 0x20
	float mYSkew;	// 36 = 0x24
	int mAlignment;	// 40 = 0x28
	BOOL mRotateWithShape;	// 44 = 0x2c
}
@property(assign) int alignment;	// G=0x311b2e01; S=0x3115ef19; converted property
@property(assign) BOOL rotateWithShape;	// G=0x311b2e11; S=0x310e0a11; converted property
@property(assign) float xScale;	// G=0x311b2dc1; S=0x3119738d; converted property
@property(assign) float xSkew;	// G=0x311b2de1; S=0x311973ad; converted property
@property(assign) float yScale;	// G=0x311b2dd1; S=0x3119739d; converted property
@property(assign) float ySkew;	// G=0x311b2df1; S=0x311c2ae9; converted property
- (id)init;	// 0x310e0539
// converted property getter: - (int)alignment;	// 0x311b2e01
- (id)copyWithZone:(NSZone *)zone;	// 0x3115dce9
- (unsigned)hash;	// 0x31251729
- (BOOL)isEqual:(id)equal;	// 0x31194129
// converted property getter: - (BOOL)rotateWithShape;	// 0x311b2e11
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x3115ef19
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x310e0a11
// converted property setter: - (void)setXScale:(float)scale;	// 0x3119738d
// converted property setter: - (void)setXSkew:(float)skew;	// 0x311973ad
// converted property setter: - (void)setYScale:(float)scale;	// 0x3119739d
// converted property setter: - (void)setYSkew:(float)skew;	// 0x311c2ae9
// converted property getter: - (float)xScale;	// 0x311b2dc1
// converted property getter: - (float)xSkew;	// 0x311b2de1
// converted property getter: - (float)yScale;	// 0x311b2dd1
// converted property getter: - (float)ySkew;	// 0x311b2df1
@end
