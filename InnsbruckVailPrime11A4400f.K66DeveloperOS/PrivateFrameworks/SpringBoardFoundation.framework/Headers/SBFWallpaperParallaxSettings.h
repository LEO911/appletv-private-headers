/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import "SBFParallaxSettings.h"


@interface SBFWallpaperParallaxSettings : SBFParallaxSettings {
	float _overhangX;	// 80 = 0x50
	float _overhangY;	// 84 = 0x54
	float _perspectiveTransform;	// 88 = 0x58
}
@property(assign) float overhangX;	// G=0x32755ea9; S=0x32755ebd; @synthesize=_overhangX
@property(assign) float overhangY;	// G=0x32755ed5; S=0x32755ee9; @synthesize=_overhangY
@property(assign) float perspectiveTransform;	// G=0x32755f01; S=0x32755f15; @synthesize=_perspectiveTransform
+ (id)settingsControllerModule;	// 0x32755d25
// declared property getter: - (float)overhangX;	// 0x32755ea9
// declared property getter: - (float)overhangY;	// 0x32755ed5
// declared property getter: - (float)perspectiveTransform;	// 0x32755f01
- (void)setDefaultValues;	// 0x32755c75
// declared property setter: - (void)setOverhangX:(float)x;	// 0x32755ebd
// declared property setter: - (void)setOverhangY:(float)y;	// 0x32755ee9
// declared property setter: - (void)setPerspectiveTransform:(float)transform;	// 0x32755f15
@end

