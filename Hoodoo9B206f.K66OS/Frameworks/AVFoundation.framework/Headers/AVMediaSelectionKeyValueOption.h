/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVWeakReference, NSDictionary, NSString;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
	id _groupID;	// 8 = 0x8
	NSString *_mediaType;	// 12 = 0xc
	NSDictionary *_dictionary;	// 16 = 0x10
	AVWeakReference *_weakReferenceToGroup;	// 20 = 0x14
}
@property(readonly, retain) NSDictionary *dictionary;	// G=0x3270ae15; converted property
@property(readonly, retain) id groupID;	// G=0x3270ae25; converted property
@property(readonly, retain) NSString *mediaType;	// G=0x3270ae61; converted property
- (id)initWithDictionary:(id)dictionary group:(id)group;	// 0x3270aaa9
- (id)_ancillaryDescription;	// 0x3270ad79
- (BOOL)_isDesignatedDefault;	// 0x3270afdd
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3270b231
- (id)availableMetadataFormats;	// 0x3270b1f9
- (id)commonMetadata;	// 0x3270b09d
- (void)dealloc;	// 0x3270ab9d
// converted property getter: - (id)dictionary;	// 0x3270ae15
- (id)group;	// 0x3270adf5
// converted property getter: - (id)groupID;	// 0x3270ae25
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x3270ae8d
- (unsigned)hash;	// 0x3270ad21
- (BOOL)isEqual:(id)equal;	// 0x3270ac11
- (BOOL)isPlayable;	// 0x3270afd9
- (id)locale;	// 0x3270b021
- (id)mediaSubTypes;	// 0x3270ae71
// converted property getter: - (id)mediaType;	// 0x3270ae61
- (id)metadataForFormat:(id)format;	// 0x3270b215
- (id)optionID;	// 0x3270ae35
- (id)propertyList;	// 0x3270b235
@end

