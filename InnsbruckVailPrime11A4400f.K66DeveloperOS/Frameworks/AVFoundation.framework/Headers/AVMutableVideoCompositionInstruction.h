/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionInstruction.h"

@class NSArray, AVMutableVideoCompositionInstructionInternal;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
	AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 8 = 0x8
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x2c2a551d; S=0x2c2a5549; 
@property(assign, nonatomic) BOOL enablePostProcessing;	// G=0x2c2a55cd; S=0x2c2a55f9; 
@property(copy, nonatomic) NSArray *layerInstructions;	// G=0x2c2a5575; S=0x2c2a55a1; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x2c2a5485; S=0x2c2a54b1; 
+ (id)videoCompositionInstruction;	// 0x2c2a5441
// declared property getter: - (CGColorRef)backgroundColor;	// 0x2c2a551d
// declared property getter: - (BOOL)enablePostProcessing;	// 0x2c2a55cd
// declared property getter: - (id)layerInstructions;	// 0x2c2a5575
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x2c2a5549
// declared property setter: - (void)setEnablePostProcessing:(BOOL)processing;	// 0x2c2a55f9
// declared property setter: - (void)setLayerInstructions:(id)instructions;	// 0x2c2a55a1
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x2c2a54b1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x2c2a5485
@end

