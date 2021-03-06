/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrack.h"

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {
	AVCompositionTrackInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x302d4a8d; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x302d4831
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x302d4a6d
- (void)dealloc;	// 0x302d48f1
- (id)description;	// 0x302d49c1
- (void)finalize;	// 0x302d4959
// declared property getter: - (id)segments;	// 0x302d4a8d
@end

