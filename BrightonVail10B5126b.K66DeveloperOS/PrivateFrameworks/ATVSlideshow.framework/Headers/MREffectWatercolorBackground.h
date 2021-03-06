/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x331e67b1
- (void)_cleanup;	// 0x331e68b5
- (void)_unload;	// 0x331e71b1
- (BOOL)isLoadedForTime:(double)time;	// 0x331e6945
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331e6969
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331e6bc1
- (void)setAttributes:(id)attributes;	// 0x331e69d1
- (void)setPixelSize:(CGSize)size;	// 0x331e68f1
@end

