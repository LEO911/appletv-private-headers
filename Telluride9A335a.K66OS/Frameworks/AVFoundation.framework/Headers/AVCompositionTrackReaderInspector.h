/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
@private
	OpaqueFigMutableComposition *_figMutableComposition;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x3235ef59; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x3235f8ed
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x3235ef59
- (void)dealloc;	// 0x3235f8a9
- (void)finalize;	// 0x3235f865
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3235f4a5
- (id)segments;	// 0x3235f5cd
@end

