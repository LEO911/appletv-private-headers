/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCAMLBezierData, MRImageProvider, MRTextRenderer, MRImage, NSMutableDictionary;

@interface MREffectPhotoEdges : MREffect {
	MRImageProvider *mFrameProvider;	// 116 = 0x74
	MRImageProvider *mBreakProvider[12];	// 120 = 0x78
	BOOL mIsLoaded;	// 168 = 0xa8
	NSMutableDictionary *mSprites;	// 172 = 0xac
	MRTextRenderer *mText0Renderer;	// 176 = 0xb0
	MRImage *mText0Image;	// 180 = 0xb4
	MRCAMLBezierData *mBezierEaseIn;	// 184 = 0xb8
	MRCAMLBezierData *mBezierEaseOut;	// 188 = 0xbc
}
- (id)initWithEffectID:(id)effectID;	// 0x320ef129
- (void)_cleanup;	// 0x320ef2bd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320f2ca9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x320f3151
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x320f3039
- (void)_unload;	// 0x320f3155
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320f2b1d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320f2c65
- (BOOL)isLoadedForTime:(double)time;	// 0x320ef371
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320ef8b9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320f0301
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x320ef4d9
- (void)setPixelSize:(CGSize)size;	// 0x320ef651
@end

