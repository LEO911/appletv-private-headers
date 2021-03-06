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
@property(assign, nonatomic) float kineticFriction;	// G=0x33a670d1; S=0x33a670e1; @synthesize=_kineticFriction
@property(assign, nonatomic) float skinFriction;	// G=0x33a670f1; S=0x33a67101; @synthesize=_skinFriction
@property(assign, nonatomic) float staticFriction;	// G=0x33a670b1; S=0x33a670c1; @synthesize=_staticFriction
- (id)initWithImprint:(id)imprint;	// 0x33a66e29
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33a67035
- (id)imprint;	// 0x33a66ef5
// declared property getter: - (float)kineticFriction;	// 0x33a670d1
// declared property setter: - (void)setKineticFriction:(float)friction;	// 0x33a670e1
// declared property setter: - (void)setSkinFriction:(float)friction;	// 0x33a67101
// declared property setter: - (void)setStaticFriction:(float)friction;	// 0x33a670c1
// declared property getter: - (float)skinFriction;	// 0x33a670f1
// declared property getter: - (float)staticFriction;	// 0x33a670b1
@end

