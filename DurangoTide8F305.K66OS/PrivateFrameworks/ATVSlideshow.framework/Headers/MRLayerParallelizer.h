/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableArray, NSArray, NSString, MCContainerParallelizer, NSMutableDictionary;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 96 = 0x60
	NSMutableArray *mSublayers;	// 100 = 0x64
	NSMutableDictionary *mSublayersForPlugs;	// 104 = 0x68
	BOOL mNeedsToUpdateSublayersOrdering;	// 108 = 0x6c
	NSString *mCurrentPageID;	// 112 = 0x70
	NSMutableDictionary *mPluggersForPlugs;	// 116 = 0x74
}
@property(copy) NSString *currentPageID;	// G=0x332e3ca5; S=0x332e3cbd; @synthesize=mCurrentPageID
@property(readonly, assign) NSArray *sublayers;	// G=0x332e3c95; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x332e1461
- (id)_createSublayerForPlug:(id)plug;	// 0x332e40ed
- (void)_deleteSublayer:(id)sublayer;	// 0x332e42cd
- (void)_executeLayerCommandQueue;	// 0x332e3ce9
- (BOOL)_isNative3D;	// 0x332e30b9
- (void)_observePlug;	// 0x332e45f5
- (void)_observePlugOnPreactivate;	// 0x332e46b9
- (void)_observeSublayer:(id)sublayer;	// 0x332e44a5
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x332e4531
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332e48f1
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332e4a91
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x332e481d
- (void)_unobservePlug;	// 0x332e4661
- (void)_unobservePlugOnDepreactivate;	// 0x332e4775
- (void)_unobserveSublayer:(id)sublayer;	// 0x332e44e1
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x332e459d
- (void)_updateSublayersOrdering;	// 0x332e4059
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x332e38e1
- (void)cleanup;	// 0x332e1611
// declared property getter: - (id)currentPageID;	// 0x332e3ca5
- (void)deactivate;	// 0x332e2171
- (void)depreactivate:(BOOL)depreactivate;	// 0x332e2271
- (BOOL)hasAudio;	// 0x332e2fbd
- (BOOL)hasSomethingToRender;	// 0x332e1ebd
- (BOOL)isAlphaFriendly;	// 0x332e274d
- (BOOL)isInfinite;	// 0x332e27cd
- (BOOL)isLoadedForTime:(double)time;	// 0x332e2385
- (BOOL)isOpaque;	// 0x332e24dd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x332e190d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332e2d79
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332e2811
- (void)resumeOrPause:(BOOL)pause;	// 0x332e1fdd
// declared property setter: - (void)setCurrentPageID:(id)anId;	// 0x332e3cbd
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x332e2e91
- (void)setPixelSize:(CGSize)size;	// 0x332e1d11
- (id)sublayerForID:(id)anId;	// 0x332e3111
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x332e3271
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x332e349d
// declared property getter: - (id)sublayers;	// 0x332e3c95
- (void)synchronizeTime;	// 0x332e20a9
@end
