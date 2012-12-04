/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRImageProvider, MRTextRenderer, MRCroppingSprite;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 152 = 0x98
	MRImage *mTextImage;	// 156 = 0x9c
	MRCroppingSprite *mTextSprite;	// 160 = 0xa0
}
- (id)initWithEffectID:(id)effectID;	// 0x339f3cf1
- (void)_cleanup;	// 0x339f3ecd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f49e9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x339f4ced
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x339f4cb9
- (void)_unload;	// 0x339f4c61
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x339f3fc9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x339f400d
- (BOOL)isLoadedForTime:(double)time;	// 0x339f4065
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f4145
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f41c9
- (void)setPixelSize:(CGSize)size;	// 0x339f3f5d
@end
