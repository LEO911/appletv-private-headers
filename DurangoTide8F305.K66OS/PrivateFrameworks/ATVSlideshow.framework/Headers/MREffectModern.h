/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRCroppingSprite;

@interface MREffectModern : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	MRImageProvider *mGradientProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x33295059
- (void)_cleanup;	// 0x33295181
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33295a69
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33295aad
- (BOOL)isAlphaFriendly;	// 0x3329523d
- (BOOL)isNative3D;	// 0x33295235
- (BOOL)isOpaque;	// 0x33295239
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332959f9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33295241
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3329533d
- (void)renderImage:(id)image withMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x33295ad1
- (void)setPixelSize:(CGSize)size;	// 0x332951cd
@end
