/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVWeakReference, AVAssetTrack, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
	id _groupID;	// 8 = 0x8
	AVAssetTrack *_track;	// 12 = 0xc
	NSDictionary *_dictionary;	// 16 = 0x10
	AVWeakReference *_weakReferenceToGroup;	// 20 = 0x14
	BOOL _displaysNonForcedSubtitles;	// 24 = 0x18
}
@property(readonly, retain) NSDictionary *dictionary;	// G=0x36917d09; converted property
@property(readonly, assign) BOOL displaysNonForcedSubtitles;	// G=0x36917d59; converted property
@property(readonly, retain) AVAssetTrack *track;	// G=0x36917d49; converted property
- (id)initWithAsset:(id)asset group:(id)group dictionary:(id)dictionary;	// 0x36917a35
- (id)_groupID;	// 0x36917d39
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x36918019
- (id)availableMetadataFormats;	// 0x36917fd9
- (id)commonMetadata;	// 0x36917fb9
- (void)dealloc;	// 0x36917ba1
// converted property getter: - (id)dictionary;	// 0x36917d09
// converted property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x36917d59
- (id)group;	// 0x36917d19
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x36917ee1
- (unsigned)hash;	// 0x36917cd1
- (BOOL)isEqual:(id)equal;	// 0x36917c2d
- (BOOL)isPlayable;	// 0x36917f75
- (id)locale;	// 0x36917f99
- (id)mediaSubTypes;	// 0x36917da9
- (id)mediaType;	// 0x36917d89
- (id)metadataForFormat:(id)format;	// 0x36917ff9
// converted property getter: - (id)track;	// 0x36917d49
- (int)trackID;	// 0x36917d69
@end
