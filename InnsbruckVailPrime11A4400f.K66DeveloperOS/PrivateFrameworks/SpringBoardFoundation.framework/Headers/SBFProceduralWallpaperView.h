/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import "SpringBoardFoundation-Structs.h"
#import "SBFWallpaperView.h"

@class NSTimer;
@protocol SBFProceduralWallpaper;

@interface SBFProceduralWallpaperView : SBFWallpaperView {
	id<SBFProceduralWallpaper> _proceduralWallpaper;	// 156 = 0x9c
	NSTimer *_colorSampleTimer;	// 160 = 0xa0
}
+ (BOOL)_allowsParallax;	// 0x3275a969
- (id)initWithFrame:(CGRect)frame proceduralWallpaper:(id)wallpaper;	// 0x3275a791
- (id)_computeAverageColor;	// 0x3275aa61
- (void)_handleVariantChange;	// 0x3275a9e1
- (void)_handleVisibilityChange;	// 0x3275a96d
- (void)_sample;	// 0x3275ad81
- (BOOL)_shouldSampleContinuously;	// 0x3275acd1
- (void)_updateSampleTimer;	// 0x3275abe1
- (void)dealloc;	// 0x3275a815
- (BOOL)isDisplayingWallpaper:(id)wallpaper;	// 0x3275a951
- (void)layoutSubviews;	// 0x3275a8c9
- (void)setContinuousColorSamplingEnabled:(BOOL)enabled;	// 0x3275a889
@end

