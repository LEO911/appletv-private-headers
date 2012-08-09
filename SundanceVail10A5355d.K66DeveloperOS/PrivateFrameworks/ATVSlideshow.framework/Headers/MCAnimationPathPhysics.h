/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"


@interface MCAnimationPathPhysics : MCAnimationPath {
	float _staticFriction;	// 12 = 0xc
	float _kineticFriction;	// 16 = 0x10
	float _skinFriction;	// 20 = 0x14
}
@property(assign, nonatomic) float kineticFriction;	// G=0x32179f11; S=0x32179f21; @synthesize=_kineticFriction
@property(assign, nonatomic) float skinFriction;	// G=0x32179f31; S=0x32179f41; @synthesize=_skinFriction
@property(assign, nonatomic) float staticFriction;	// G=0x32179ef1; S=0x32179f01; @synthesize=_staticFriction
- (id)initWithImprint:(id)imprint;	// 0x32179c69
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32179e75
- (id)imprint;	// 0x32179d35
// declared property getter: - (float)kineticFriction;	// 0x32179f11
// declared property setter: - (void)setKineticFriction:(float)friction;	// 0x32179f21
// declared property setter: - (void)setSkinFriction:(float)friction;	// 0x32179f41
// declared property setter: - (void)setStaticFriction:(float)friction;	// 0x32179f01
// declared property getter: - (float)skinFriction;	// 0x32179f31
// declared property getter: - (float)staticFriction;	// 0x32179ef1
@end
