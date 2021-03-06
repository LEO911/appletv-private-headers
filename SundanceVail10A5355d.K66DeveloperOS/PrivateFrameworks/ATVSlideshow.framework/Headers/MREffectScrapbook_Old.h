/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbook_Old : MREffect {
	MRImageProvider *mImageProviders[7];	// 116 = 0x74
	MRImageProvider *mBackgroundImageProvider;	// 144 = 0x90
	NSMutableDictionary *mSprites;	// 148 = 0x94
	unsigned mNumberOfVertices;	// 152 = 0x98
	float *mMeshVertices;	// 156 = 0x9c
	float *mMeshTextureVertices;	// 160 = 0xa0
	float mLocalTranslationX;	// 164 = 0xa4
	float mLocalTranslationY;	// 168 = 0xa8
	float mZoomScale;	// 172 = 0xac
	double mPhaseTime;	// 176 = 0xb0
}
+ (void)initialize;	// 0x320fb429
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x32105525
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x32105209
- (id)initWithEffectID:(id)effectID;	// 0x320fb4d5
- (void)_cleanup;	// 0x320fe05d
- (void)_unload;	// 0x3210518d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320fe5a5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320fe761
- (BOOL)isAlphaFriendly;	// 0x320fe1b1
- (BOOL)isOpaque;	// 0x320fe1ad
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320fe1b5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320fe255
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x320fe859
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32104b29
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320fedd1
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x320ff83d
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32100361
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x321011c1
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32101ff9
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x32102bc5
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321034b9
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32103e89
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32104289
- (void)setPixelSize:(CGSize)size;	// 0x320fe0fd
@end

