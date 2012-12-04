/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSArray, NSMutableArray, MCContainerParallelizer;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	float mBackgroundColor[4];	// 132 = 0x84
	BOOL mNeedsToUpdateSublayersOrdering;	// 148 = 0x94
	BOOL mNeedsToUpdateBackgroundColor;	// 149 = 0x95
}
@property(readonly, assign) const float *backgroundColor;	// G=0x324c7855; 
@property(readonly, assign) NSArray *sublayers;	// G=0x324ca3ed; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x324c6f69
- (id)_createSublayerForPlug:(id)plug;	// 0x324ca959
- (id)_currentState;	// 0x324ca039
- (void)_deleteSublayer:(id)sublayer;	// 0x324caaf5
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x324ca265
- (void)_executeLayerCommandQueue;	// 0x324ca401
- (void)_observePlug;	// 0x324caddd
- (void)_observePlugOnPreactivate;	// 0x324cae95
- (void)_observeSublayer:(id)sublayer;	// 0x324cac79
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x324cad15
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324cb0c9
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324cb509
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x324cafe1
- (BOOL)_sublayersMakesOpaque;	// 0x324c8081
- (void)_unobservePlug;	// 0x324cae3d
- (void)_unobservePlugOnDepreactivate;	// 0x324caf4d
- (void)_unobserveSublayer:(id)sublayer;	// 0x324cacbd
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x324cad85
- (void)_updateSublayersOrdering;	// 0x324ca891
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x324c9b19
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x324c9735
// declared property getter: - (const float *)backgroundColor;	// 0x324c7855
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x324c7a95
- (void)cleanup;	// 0x324c70ad
- (void)deactivate;	// 0x324c7ced
- (void)depreactivate:(BOOL)depreactivate;	// 0x324c7ded
- (void)endMorphing;	// 0x324c7bd1
- (BOOL)hasAudio;	// 0x324c8e45
- (BOOL)hasSomethingToRender;	// 0x324c7879
- (BOOL)isAlphaFriendly;	// 0x324c838d
- (BOOL)isInfinite;	// 0x324c8431
- (BOOL)isLoadedForTime:(double)time;	// 0x324c7f0d
- (BOOL)isOpaque;	// 0x324c8351
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x324c7319
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324c8c75
- (double)phaseInSublayerForID:(id)anId;	// 0x324c9db9
- (double)phaseOutSublayerForID:(id)anId;	// 0x324c9f31
- (void)preactivate;	// 0x324c7cad
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324c8481
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x324c8d69
- (void)setPixelSize:(CGSize)size;	// 0x324c776d
- (id)sublayerForID:(id)anId;	// 0x324c8f5d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x324c90a9
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x324c92e5
// declared property getter: - (id)sublayers;	// 0x324ca3ed
- (void)synchronizeTime;	// 0x324c79a1
@end
