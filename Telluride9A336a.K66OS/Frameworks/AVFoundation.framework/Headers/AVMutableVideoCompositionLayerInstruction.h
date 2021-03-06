/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionLayerInstruction.h"

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {
@private
	AVMutableVideoCompositionLayerInstructionInternal *_mutableLayerInstruction;	// 8 = 0x8
}
@property(assign, nonatomic) int trackID;	// G=0x31470779; S=0x31470a11; 
+ (id)videoCompositionLayerInstruction;	// 0x314707a5
+ (id)videoCompositionLayerInstructionWithAssetTrack:(id)assetTrack;	// 0x314707e9
- (void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;	// 0x314708c9
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;	// 0x3147085d
// declared property setter: - (void)setTrackID:(int)anId;	// 0x31470a11
- (void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;	// 0x314709ad
- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;	// 0x31470911
// declared property getter: - (int)trackID;	// 0x31470779
@end

