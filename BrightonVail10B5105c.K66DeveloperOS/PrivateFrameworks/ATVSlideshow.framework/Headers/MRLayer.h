/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class MCPlugSerial, NSDictionary, MRLayerClock, MRAudioPlayer, NSString, NSMutableDictionary, MCPlug, NSMutableArray, MRRenderer, MCPlugHaven, MCPlugParallel;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	NSString *mIDInSupercontainer;	// 28 = 0x1c
	unsigned mIndex;	// 32 = 0x20
	CGSize mPixelSize;	// 36 = 0x24
	double mTimeStamp;	// 44 = 0x2c
	double mTimeIn;	// 52 = 0x34
	MRLayerClock *mClock;	// 60 = 0x3c
	MRLayerRenderingStateOpaque *mRenderingState;	// 64 = 0x40
	NSMutableDictionary *mAnimationTriggers;	// 68 = 0x44
	NSMutableDictionary *mMotions;	// 72 = 0x48
	NSMutableDictionary *mPersistentState;	// 76 = 0x4c
	NSMutableArray *mLayerCommandQueue;	// 80 = 0x50
	NSDictionary *mParameters;	// 84 = 0x54
	MRRenderer *mRenderer;	// 88 = 0x58
	MRAudioPlayer *mAudioPlayer;	// 92 = 0x5c
	id mParentHelper;	// 96 = 0x60
	BOOL mIsPreactivated;	// 100 = 0x64
	BOOL mIsActivated;	// 101 = 0x65
	BOOL mOkToDeferKenBurns;	// 102 = 0x66
	BOOL mIsPrecomputing;	// 103 = 0x67
	BOOL mIsReadonly;	// 104 = 0x68
	BOOL mDoAudio;	// 105 = 0x69
	BOOL mIsSelected;	// 106 = 0x6a
	BOOL mIsDimmed;	// 107 = 0x6b
	BOOL mNeedsRendering;	// 108 = 0x6c
	BOOL mNeedsToUpdateGeometry;	// 109 = 0x6d
	BOOL mNeedsToUpdateInitialState;	// 110 = 0x6e
	BOOL mNeedsToRequestRebuildAudio;	// 111 = 0x6f
	BOOL mNeedsToRequestRebuildVolume;	// 112 = 0x70
	BOOL mNeedsToSynchronizeTime;	// 113 = 0x71
	BOOL mLayerCommandQueueNeedsAttention;	// 114 = 0x72
	BOOL mIsScheduledForDestruction;	// 115 = 0x73
	BOOL mSupportsAccumulation;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) BOOL _isNative3D;	// G=0x324bd941; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x324bd891; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x324b95f5; 
@property(assign, nonatomic) double duration;	// G=0x324b9971; S=0x324b99d5; 
@property(readonly, assign, nonatomic) BOOL hasAudio;	// G=0x324bb715; 
@property(readonly, assign) NSString *idInSupercontainer;	// G=0x324bd8dd; @synthesize=mIDInSupercontainer
@property(readonly, assign, nonatomic) unsigned index;	// G=0x324bd8f1; @synthesize=mIndex
@property(readonly, assign, nonatomic) BOOL isActivated;	// G=0x324bd7f5; @synthesize=mIsActivated
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x324b9f05; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x324bd835; S=0x324bd6ed; @synthesize=mIsDimmed
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x324b9f01; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x324b9ee5; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x324b9efd; 
@property(readonly, assign, nonatomic) BOOL isPreactivated;	// G=0x324bd805; @synthesize=mIsPreactivated
@property(readonly, assign, nonatomic) BOOL isScheduledForDestruction;	// G=0x324bd86d; @synthesize=mIsScheduledForDestruction
@property(assign, nonatomic) BOOL isSelected;	// G=0x324bd815; S=0x324bd825; @synthesize=mIsSelected
@property(readonly, assign) NSMutableDictionary *motions;	// G=0x324bd8a5; @synthesize=mMotions
@property(assign, nonatomic) BOOL needsToSynchronizeTime;	// G=0x324bd901; S=0x324bd911; @synthesize=mNeedsToSynchronizeTime
@property(assign, nonatomic) BOOL needsToUpdateGeometry;	// G=0x324bd921; S=0x324bd931; @synthesize=mNeedsToUpdateGeometry
@property(readonly, assign) NSDictionary *parameters;	// G=0x324bd7b5; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x324bd8b9; S=0x324bd8cd; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x324bd87d; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x324bd789; S=0x324b9615; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x324bd739; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x324bd775; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x324bd761; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x324bd74d; @synthesize=mPlugAsSerial
@property(readonly, assign) MRLayerRenderingStateOpaque *renderingState;	// G=0x324b9605; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x324bd725; @synthesize=mSuperlayer
@property(readonly, assign, nonatomic) BOOL supportsAccumulation;	// G=0x324bd85d; @synthesize=mSupportsAccumulation
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x324bb661; 
@property(assign, nonatomic) double timeIn;	// G=0x324bd7c9; S=0x324bd7e1; @synthesize=mTimeIn
@property(readonly, assign, nonatomic) double timeStamp;	// G=0x324bd845; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x324bd7a1; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x324b87d9
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324ba9e1
- (void)_applyState:(id)state;	// 0x324bb8a5
- (id)_currentState;	// 0x324bd589
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x324bd5dd
// declared property getter: - (BOOL)_isNative3D;	// 0x324bd941
- (void)_observePlug;	// 0x324bda75
- (void)_observePlugOnPreactivate;	// 0x324bdb85
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x324bd94d
- (void)_rebuildAudio;	// 0x324bd101
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324bd945
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324bd949
- (void)_sendAction:(id)action withStates:(id)states async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x324bceb1
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x324bdd25
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x324b9fb1
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x324bd031
- (void)_unobservePlug;	// 0x324bdb15
- (void)_unobservePlugOnDepreactivate;	// 0x324bdc71
- (void)_updateStateWithContext:(id)context;	// 0x324bcca9
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x324bb9d9
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x324bb9d5
- (void)activate;	// 0x324b9aed
// declared property getter: - (id)animationTriggers;	// 0x324bd891
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x324b9969
- (void)cancelLoading;	// 0x324b9ee1
- (void)cleanup;	// 0x324b8d35
// declared property getter: - (id)clock;	// 0x324b95f5
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x324bb7e1
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x324bb719
- (void)deactivate;	// 0x324b9bfd
- (void)dealloc;	// 0x324b8cb5
- (void)depreactivate:(BOOL)depreactivate;	// 0x324b9d21
- (double)doActionTrigger:(id)trigger;	// 0x324bbdf9
- (double)doAnimationTrigger:(id)trigger;	// 0x324bba11
- (double)doGenericAction:(id)action;	// 0x324bc549
- (double)doMotionTrigger:(id)trigger;	// 0x324bc20d
- (double)doStateOperation:(id)operation;	// 0x324bbed9
// declared property getter: - (double)duration;	// 0x324b9971
- (void)endMorphing;	// 0x324b996d
- (void)finalize;	// 0x324b8cf5
// declared property getter: - (BOOL)hasAudio;	// 0x324bb715
- (BOOL)hasSomethingToRender;	// 0x324b9855
// declared property getter: - (id)idInSupercontainer;	// 0x324bd8dd
// declared property getter: - (unsigned)index;	// 0x324bd8f1
// declared property getter: - (BOOL)isActivated;	// 0x324bd7f5
- (BOOL)isActivatedAtTime:(double)time;	// 0x324b9e89
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x324b9f05
// declared property getter: - (BOOL)isDimmed;	// 0x324bd835
- (BOOL)isFlatAndSquare;	// 0x324b9f09
// declared property getter: - (BOOL)isInfinite;	// 0x324b9f01
- (BOOL)isLoadedForTime:(double)time;	// 0x324b9ec9
// declared property getter: - (BOOL)isNative3D;	// 0x324b9ee5
// declared property getter: - (BOOL)isOpaque;	// 0x324b9efd
// declared property getter: - (BOOL)isPreactivated;	// 0x324bd805
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x324b9e31
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x324bd86d
// declared property getter: - (BOOL)isSelected;	// 0x324bd815
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x324b9ed9
// declared property getter: - (id)motions;	// 0x324bd8a5
// declared property getter: - (BOOL)needsToSynchronizeTime;	// 0x324bd901
// declared property getter: - (BOOL)needsToUpdateGeometry;	// 0x324bd921
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x324b8fe1
// declared property getter: - (id)parameters;	// 0x324bd7b5
// declared property getter: - (id)parentHelper;	// 0x324bd8b9
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324bb4f9
// declared property getter: - (id)persistentState;	// 0x324bd87d
// declared property getter: - (CGSize)pixelSize;	// 0x324bd789
// declared property getter: - (id)plug;	// 0x324bd739
// declared property getter: - (id)plugAsHaven;	// 0x324bd775
// declared property getter: - (id)plugAsParallel;	// 0x324bd761
// declared property getter: - (id)plugAsSerial;	// 0x324bd74d
- (void)preactivate;	// 0x324b9a15
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324ba239
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324bac99
// declared property getter: - (MRLayerRenderingStateOpaque *)renderingState;	// 0x324b9605
- (void)resumeOrPause:(BOOL)pause;	// 0x324b98d5
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x324bb36d
- (void)scheduleForDestruction;	// 0x324bb6c9
// declared property setter: - (void)setDuration:(double)duration;	// 0x324b99d5
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x324bd6ed
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x324bd825
// declared property setter: - (void)setNeedsToSynchronizeTime:(BOOL)synchronizeTime;	// 0x324bd911
// declared property setter: - (void)setNeedsToUpdateGeometry:(BOOL)updateGeometry;	// 0x324bd931
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x324b95f1
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x324bd8cd
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x324b9615
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x324bd7e1
- (void)stampTime;	// 0x324bb665
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x324b93ed
- (id)sublayerWithPlug:(id)plug;	// 0x324b92a5
// declared property getter: - (id)superlayer;	// 0x324bd725
// declared property getter: - (BOOL)supportsAccumulation;	// 0x324bd85d
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x324bb661
- (void)synchronizeTime;	// 0x324b9945
// declared property getter: - (double)timeIn;	// 0x324bd7c9
// declared property getter: - (double)timeStamp;	// 0x324bd845
- (void)unload;	// 0x324b9edd
- (void)updateGeometry;	// 0x324b967d
// declared property getter: - (id)uuid;	// 0x324bd7a1
@end

