/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"


@interface AVPlaybackItemInspector : AVAssetInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
}
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x34780d11; S=0x3478146d; 
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem;	// 0x347811bd
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x34780d11
- (void *)_propertyAccessor:(CFStringRef)accessor;	// 0x34781ad9
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x3478146d
- (id)availableMetadataFormats;	// 0x34780d6d
- (id)commonMetadata;	// 0x34780d8d
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x34780d25
- (void)dealloc;	// 0x34781181
- (XXStruct_pwHToB)duration;	// 0x34781535
- (void)finalize;	// 0x34781145
- (unsigned)hash;	// 0x347813e5
- (BOOL)isEqual:(id)equal;	// 0x347812e5
- (id)lyrics;	// 0x34780dad
- (id)metadataForFormat:(id)format;	// 0x34780d4d
- (CGSize)naturalSize;	// 0x34781d25
- (BOOL)providesPreciseDurationAndTiming;	// 0x34780d21
- (long)trackCount;	// 0x34780dcd
@end
