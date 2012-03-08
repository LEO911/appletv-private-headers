/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableDictionary, NSMutableArray, MCContainerParallelizer, NSString, NSArray;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 112 = 0x70
	NSMutableArray *mSublayers;	// 116 = 0x74
	NSMutableDictionary *mSublayersForPlugs;	// 120 = 0x78
	NSString *mCurrentPageID;	// 124 = 0x7c
	CGColorRef mBackgroundColor;	// 128 = 0x80
	BOOL mNeedsToUpdateSublayersOrdering;	// 132 = 0x84
	BOOL mNeedsToUpdateBackgroundColor;	// 133 = 0x85
}
@property(copy) NSString *currentPageID;	// G=0x32f57665; S=0x32f57679; @synthesize=mCurrentPageID
@property(readonly, assign) NSArray *sublayers;	// G=0x32f57655; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x32f54c0d
- (id)_createSublayerForPlug:(id)plug;	// 0x32f57ba9
- (void)_deleteSublayer:(id)sublayer;	// 0x32f57d3d
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x32f574e5
- (void)_executeLayerCommandQueue;	// 0x32f5769d
- (void)_observePlug;	// 0x32f58005
- (void)_observePlugOnPreactivate;	// 0x32f580bd
- (void)_observeSublayer:(id)sublayer;	// 0x32f57ead
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x32f57f49
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f582cd
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f5866d
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x32f58209
- (void)_unobservePlug;	// 0x32f58065
- (void)_unobservePlugOnDepreactivate;	// 0x32f58171
- (void)_unobserveSublayer:(id)sublayer;	// 0x32f57ef1
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x32f57fb1
- (void)_updateSublayersOrdering;	// 0x32f57b05
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x32f56ed9
- (void)cleanup;	// 0x32f54d7d
// declared property getter: - (id)currentPageID;	// 0x32f57665
- (void)deactivate;	// 0x32f557a5
- (void)depreactivate:(BOOL)depreactivate;	// 0x32f55889
- (BOOL)hasAudio;	// 0x32f5669d
- (BOOL)hasSomethingToRender;	// 0x32f555a9
- (BOOL)isAlphaFriendly;	// 0x32f55d7d
- (BOOL)isInfinite;	// 0x32f55df5
- (BOOL)isLoadedForTime:(double)time;	// 0x32f55985
- (BOOL)isOpaque;	// 0x32f55add
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f54ff1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f564e1
- (double)phaseInSublayerForID:(id)anId;	// 0x32f572c5
- (double)phaseOutSublayerForID:(id)anId;	// 0x32f573dd
- (void)preactivate;	// 0x32f55765
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f55e2d
// declared property setter: - (void)setCurrentPageID:(id)anId;	// 0x32f57679
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x32f565d5
- (void)setPixelSize:(CGSize)size;	// 0x32f553ed
- (id)sublayerForID:(id)anId;	// 0x32f56795
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x32f568cd
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x32f56ab1
// declared property getter: - (id)sublayers;	// 0x32f57655
- (void)synchronizeTime;	// 0x32f556a5
@end
