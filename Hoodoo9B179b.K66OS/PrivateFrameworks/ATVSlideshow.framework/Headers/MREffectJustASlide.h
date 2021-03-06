/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	BOOL mForceIsOpaque;	// 116 = 0x74
}
- (id)init;	// 0x354dfa65
- (void)_cleanup;	// 0x354dfac9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x354e0535
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x354e0585
- (BOOL)isAlphaFriendly;	// 0x354dfc29
- (BOOL)isNative3D;	// 0x354dfaf5
- (BOOL)isOpaque;	// 0x354dfb85
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354e04d9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354dfcad
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354dfd29
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354e040d
@end

