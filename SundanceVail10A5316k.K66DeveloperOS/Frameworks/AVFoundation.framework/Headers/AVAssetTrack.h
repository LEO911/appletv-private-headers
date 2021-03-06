/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x3670798d; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x367079d9; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x36708b15
+ (id)mediaCharacteristicsForMediaTypes;	// 0x36707301
+ (id)mediaTypesForMediaCharacteristics;	// 0x3670767d
- (id)init;	// 0x367077b5
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x3670861d
- (id)_assetTrackInspector;	// 0x367079b9
- (BOOL)_containsMixedSubtitles;	// 0x36707e49
- (BOOL)_containsOnlyForcedSubtitles;	// 0x36707e29
- (id)_fallbackTrack;	// 0x36708749
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x36708529
- (id)_followingTrackAmongTracks:(id)tracks;	// 0x36708769
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x3674c4c1
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x367077d9
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x367076a9
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x367077fd
- (BOOL)_isAuxiliaryContent;	// 0x36707cc9
- (BOOL)_isMainProgramContent;	// 0x36707d45
- (id)_mostCloselyAssociatedTrackAmongTracks:(id)tracks;	// 0x36708869
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x36708a59
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x36707d69
- (id)_taggedCharacteristics;	// 0x36707ba1
// declared property getter: - (id)asset;	// 0x3670798d
- (id)availableMetadataFormats;	// 0x3670849d
- (id)commonMetadata;	// 0x36708471
- (id)copyWithZone:(NSZone *)zone;	// 0x3670781d
- (void)dealloc;	// 0x3670782d
- (id)description;	// 0x36707909
- (CGSize)dimensions;	// 0x36708281
- (float)estimatedDataRate;	// 0x36708195
- (id)extendedLanguageTag;	// 0x367081ed
- (void)finalize;	// 0x367078c5
- (id)formatDescriptions;	// 0x36707aad
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x36707e69
- (BOOL)hasMediaCharacteristics:(id)characteristics;	// 0x36708015
- (unsigned)hash;	// 0x36708ae9
- (BOOL)isEnabled;	// 0x36707b0d
- (BOOL)isEqual:(id)equal;	// 0x36708a79
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x367084f5
- (BOOL)isPlayable;	// 0x36707ad9
- (BOOL)isSelfContained;	// 0x36707b41
- (id)languageCode;	// 0x367081c1
- (int)layer;	// 0x36708301
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x36707a4d
- (id)locale;	// 0x36708219
- (id)mediaCharacteristics;	// 0x367080d9
- (id)mediaType;	// 0x36707a81
- (id)metadataForFormat:(id)format;	// 0x367084c9
- (CGSize)naturalSize;	// 0x36708245
- (int)naturalTimeScale;	// 0x36708169
- (float)nominalFrameRate;	// 0x36708359
- (CGAffineTransform)preferredTransform;	// 0x367082bd
- (float)preferredVolume;	// 0x3670832d
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x36708405
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x367083b1
- (id)segments;	// 0x36708385
- (int)statusOfValueForKey:(id)key;	// 0x36707a05
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x36707a19
- (XXStruct_yD8eWC)timeRange;	// 0x36708129
- (long long)totalSampleDataLength;	// 0x36707b75
// declared property getter: - (int)trackID;	// 0x367079d9
@end

