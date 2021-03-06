/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider, NSString;

@interface MREffectBackgroundImage : MREffect {
	MRImageProvider *mImageProvider;	// 112 = 0x70
	NSString *mClampingMode;	// 116 = 0x74
}
@property(retain) id assetPath;	// G=0x34306229; S=0x34306255; converted property
- (id)initWithEffectID:(id)effectID;	// 0x3430568d
- (void)_cleanup;	// 0x34305955
- (void)_unload;	// 0x34306281
// converted property getter: - (id)assetPath;	// 0x34306229
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34305a65
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34305ae5
// converted property setter: - (void)setAssetPath:(id)path;	// 0x34306255
- (void)setPixelSize:(CGSize)size;	// 0x343059c1
@end

