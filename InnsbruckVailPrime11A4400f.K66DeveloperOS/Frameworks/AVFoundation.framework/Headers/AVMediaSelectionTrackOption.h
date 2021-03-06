/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class NSDictionary, AVWeakReference, AVAssetTrack;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
	id _groupID;	// 8 = 0x8
	AVAssetTrack *_track;	// 12 = 0xc
	NSDictionary *_dictionary;	// 16 = 0x10
	AVWeakReference *_weakReferenceToGroup;	// 20 = 0x14
	BOOL _displaysNonForcedSubtitles;	// 24 = 0x18
}
@property(readonly, retain) NSDictionary *dictionary;	// G=0x2c3046d1; converted property
@property(readonly, assign) BOOL displaysNonForcedSubtitles;	// G=0x2c304721; converted property
@property(readonly, retain) AVAssetTrack *track;	// G=0x2c304711; converted property
- (id)initWithAsset:(id)asset group:(id)group dictionary:(id)dictionary;	// 0x2c3043fd
- (id)_groupID;	// 0x2c304701
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x2c3049e1
- (id)availableMetadataFormats;	// 0x2c3049a1
- (id)commonMetadata;	// 0x2c304981
- (void)dealloc;	// 0x2c304569
// converted property getter: - (id)dictionary;	// 0x2c3046d1
// converted property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x2c304721
- (id)group;	// 0x2c3046e1
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x2c3048a9
- (unsigned)hash;	// 0x2c304699
- (BOOL)isEqual:(id)equal;	// 0x2c3045f5
- (BOOL)isPlayable;	// 0x2c30493d
- (id)locale;	// 0x2c304961
- (id)mediaSubTypes;	// 0x2c304771
- (id)mediaType;	// 0x2c304751
- (id)metadataForFormat:(id)format;	// 0x2c3049c1
// converted property getter: - (id)track;	// 0x2c304711
- (int)trackID;	// 0x2c304731
@end

