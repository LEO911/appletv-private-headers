/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVVideoCompositionCoreAnimationTool, NSArray, AVMutableVideoCompositionInternal;

@interface AVMutableVideoComposition : AVVideoComposition {
@private
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x326bfef9; S=0x326bff25; 
@property(retain) id compositor;	// G=0x326bfd21; S=0x326bfd4d; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x326bfd79; S=0x326bfda5; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x326bfea1; S=0x326bfecd; 
@property(assign, nonatomic) float renderScale;	// G=0x326bfe49; S=0x326bfe75; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x326bfded; S=0x326bfe19; 
+ (id)videoComposition;	// 0x326bf7b5
+ (id)videoCompositionForAsset:(id)asset;	// 0x326bf7f9
+ (id)videoCompositionForAsset:(id)asset videoGravity:(id)gravity;	// 0x326bfd1d
// declared property getter: - (id)animationTool;	// 0x326bfef9
// converted property getter: - (id)compositor;	// 0x326bfd21
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x326bfd79
// declared property getter: - (id)instructions;	// 0x326bfea1
// declared property getter: - (float)renderScale;	// 0x326bfe49
// declared property getter: - (CGSize)renderSize;	// 0x326bfded
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x326bff25
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x326bfd4d
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x326bfda5
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x326bfecd
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x326bfe75
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x326bfe19
@end
