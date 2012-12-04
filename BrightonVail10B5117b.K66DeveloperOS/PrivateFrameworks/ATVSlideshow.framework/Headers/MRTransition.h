/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "ATVSlideshow-Structs.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class MRLayer, NSString, NSDictionary, MRImage;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x333e42ad; S=0x333e3c19; @synthesize=mAttributes
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x333e3f69; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x333e3fd1; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x333e3ee9; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x333e3f29; 
@property(readonly, assign, nonatomic) BOOL needsSourceLayerImageForPrecomputing;	// G=0x333e3b99; 
@property(readonly, assign, nonatomic) BOOL needsTargetLayerImageForPrecomputing;	// G=0x333e3bd9; 
@property(readonly, assign, nonatomic) BOOL noContentsMotion;	// G=0x333e3b59; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x333e42bd; S=0x333e42d5; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x333e4289; S=0x333e429d; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x333e420d; S=0x333e4221; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x333e4255; S=0x333e3de9; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x333e4231; S=0x333e4245; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x333e4265; S=0x333e3e29; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x333e4275; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x333e37b9
- (id)initWithTransitionID:(id)transitionID;	// 0x333e3809
// declared property getter: - (id)attributes;	// 0x333e42ad
- (void)cancelLoading;	// 0x333e3ee5
- (void)cleanup;	// 0x333e39c9
- (void)dealloc;	// 0x333e3949
- (void)finalize;	// 0x333e3989
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x333e3f69
// declared property getter: - (BOOL)isInfinite;	// 0x333e3fd1
- (BOOL)isLoadedForTime:(double)time;	// 0x333e3e69
// declared property getter: - (BOOL)isNative3D;	// 0x333e3ee9
// declared property getter: - (BOOL)isOpaque;	// 0x333e3f29
- (BOOL)isRetainedByTransitioner;	// 0x333e3b41
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x333e3e6d
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x333e3b99
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x333e3bd9
// declared property getter: - (BOOL)noContentsMotion;	// 0x333e3b59
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333e40a5
// declared property getter: - (CGSize)pixelSize;	// 0x333e42bd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333e3fd5
// declared property getter: - (id)presetID;	// 0x333e4289
- (void)releaseByTransitioner:(id)transitioner;	// 0x333e3a65
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333e4079
- (void)retainByTransitioner:(id)transitioner;	// 0x333e3a3d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333e408d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x333e3c19
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x333e42d5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x333e429d
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x333e4221
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x333e3de9
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x333e4245
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x333e3e29
// declared property getter: - (id)sourceLayer;	// 0x333e420d
// declared property getter: - (id)sourceLayerImage;	// 0x333e4255
// declared property getter: - (id)targetLayer;	// 0x333e4231
// declared property getter: - (id)targetLayerImage;	// 0x333e4265
// declared property getter: - (id)transitionID;	// 0x333e4275
- (void)unload;	// 0x333e3e71
@end
