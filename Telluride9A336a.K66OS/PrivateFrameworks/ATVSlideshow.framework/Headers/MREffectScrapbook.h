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
+ (void)initialize;	// 0x3433be7d
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x343475c9
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x3434727d
- (id)initWithEffectID:(id)effectID;	// 0x3433bf25
- (void)_cleanup;	// 0x3433f8dd
- (void)_unload;	// 0x34347205
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3433fe39
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3433ffe1
- (BOOL)isAlphaFriendly;	// 0x3433fa35
- (BOOL)isOpaque;	// 0x3433fa31
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3433fa39
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3433faed
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x343400bd
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34346b31
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3434062d
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x34341165
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x34341d35
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x34342d21
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x34343ccd
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x34344a05
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34345371
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34345db1
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343461cd
- (void)setPixelSize:(CGSize)size;	// 0x3433f985
@end

