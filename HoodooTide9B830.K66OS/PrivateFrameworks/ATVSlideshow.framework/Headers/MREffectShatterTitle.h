/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 148 = 0x94
	MRImage *mTextImage;	// 152 = 0x98
	MRCroppingSprite *mTextSprite;	// 156 = 0x9c
}
- (id)initWithEffectID:(id)effectID;	// 0x3210a971
- (void)_cleanup;	// 0x3210ab49
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210b69d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3210b9b1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3210b97d
- (void)_unload;	// 0x3210b925
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3210ac55
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3210aca5
- (BOOL)isLoadedForTime:(double)time;	// 0x3210acfd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210add5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210ae5d
- (void)setPixelSize:(CGSize)size;	// 0x3210abe1
@end

