/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, NSURL, NSArray;

@interface AVAssetWriterConfigurationState : NSObject {
@private
	NSURL *_URL;	// 4 = 0x4
	AVMediaFileType *_mediaFileType;	// 8 = 0x8
	XXStruct_pwHToB _movieFragmentInterval;	// 12 = 0xc
	BOOL _shouldOptimizeForNetworkUse;	// 36 = 0x24
	NSArray *_metadataItems;	// 40 = 0x28
	int _movieTimeScale;	// 44 = 0x2c
	NSArray *_inputs;	// 48 = 0x30
}
@property(copy, nonatomic) NSURL *URL;	// G=0x3474f01d; S=0x3474fc65; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputs;	// G=0x3474ef5d; S=0x3474fce9; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3474f00d; S=0x3474fc91; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x3474ef8d; S=0x3474fcbd; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x3474efbd; S=0x3474efd9; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x3474ef6d; S=0x3474ef7d; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3474ef9d; S=0x3474efad; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x3474f01d
- (void)dealloc;	// 0x3474fbb9
// declared property getter: - (id)inputs;	// 0x3474ef5d
// declared property getter: - (id)mediaFileType;	// 0x3474f00d
// declared property getter: - (id)metadataItems;	// 0x3474ef8d
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x3474efbd
// declared property getter: - (int)movieTimeScale;	// 0x3474ef6d
// declared property setter: - (void)setInputs:(id)inputs;	// 0x3474fce9
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x3474fc91
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x3474fcbd
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3474efd9
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x3474ef7d
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3474efad
// declared property setter: - (void)setURL:(id)url;	// 0x3474fc65
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3474ef9d
@end
