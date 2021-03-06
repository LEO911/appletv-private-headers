/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider, NSMutableArray, MRTextRenderer;

@interface MREffectReflectionsTitle : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	BOOL mFlipped;	// 116 = 0x74
	BOOL mSpeedUpRight;	// 117 = 0x75
	double mImageMain;	// 120 = 0x78
	double mTextMain;	// 128 = 0x80
	MRTextRenderer *mTextRenderer;	// 136 = 0x88
	MRTextRenderer *mWordRenderer;	// 140 = 0x8c
	NSMutableArray *mWordImages;	// 144 = 0x90
	NSMutableArray *mWordFrames;	// 148 = 0x94
	NSMutableArray *mCachedRenderedWords;	// 152 = 0x98
	float mTextYOffset;	// 156 = 0x9c
	CGSize mTextSize;	// 160 = 0xa0
	CGSize mTextImageSize;	// 168 = 0xa8
	MRImageProvider *mMaskProvider;	// 176 = 0xb0
	MRImageProvider *mGroundShadowCenterProvider;	// 180 = 0xb4
	MRImageProvider *mGroundShadowLeftProvider;	// 184 = 0xb8
	MRImageProvider *mGroundShadowRightProvider;	// 188 = 0xbc
}
- (id)initWithEffectID:(id)effectID;	// 0x3550c9ed
- (void)_cleanup;	// 0x3550cd95
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550ed29
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3550d145
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3550d11d
- (void)_unload;	// 0x3550f359
- (void)cacheRenderedWords;	// 0x3550f149
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3550ebb1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3550ece1
- (BOOL)isLoadedForTime:(double)time;	// 0x3550d149
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550d055
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale tilt:(int)tilt phaseOutType:(int)type direction:(int)direction;	// 0x3550e13d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550d245
- (void)renderKey:(id)key size:(CGSize)size position:(CGPoint)position yRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments light:(BOOL)light shadow:(BOOL)shadow;	// 0x3550e60d
- (void)renderTextAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3550d911
- (void)setPixelSize:(CGSize)size;	// 0x3550cfa5
@end

