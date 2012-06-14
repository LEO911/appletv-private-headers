/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider, MURandom;

@interface MREffectMapSlides : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRImageProvider *mBoxShadowBig;	// 116 = 0x74
	MRImageProvider *mBoxShadowBigBottom;	// 120 = 0x78
	MRImageProvider *mBoxShadowBigTop;	// 124 = 0x7c
	MURandom *mRandom;	// 128 = 0x80
}
- (id)initWithEffectID:(id)effectID;	// 0x320d9f9d
- (void)_cleanup;	// 0x320da249
- (void)_renderBigShadowForRect:(CGRect)rect scale:(float)scale rects:(id)rects atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320dd271
- (void)_unload;	// 0x320dd6b9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320dd541
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320dd671
- (BOOL)isLoadedForTime:(double)time;	// 0x320da395
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320da3fd
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x320da725
- (void)render2SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x320dabd5
- (void)render3SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x320db79d
- (void)render4SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x320dc235
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320da4a5
- (void)renderKey:(id)key shadow:(id)shadow shadowRect:(CGRect)rect size:(CGSize)size position:(CGPoint)position xRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320dcf09
- (void)setPixelSize:(CGSize)size;	// 0x320da2fd
@end
