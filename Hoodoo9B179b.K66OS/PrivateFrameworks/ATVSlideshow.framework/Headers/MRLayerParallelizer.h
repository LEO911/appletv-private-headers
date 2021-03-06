/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerParallelizer, NSMutableDictionary, NSMutableArray, NSString, NSArray;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 124 = 0x7c
	NSMutableArray *mSublayers;	// 128 = 0x80
	NSMutableDictionary *mSublayersForPlugs;	// 132 = 0x84
	NSString *mCurrentPageID;	// 136 = 0x88
	CGColorRef mBackgroundColor;	// 140 = 0x8c
	BOOL mNeedsToUpdateSublayersOrdering;	// 144 = 0x90
	BOOL mNeedsToUpdateBackgroundColor;	// 145 = 0x91
}
@property(copy) NSString *currentPageID;	// G=0x35548a95; S=0x35548aa9; @synthesize=mCurrentPageID
@property(readonly, assign) NSArray *sublayers;	// G=0x35548a85; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x355458b9
- (id)_createSublayerForPlug:(id)plug;	// 0x35548ffd
- (id)_currentState;	// 0x35548711
- (void)_deleteSublayer:(id)sublayer;	// 0x35549191
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x35548915
- (void)_executeLayerCommandQueue;	// 0x35548acd
- (void)_observePlug;	// 0x35549459
- (void)_observePlugOnPreactivate;	// 0x35549511
- (void)_observeSublayer:(id)sublayer;	// 0x35549301
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x3554939d
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x35549721
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x35549b0d
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x3554965d
- (BOOL)_sublayersMakesOpaque;	// 0x355469f9
- (void)_unobservePlug;	// 0x355494b9
- (void)_unobservePlugOnDepreactivate;	// 0x355495c5
- (void)_unobserveSublayer:(id)sublayer;	// 0x35549345
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x35549405
- (void)_updateSublayersOrdering;	// 0x35548f35
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x3554820d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x35547e21
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x35546451
- (void)cleanup;	// 0x35545a29
// declared property getter: - (id)currentPageID;	// 0x35548a95
- (void)deactivate;	// 0x355466c1
- (void)depreactivate:(BOOL)depreactivate;	// 0x355467a5
- (void)endMorphing;	// 0x355465c1
- (BOOL)hasAudio;	// 0x355475e5
- (BOOL)hasSomethingToRender;	// 0x3554627d
- (BOOL)isAlphaFriendly;	// 0x35546cb1
- (BOOL)isInfinite;	// 0x35546d29
- (BOOL)isLoadedForTime:(double)time;	// 0x355468a1
- (BOOL)isOpaque;	// 0x35546c6d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35545c9d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x35547429
- (double)phaseInSublayerForID:(id)anId;	// 0x355484a1
- (double)phaseOutSublayerForID:(id)anId;	// 0x35548609
- (void)preactivate;	// 0x35546681
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x35546d61
// declared property setter: - (void)setCurrentPageID:(id)anId;	// 0x35548aa9
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x3554751d
- (void)setPixelSize:(CGSize)size;	// 0x355460c1
- (id)sublayerForID:(id)anId;	// 0x355476dd
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x35547815
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x355479f9
// declared property getter: - (id)sublayers;	// 0x35548a85
- (void)synchronizeTime;	// 0x35546379
@end

