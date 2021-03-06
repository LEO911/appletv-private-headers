/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRLayerParallelizer, MRContext, NSDictionary, CADisplayLink, MRRendererInternal, MCMontage;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate, MZMediaManagement, MRRenderingDelegate, MREditingDelegate, MRFeatureDelegate;

@interface MRRenderer : NSObject {
	MCMontage *mMontage;	// 4 = 0x4
	MRLayerParallelizer *mTopMRLayer;	// 8 = 0x8
	float mVolume;	// 12 = 0xc
	CGSize mSize;	// 16 = 0x10
	double mTimeQuantum;	// 24 = 0x18
	CADisplayLink *mDisplayLink;	// 32 = 0x20
	double mDisplayLinkTimestamp;	// 36 = 0x24
	BOOL mIsCleanedUp;	// 44 = 0x2c
	BOOL mIsPlaying;	// 45 = 0x2d
	BOOL mPushRendering;	// 46 = 0x2e
	int mMode;	// 48 = 0x30
	BOOL mDisplaysFPS;	// 52 = 0x34
	BOOL mIsEditing;	// 53 = 0x35
	NSDictionary *mParameters;	// 56 = 0x38
	MRRendererInternal *mInternal;	// 60 = 0x3c
	id<MZMediaManagement> mAssetManagementDelegate;	// 64 = 0x40
	id<MRRenderingDelegate> mRenderingDelegate;	// 68 = 0x44
	id<MREditingDelegate> mEditingDelegate;	// 72 = 0x48
	id<MRFeatureDelegate> mFeatureDelegate;	// 76 = 0x4c
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 80 = 0x50
@private
	BOOL _asynchronousOperationsAreSuspended;	// 84 = 0x54
}
@property(retain, nonatomic) id<MZMediaManagement> assetManagementDelegate;	// G=0x33593ee9; S=0x33592639; @synthesize=mAssetManagementDelegate
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x33594039; S=0x33594049; @synthesize=_asynchronousOperationsAreSuspended
@property(retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;	// G=0x33597b41; S=0x33597b61; 
@property(readonly, assign) MRContext *context;	// G=0x33596815; 
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x33593ed9; S=0x335926ad; @synthesize=mDisplaysFPS
@property(assign) BOOL dontShowDRMUI;	// G=0x33596835; S=0x33596855; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x33593f69; S=0x33593f7d; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x33593ef9; S=0x33593f0d; @synthesize=mFeatureDelegate
@property(assign) BOOL isEditing;	// G=0x33593e89; S=0x33593e99; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x33596959; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x33592621; 
@property(readonly, assign) BOOL isPlaying;	// G=0x33593ea9; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x33597afd; S=0x33597b1d; 
@property(assign) double masterClock;	// G=0x33596875; S=0x335968cd; 
@property(assign, nonatomic) int mode;	// G=0x33593e79; S=0x33592525; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x33593e4d; S=0x3358f711; @synthesize=mMontage
@property(readonly, assign) NSDictionary *parameters;	// G=0x33594029; @synthesize=mParameters
@property(assign) BOOL pushRendering;	// G=0x33593eb9; S=0x33593ec9; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x33593f31; S=0x33593f45; @synthesize=mRenderingDelegate
@property(assign) BOOL screenBurnTest;	// G=0x33597b85; S=0x33597ba5; 
@property(assign, nonatomic) CGSize size;	// G=0x33593e5d; S=0x33592369; @synthesize=mSize
@property(assign) BOOL slaveFrameMode;	// G=0x3358faa9; S=0x3358fac9; 
@property(assign) double time;	// G=0x33592165; S=0x335922fd; 
@property(assign) double timeQuantum;	// G=0x33593fc1; S=0x33593ff5; @synthesize=mTimeQuantum
@property(assign) float volume;	// G=0x33593fa1; S=0x33593fb1; @synthesize=mVolume
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x33595e29
- (id)init;	// 0x3358ef9d
- (id)initWithParameters:(id)parameters;	// 0x3358eb41
- (void)_displayFPS:(double)fps;	// 0x335942d9
- (double)_doAction:(id)action;	// 0x335926cd
- (void)_doActions;	// 0x33592fed
- (void)_doSnapshot;	// 0x335919c1
- (BOOL)_lockRendering;	// 0x3358f9e5
- (int)_maxLinesForCurrentEditingTextElement;	// 0x335967c5
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x33596761
- (void)_nearingEndForEffect:(id)effect;	// 0x33593c29
- (void)_nearingEndForSerializer:(id)serializer;	// 0x33593b65
- (void)_render:(id)render;	// 0x33590429
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x33591169
- (void)_renderThreadMain;	// 0x33590069
- (void)_sendNotificationMainThread:(id)thread;	// 0x33597cc1
- (void)_setTime:(double)time isResyncing:(BOOL)resyncing;	// 0x33594059
- (void)_startRenderTimer;	// 0x33590255
- (void)_stopRenderTimer;	// 0x33590305
- (double)_unalteredTime;	// 0x33594141
- (void)_undimAllLayersInLayer:(id)layer;	// 0x33596bf9
- (void)_unlockRendering;	// 0x3358fa7d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33595c59
- (void)addAudioPlayer:(id)player;	// 0x335964e9
- (void)addNavigatorToBackHistory:(id)backHistory;	// 0x33591e05
- (void)addNavigatorToForthHistory:(id)forthHistory;	// 0x33591e85
// declared property getter: - (id)assetManagementDelegate;	// 0x33593ee9
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x33594039
// declared property getter: - (id)asynchronousOperationsDelegate;	// 0x33597b41
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x33595e41
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x33596089
- (BOOL)canGoBack;	// 0x33591d8d
- (BOOL)canGoForth;	// 0x33591dc9
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x33597d2d
- (void)cleanup;	// 0x3358f079
// declared property getter: - (id)context;	// 0x33596815
- (CGImageRef)copyCGSnapshotAtTime:(double)time andSize:(CGSize)size;	// 0x33597919
- (CGImageRef)currentFrameAsCGImage;	// 0x33597941
- (void)dealloc;	// 0x3358efb1
- (void)deselectAllLayers;	// 0x33596aa1
- (void)deselectLayer:(id)layer;	// 0x335969fd
- (void)dimLayersExceptForPathTo:(id)to;	// 0x33596f89
// declared property getter: - (BOOL)displaysFPS;	// 0x33593ed9
- (void)doAction:(id)action;	// 0x33592ef1
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x33596835
- (int)dragTo:(CGPoint)to withModifiers:(unsigned)modifiers;	// 0x33595641
- (void)dumpActiveHierarchy;	// 0x33593ae1
// declared property getter: - (id)editingDelegate;	// 0x33593f69
- (void)endTextEditing:(BOOL)editing;	// 0x33596185
// declared property getter: - (id)featureDelegate;	// 0x33593ef9
- (void)finalize;	// 0x3358f015
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x33595d61
- (void)goBack;	// 0x33591a6d
- (void)goForth;	// 0x33591bfd
- (void)gotoState:(id)state;	// 0x33593971
- (int)hitEndAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x33595671
- (int)hitStartAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x33594885
// declared property getter: - (BOOL)isEditing;	// 0x33593e89
// declared property getter: - (BOOL)isFlipped;	// 0x33596959
- (BOOL)isHitting;	// 0x33595b2d
// declared property getter: - (BOOL)isOffscreen;	// 0x33592621
// declared property getter: - (BOOL)isPlaying;	// 0x33593ea9
- (id)layerForPlug:(id)plug;	// 0x33593825
- (id)layerForPlugObjectID:(id)plugObjectID;	// 0x33593865
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x33595b4d
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3 localTime:(double *)time;	// 0x335962a9
// declared property getter: - (id)liveSlideshowDelegate;	// 0x33597afd
- (void)lockRendering;	// 0x3358f9c5
// declared property getter: - (double)masterClock;	// 0x33596875
// declared property getter: - (int)mode;	// 0x33593e79
// declared property getter: - (id)montage;	// 0x33593e4d
- (unsigned)mouseDownAt:(CGPoint)at clickCount:(int)count withModifiers:(unsigned)modifiers;	// 0x33596299
- (void)moveNavigatorFromBackToForthHistory:(id)forthHistory;	// 0x33591f5d
- (void)moveNavigatorFromForthToBackHistory:(id)backHistory;	// 0x33592061
- (void)nearingEndForEffect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x33593d19
- (void)nearingEndForSerializer:(id)serializer;	// 0x33593bd1
// declared property getter: - (id)parameters;	// 0x33594029
- (void)pause;	// 0x3358fae9
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x33593885
- (void)processAudioPlayers;	// 0x335962e1
// declared property getter: - (BOOL)pushRendering;	// 0x33593eb9
- (void)removeAudioPlayer:(id)player;	// 0x335966b9
- (void)removeNavigatorFromBackHistory:(id)backHistory;	// 0x33591f05
- (void)removeNavigatorFromForthHistory:(id)forthHistory;	// 0x33591f31
- (void)render;	// 0x335962cd
// declared property getter: - (id)renderingDelegate;	// 0x33593f31
- (void)requestRendering:(BOOL)rendering;	// 0x3358fe11
- (BOOL)requestRenderingWithin:(double)within;	// 0x3358ffc1
- (void)resume;	// 0x3358fc8d
// declared property getter: - (BOOL)screenBurnTest;	// 0x33597b85
- (void)selectLayer:(id)layer;	// 0x3359699d
- (id)selectedLayers;	// 0x33596bd9
- (void)sendNotification:(id)notification;	// 0x33597cfd
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x33592639
// declared property setter: - (void)setAsynchronousOperationsDelegate:(id)delegate;	// 0x33597b61
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x335926ad
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x33596855
- (void)setEAGLContext:(id)context;	// 0x3358f4e5
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x33593f7d
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x33593f0d
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x335968f5
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x33593e99
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x33597b1d
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x335968cd
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x33597a69
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x33597aa1
// declared property setter: - (void)setMode:(int)mode;	// 0x33592525
// declared property setter: - (void)setMontage:(id)montage;	// 0x3358f711
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x33593ec9
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x33593f45
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x33597ba5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33592369
// declared property setter: - (void)setSlaveFrameMode:(BOOL)mode;	// 0x3358fac9
- (void)setTemporarySize:(CGSize)size;	// 0x33592465
// declared property setter: - (void)setTime:(double)time;	// 0x335922fd
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x33593ff5
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)workaround;	// 0x33597cad
// declared property setter: - (void)setVolume:(float)volume;	// 0x33593fb1
// declared property getter: - (CGSize)size;	// 0x33593e5d
// declared property getter: - (BOOL)slaveFrameMode;	// 0x3358faa9
- (CGImageRef)snapshotAsCGImageForTime:(double)time andSize:(CGSize)size;	// 0x335974fd
- (id)snapshotOfStates:(id)states atSize:(CGSize)size;	// 0x33593a31
- (void)stall;	// 0x33593e11
- (void)stepBackward;	// 0x33591a19
- (void)stepForward;	// 0x335919c5
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x33594049
- (int)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x33595425
// declared property getter: - (double)time;	// 0x33592165
// declared property getter: - (double)timeQuantum;	// 0x33593fc1
- (int)trackingAt:(CGPoint)at;	// 0x33594ad1
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x3359331d
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x335935a1
- (void)undimAllLayers;	// 0x33597499
- (void)unlockRendering;	// 0x3358f9d5
- (void)updateSelectionLayer;	// 0x33596999
// declared property getter: - (float)volume;	// 0x33593fa1
- (void)warmupAudio:(BOOL)audio;	// 0x33590065
@end

