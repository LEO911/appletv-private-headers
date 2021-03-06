/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray, MRImageProvider, MRTextRenderer;

@interface MREffectReflectionsTitle : MREffect {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	BOOL mFlipped;	// 120 = 0x78
	BOOL mSpeedUpRight;	// 121 = 0x79
	double mImageMain;	// 124 = 0x7c
	double mTextMain;	// 132 = 0x84
	MRTextRenderer *mTextRenderer;	// 140 = 0x8c
	MRTextRenderer *mWordRenderer;	// 144 = 0x90
	NSMutableArray *mWordImages;	// 148 = 0x94
	NSMutableArray *mWordFrames;	// 152 = 0x98
	NSMutableArray *mCachedRenderedWords;	// 156 = 0x9c
	float mTextYOffset;	// 160 = 0xa0
	CGSize mTextSize;	// 164 = 0xa4
	CGSize mTextImageSize;	// 172 = 0xac
	MRImageProvider *mMaskProvider;	// 180 = 0xb4
	MRImageProvider *mGroundShadowCenterProvider;	// 184 = 0xb8
	MRImageProvider *mGroundShadowLeftProvider;	// 188 = 0xbc
	MRImageProvider *mGroundShadowRightProvider;	// 192 = 0xc0
	NSMutableDictionary *mBreakInformation;	// 196 = 0xc4
	BOOL mIsLoaded;	// 200 = 0xc8
}
- (id)initWithEffectID:(id)effectID;	// 0x3248bfe9
- (void)_applySizeScripts:(float)scripts;	// 0x3248c611
- (void)_cleanup;	// 0x3248c331
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3248ebbd
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3248c985
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3248c95d
- (void)_unload;	// 0x3248f231
- (void)cacheRenderedWords;	// 0x3248f015
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3248e955
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3248eb75
- (BOOL)isLoadedForTime:(double)time;	// 0x3248c989
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3248c859
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale tilt:(int)tilt phaseOutType:(int)type direction:(int)direction;	// 0x3248d959
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3248ca91
- (void)renderKey:(id)key size:(CGSize)size position:(CGPoint)position yRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments light:(BOOL)light shadow:(BOOL)shadow;	// 0x3248df29
- (void)renderTextAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3248d0f9
- (void)setAttributes:(id)attributes;	// 0x3248c7bd
- (void)setPixelSize:(CGSize)size;	// 0x3248c565
@end

