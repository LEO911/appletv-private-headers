/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x32f3c835
- (void)_cleanup;	// 0x32f3c93d
- (void)_unload;	// 0x32f3d25d
- (BOOL)isLoadedForTime:(double)time;	// 0x32f3c9d5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f3c9f9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f3cc81
- (void)setAttributes:(id)attributes;	// 0x32f3ca65
- (void)setPixelSize:(CGSize)size;	// 0x32f3c97d
@end
