/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x3268ec3d; 
@property(retain) id compositor;	// G=0x3268e919; S=0x3268e939; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x3268e995; 
@property(readonly, assign, nonatomic) NSArray *instructions;	// G=0x3268eaa9; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x3268ea69; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x3268ea19; 
+ (void)initialize;	// 0x3268e335
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x3268e2ad
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x3268e2f1
- (id)init;	// 0x3268e375
- (int)_auxiliaryTrackID;	// 0x3268eb85
- (id)_auxiliaryTrackLayer;	// 0x3268eb59
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x3268eb25
- (BOOL)_hasPostProcessingLayers;	// 0x3268ebb1
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x3268ef79
- (id)_postProcessingRootLayer;	// 0x3268ec11
- (id)_postProcessingVideoLayer;	// 0x3268ebe5
- (id)_serializableInstructions;	// 0x3268ecb5
// declared property getter: - (id)animationTool;	// 0x3268ec3d
// converted property getter: - (id)compositor;	// 0x3268e919
- (id)copyWithZone:(NSZone *)zone;	// 0x3268e4e1
- (void)dealloc;	// 0x3268e851
- (void)finalize;	// 0x3268e8d5
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x3268e995
// declared property getter: - (id)instructions;	// 0x3268eaa9
- (BOOL)isValidForAsset:(id)asset timeRange:(XXStruct_yD8eWC)range validationDelegate:(id)delegate;	// 0x3268f071
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3268e6bd
// declared property getter: - (float)renderScale;	// 0x3268ea69
// declared property getter: - (CGSize)renderSize;	// 0x3268ea19
- (void)setAnimationTool:(id)tool;	// 0x3268ec5d
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x3268e939
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x3268e9d9
- (void)setInstructions:(id)instructions;	// 0x3268eac9
- (void)setRenderScale:(float)scale;	// 0x3268ea89
- (void)setRenderSize:(CGSize)size;	// 0x3268ea41
@end
