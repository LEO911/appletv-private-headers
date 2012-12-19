/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class NSString, AVWeakReference, NSDictionary;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
	id _groupID;	// 8 = 0x8
	NSString *_mediaType;	// 12 = 0xc
	NSDictionary *_dictionary;	// 16 = 0x10
	AVWeakReference *_weakReferenceToGroup;	// 20 = 0x14
	BOOL _displaysNonForcedSubtitles;	// 24 = 0x18
}
@property(readonly, retain) NSDictionary *dictionary;	// G=0x302cb779; converted property
@property(readonly, retain) NSString *mediaType;	// G=0x302cb7b9; converted property
- (id)initWithAsset:(id)asset group:(id)group dictionary:(id)dictionary;	// 0x302cb44d
- (id)_groupID;	// 0x302cb7a9
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302cbbd9
- (id)availableMetadataFormats;	// 0x302cbba1
- (id)commonMetadata;	// 0x302cba45
- (void)dealloc;	// 0x302cb585
// converted property getter: - (id)dictionary;	// 0x302cb779
- (id)group;	// 0x302cb789
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x302cb7e5
- (unsigned)hash;	// 0x302cb71d
- (BOOL)isEqual:(id)equal;	// 0x302cb611
- (BOOL)isPlayable;	// 0x302cb9c5
- (id)locale;	// 0x302cb9c9
- (id)mediaSubTypes;	// 0x302cb7c9
// converted property getter: - (id)mediaType;	// 0x302cb7b9
- (id)metadataForFormat:(id)format;	// 0x302cbbbd
@end
