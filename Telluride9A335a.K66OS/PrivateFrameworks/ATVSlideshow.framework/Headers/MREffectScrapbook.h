/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbook : MREffect {
	MRImageProvider *mImageProviders[7];	// 112 = 0x70
	MRImageProvider *mBackgroundImageProvider;	// 140 = 0x8c
	NSMutableDictionary *mSprites;	// 144 = 0x90
	unsigned mNumberOfVertices;	// 148 = 0x94
	float *mMeshVertices;	// 152 = 0x98
	float *mMeshTextureVertices;	// 156 = 0x9c
	float mLocalTranslationX;	// 160 = 0xa0
	float mLocalTranslationY;	// 164 = 0xa4
	float mZoomScale;	// 168 = 0xa8
	double mPhaseTime;	// 172 = 0xac
}
+ (void)initialize;	// 0x31b21e7d
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x31b2d5c9
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x31b2d27d
- (id)initWithEffectID:(id)effectID;	// 0x31b21f25
- (void)_cleanup;	// 0x31b258dd
- (void)_unload;	// 0x31b2d205
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31b25e39
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31b25fe1
- (BOOL)isAlphaFriendly;	// 0x31b25a35
- (BOOL)isOpaque;	// 0x31b25a31
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b25a39
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b25aed
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x31b260bd
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b2cb31
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b2662d
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x31b27165
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x31b27d35
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x31b28d21
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x31b29ccd
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x31b2aa05
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b2b371
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b2bdb1
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b2c1cd
- (void)setPixelSize:(CGSize)size;	// 0x31b25985
@end
