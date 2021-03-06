/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackReaderInspector.h"
#import "AVFoundation-Structs.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
	OpaqueFigMutableComposition *_figMutableComposition;	// 32 = 0x20
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x30331e0d; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30331d21
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x30331e0d
- (void)dealloc;	// 0x30331d85
- (void)finalize;	// 0x30331dc9
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x303320cd
- (id)segments;	// 0x30331e1d
@end

