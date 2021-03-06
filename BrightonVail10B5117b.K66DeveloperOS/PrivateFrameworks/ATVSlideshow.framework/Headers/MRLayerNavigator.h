/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, NSDictionary, MCContainerNavigator, MRTransition, NSArray;

@interface MRLayerNavigator : MRLayer {
	MCContainerNavigator *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	MRLayer *mNextSublayer;	// 132 = 0x84
	MRTransition *mCurrentTransition;	// 136 = 0x88
	BOOL mIsTransitioning;	// 140 = 0x8c
	BOOL mTransitionWasAborted;	// 141 = 0x8d
	MRLayer *mSublayerToPrecompute;	// 144 = 0x90
	id mPrecomputingTarget;	// 148 = 0x94
	unsigned mPrecomputingType;	// 152 = 0x98
	double mTransitionStartTime;	// 156 = 0x9c
	double mTransitionDuration;	// 164 = 0xa4
	BOOL mTransitionIsBackwards;	// 172 = 0xac
	NSDictionary *mTransitionChanges;	// 176 = 0xb0
	NSMutableArray *mHistoryBack;	// 180 = 0xb4
	NSMutableArray *mHistoryForth;	// 184 = 0xb8
	MRLayer *mCurrentSublayer;	// 188 = 0xbc
	BOOL mBackAndForthIsEnabled;	// 192 = 0xc0
	double mForcedTransitionTime;	// 196 = 0xc4
}
@property(assign) BOOL backAndForthIsEnabled;	// G=0x333b3641; S=0x333b3659; @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer *currentSublayer;	// G=0x333b362d; @synthesize=mCurrentSublayer
@property(assign, nonatomic) double forcedTransitionTime;	// G=0x333b3671; S=0x333b3689; @synthesize=mForcedTransitionTime
@property(readonly, assign) NSArray *sublayers;	// G=0x333b3619; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x333b0151
- (id)_createSublayerForPlug:(id)plug;	// 0x333b3a2d
- (id)_currentState;	// 0x333b33a9
- (void)_deleteSublayer:(id)sublayer;	// 0x333b3b75
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x333b3491
- (void)_executeLayerCommandQueue;	// 0x333b369d
- (BOOL)_isNative3D;	// 0x333b1c29
- (void)_observePlug;	// 0x333b3e09
- (void)_observePlugOnPreactivate;	// 0x333b3ec1
- (void)_observeSublayer:(id)sublayer;	// 0x333b3d09
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b40c5
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b4f61
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b4691
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b42e1
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b4489
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x333b3fdd
- (void)_unobservePlug;	// 0x333b3e69
- (void)_unobservePlugOnDepreactivate;	// 0x333b3f5d
- (void)_unobserveSublayer:(id)sublayer;	// 0x333b3d89
- (double)abortTransition:(id)transition;	// 0x333b2319
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x333b20f5
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x333b1fa1
// declared property getter: - (BOOL)backAndForthIsEnabled;	// 0x333b3641
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x333b0c11
- (void)cleanup;	// 0x333b0335
// declared property getter: - (id)currentSublayer;	// 0x333b362d
- (void)deactivate;	// 0x333b0cc1
- (void)depreactivate:(BOOL)depreactivate;	// 0x333b0ead
- (double)doTransition:(id)transition;	// 0x333b2f85
- (double)doTransition:(id)transition backwards:(BOOL)backwards;	// 0x333b2409
- (double)doTransitionBackwards:(id)backwards;	// 0x333b2f99
- (void)endMorphing;	// 0x333b0c7d
- (void)endTransitionToSublayer;	// 0x333b32c1
- (double)finishTransition:(id)transition;	// 0x333b2249
// declared property getter: - (double)forcedTransitionTime;	// 0x333b3671
- (double)goBack;	// 0x333b3139
- (double)goForth;	// 0x333b2fb1
- (BOOL)hasAudio;	// 0x333b1b11
- (BOOL)hasSomethingToRender;	// 0x333b0afd
- (BOOL)isAlphaFriendly;	// 0x333b11dd
- (BOOL)isInfinite;	// 0x333b1251
- (BOOL)isLoadedForTime:(double)time;	// 0x333b0fb1
- (BOOL)isOpaque;	// 0x333b1169
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x333b0635
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b17dd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333b1285
// declared property setter: - (void)setBackAndForthIsEnabled:(BOOL)enabled;	// 0x333b3659
// declared property setter: - (void)setForcedTransitionTime:(double)time;	// 0x333b3689
- (void)setPixelSize:(CGSize)size;	// 0x333b0a15
- (id)sublayerForID:(id)anId;	// 0x333b1c7d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x333b1d99
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x333b196d
// declared property getter: - (id)sublayers;	// 0x333b3619
- (void)synchronizeTime;	// 0x333b0b85
@end

