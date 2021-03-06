/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"
#import <__objc_empty_vtable.h> // Unknown library

@class MPDocument, EAGLContext, MRRenderer, NSDictionary, NSString, MPFaceDetector, NSTimer;

@interface MRMarimbaLayer : __objc_empty_vtable <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {
	MRRenderer *_renderer;	// 52 = 0x34
	MPDocument *_document;	// 56 = 0x38
	BOOL _masterClockIsSet;	// 60 = 0x3c
	BOOL _bailTimeWatcher;	// 61 = 0x3d
	BOOL _stopWithVideo;	// 62 = 0x3e
	BOOL _wasSuspended;	// 63 = 0x3f
	MPFaceDetector *_faceDetector;	// 64 = 0x40
	float _morphingToAspectRatio;	// 68 = 0x44
	CGSize _frameBufferSize;	// 72 = 0x48
	NSDictionary *_nextMorphInfo;	// 80 = 0x50
	NSTimer *_faceTimer;	// 84 = 0x54
	BOOL _usesNewImageManager;	// 88 = 0x58
	BOOL _enableSlideDidChangeNotification;	// 89 = 0x59
	NSString *_lastSlideChange;	// 92 = 0x5c
	EAGLContext *_context;	// 96 = 0x60
	unsigned _viewRenderbuffer;	// 100 = 0x64
	unsigned _viewFramebuffer;	// 104 = 0x68
	unsigned _depthBuffer;	// 108 = 0x6c
	BOOL _isReadonly;	// 112 = 0x70
	BOOL _slidesAreReadonly;	// 113 = 0x71
}
@property(assign) BOOL bailTimeWatcher;	// G=0x33a2f56d; S=0x33a2f57d; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x33a2da71; S=0x33a2da95; 
@property(retain, nonatomic) MPDocument *document;	// G=0x33a2ce79; S=0x33a2d0d9; 
@property(assign, nonatomic) BOOL enableSlideDidChangeNotification;	// G=0x33a2f509; S=0x33a2f435; @synthesize=_enableSlideDidChangeNotification
@property(assign, nonatomic) double framesPerSecond;	// G=0x33a2de11; S=0x33a2de45; @dynamic
@property(readonly, assign, nonatomic) BOOL isPlaying;	// G=0x33a2d811; 
@property(assign, nonatomic) BOOL isReadonly;	// G=0x33a2f4b9; S=0x33a2f4c9; @synthesize=_isReadonly
@property(retain) NSString *lastSlideChange;	// G=0x33a2f519; S=0x33a2f529; converted property
@property(readonly, assign, nonatomic) MRRenderer *renderer;	// G=0x33a2de01; 
@property(readonly, assign) CGSize size;	// G=0x33a2d0a1; 
@property(assign, nonatomic) BOOL slidesAreReadonly;	// G=0x33a2f4d9; S=0x33a2f4e9; @synthesize=_slidesAreReadonly
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x33a2d9c1; S=0x33a2d9d1; 
@property(assign, nonatomic) double time;	// G=0x33a2dab5; S=0x33a2dad5; 
@property(readonly, assign, nonatomic) double timeRemaining;	// G=0x33a2db19; 
@property(assign, nonatomic) BOOL usesNewImageManager;	// G=0x33a2f4f9; S=0x33a2ce8d; @synthesize=_usesNewImageManager
@property(assign, nonatomic) float volume;	// G=0x33a2db79; S=0x33a2db99; 
+ (id)layerWithDocument:(id)document;	// 0x33a2c799
+ (id)layerWithDocument:(id)document size:(CGSize)size;	// 0x33a2c739
+ (void)releaseResources;	// 0x33a2c7d5
- (id)init;	// 0x33a2ca35
- (id)_currentEffectContainer;	// 0x33a28559
- (id)_currentEffectLayer;	// 0x33a28485
- (id)_effectContainerForTime:(double)time;	// 0x33a28f35
- (id)_firstEffectContainer;	// 0x33a28e85
- (int)_mainLayerIndex;	// 0x33a2907d
- (void)_postNotificationForSlideChange:(id)slideChange;	// 0x33a2adad
- (void)_reauthorForAspectRatioChange;	// 0x33a2e4ad
- (void)_slideDidAppear:(id)_slide;	// 0x33a2ac8d
- (void)aspectRatioChangedTo:(id)to;	// 0x33a2f2d9
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x33a2f56d
- (void)beginGesture:(id)gesture;	// 0x33a2bc75
- (BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;	// 0x33a2b3e1
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33a2e119
- (id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint *)point3;	// 0x33a2af09
- (void)callbackThread:(id)thread;	// 0x33a29131
- (void)cancelGesture:(id)gesture;	// 0x33a2c671
- (void)cleanup;	// 0x33a2cd6d
- (CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;	// 0x33a2b311
- (id)currentSlide;	// 0x33a295a1
- (id)currentSlides;	// 0x33a29301
- (void)dealloc;	// 0x33a2cb71
- (void)destroyFramebuffer;	// 0x33a2f58d
- (void)didAddEffects:(id)effects;	// 0x33a2f261
- (void)didApplyStyle:(id)style;	// 0x33a2efd1
- (void)didLiveChanged:(id)changed;	// 0x33a2d7a5
- (id)displayedEffectContainers;	// 0x33a27af1
// declared property getter: - (BOOL)displaysFPS;	// 0x33a2da71
- (void)doGesture:(id)gesture;	// 0x33a2c089
// declared property getter: - (id)document;	// 0x33a2ce79
- (BOOL)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x33a2eb69
- (BOOL)effectRequestedSlidesAfterDelay:(id)delay;	// 0x33a2ee81
// declared property getter: - (BOOL)enableSlideDidChangeNotification;	// 0x33a2f509
- (void)endGesture:(id)gesture;	// 0x33a2c61d
- (BOOL)endLiveUpdateForHitBlob:(id)hitBlob;	// 0x33a2b839
- (void)endMorphing;	// 0x33a2e2d1
// declared property getter: - (double)framesPerSecond;	// 0x33a2de11
- (BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;	// 0x33a2b121
- (void)goBack;	// 0x33a2dbed
- (void)goForth;	// 0x33a2dc0d
- (void)gotoBeginning;	// 0x33a2dce1
- (void)gotoEnd;	// 0x33a2dc2d
- (void)gotoNextSlide;	// 0x33a29ad1
- (void)gotoPreviousSlide;	// 0x33a2a1f9
- (void)gotoSlide:(id)slide;	// 0x33a2a8a9
- (BOOL)isInFade;	// 0x33a28759
- (BOOL)isInTransition;	// 0x33a28931
// declared property getter: - (BOOL)isPlaying;	// 0x33a2d811
// declared property getter: - (BOOL)isReadonly;	// 0x33a2f4b9
// converted property getter: - (id)lastSlideChange;	// 0x33a2f519
- (void)lockRendering;	// 0x33a2e699
- (void)morphToAspectRatio:(float)aspectRatio andOrientation:(int)orientation withDuration:(double)duration;	// 0x33a2dec1
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x33a27b59
- (void)moveToNextEffectContainer;	// 0x33a27d81
- (void)moveToPreviousEffectContainer;	// 0x33a27e65
- (void)moveToSubtitleForSlide:(id)slide;	// 0x33a281d1
- (void)moveToTitleSlide;	// 0x33a27f35
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x33a2e6d9
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x33a2e9f1
- (void)nextFrame;	// 0x33a2dd31
- (void)pause;	// 0x33a2d921
- (void)pauseWhenStill;	// 0x33a2d9a1
- (void)play;	// 0x33a2d839
- (void)prevFrame;	// 0x33a2dd99
- (double)relativeTime;	// 0x33a27909
- (double)relativeTimeForBackgroundAudio;	// 0x33a279a1
- (double)relativeTimeForLayer:(id)layer;	// 0x33a27a49
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x33a298a1
- (void)removeFadeIn;	// 0x33a2aaf9
// declared property getter: - (id)renderer;	// 0x33a2de01
- (void)requestRendering:(BOOL)rendering;	// 0x33a2de75
- (void)setAsynchronous:(BOOL)asynchronous;	// 0x33a2ce89
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x33a2f57d
- (void)setBounds:(CGRect)bounds;	// 0x33a2cec1
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x33a2da95
// declared property setter: - (void)setDocument:(id)document;	// 0x33a2d0d9
// declared property setter: - (void)setEnableSlideDidChangeNotification:(BOOL)changeNotification;	// 0x33a2f435
// declared property setter: - (void)setFramesPerSecond:(double)second;	// 0x33a2de45
// declared property setter: - (void)setIsReadonly:(BOOL)readonly;	// 0x33a2f4c9
// converted property setter: - (void)setLastSlideChange:(id)change;	// 0x33a2f529
// declared property setter: - (void)setSlidesAreReadonly:(BOOL)readonly;	// 0x33a2f4e9
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x33a2d9d1
- (void)setSuspended:(BOOL)suspended;	// 0x33a2dbb9
// declared property setter: - (void)setTime:(double)time;	// 0x33a2dad5
// declared property setter: - (void)setUsesNewImageManager:(BOOL)manager;	// 0x33a2ce8d
// declared property setter: - (void)setVolume:(float)volume;	// 0x33a2db99
// declared property getter: - (CGSize)size;	// 0x33a2d0a1
// declared property getter: - (BOOL)slidesAreReadonly;	// 0x33a2f4d9
- (CGImageRef)snapshotAsCGImage;	// 0x33a2f391
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x33a2f2dd
// declared property getter: - (BOOL)stopWithVideo;	// 0x33a2d9c1
// declared property getter: - (double)time;	// 0x33a2dab5
// declared property getter: - (double)timeRemaining;	// 0x33a2db19
- (void)togglePlayback;	// 0x33a2d7c5
- (void)touchesBegan:(id)began;	// 0x33a2f3b1
- (void)touchesCancelled:(id)cancelled;	// 0x33a2f415
- (BOOL)touchesEnded:(id)ended;	// 0x33a2f3f1
- (void)touchesMoved:(id)moved;	// 0x33a2f3d1
- (void)unlockRendering;	// 0x33a2e6b9
- (BOOL)updateFramebuffer;	// 0x33a2f691
// declared property getter: - (BOOL)usesNewImageManager;	// 0x33a2f4f9
// declared property getter: - (float)volume;	// 0x33a2db79
- (void)warmupRenderer;	// 0x33a2de95
- (void)watcherThread:(id)thread;	// 0x33a2921d
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x33a28b4d
@end

