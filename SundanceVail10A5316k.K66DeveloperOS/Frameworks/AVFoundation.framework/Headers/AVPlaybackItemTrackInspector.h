/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	unsigned long _mediaType;	// 16 = 0x10
	AVWeakReference *_weakReferenceToAsset;	// 20 = 0x14
}
@property(readonly, assign) int trackID;	// G=0x367860ad; converted property
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x36785e25
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x36786121
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x36786131
- (id)asset;	// 0x3678608d
- (void)dealloc;	// 0x36785fe5
- (CGSize)dimensions;	// 0x36786291
- (float)estimatedDataRate;	// 0x36786225
- (id)extendedLanguageTag;	// 0x3678625d
- (void)finalize;	// 0x36786049
- (id)formatDescriptions;	// 0x36786191
- (unsigned)hash;	// 0x367863f1
- (BOOL)isEnabled;	// 0x367861b1
- (BOOL)isEqual:(id)equal;	// 0x36786349
- (BOOL)isSelfContained;	// 0x367861d9
- (id)languageCode;	// 0x36786259
- (id)mediaType;	// 0x367860bd
- (CGSize)naturalSize;	// 0x36786261
- (int)naturalTimeScale;	// 0x3678621d
- (float)nominalFrameRate;	// 0x36786301
- (CGAffineTransform)preferredTransform;	// 0x367862c1
- (float)preferredVolume;	// 0x367862f9
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x36786321
- (XXStruct_yD8eWC)timeRange;	// 0x367861e5
- (long long)totalSampleDataLength;	// 0x367861dd
// converted property getter: - (int)trackID;	// 0x367860ad
@end

