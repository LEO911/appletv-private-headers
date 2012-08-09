/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x3177e04d; S=0x3177e079; 
@property(retain) id compositor;	// G=0x3177de75; S=0x3177dea1; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x3177decd; S=0x3177def9; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x3177dff5; S=0x3177e021; 
@property(assign, nonatomic) float renderScale;	// G=0x3177df9d; S=0x3177dfc9; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x3177df41; S=0x3177df6d; 
+ (id)videoComposition;	// 0x3177d299
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x3177d2dd
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x3177de71
// declared property getter: - (id)animationTool;	// 0x3177e04d
// converted property getter: - (id)compositor;	// 0x3177de75
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x3177decd
// declared property getter: - (id)instructions;	// 0x3177dff5
// declared property getter: - (float)renderScale;	// 0x3177df9d
// declared property getter: - (CGSize)renderSize;	// 0x3177df41
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x3177e079
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x3177dea1
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x3177def9
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x3177e021
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x3177dfc9
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x3177df6d
@end
