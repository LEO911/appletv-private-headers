/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCompositionTrack.h"
#import "AVFoundation-Structs.h"

@class AVMutableCompositionTrackInternal, NSArray, NSString;

@interface AVMutableCompositionTrack : AVCompositionTrack {
@private
	AVMutableCompositionTrackInternal *_mutablePriv;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *extendedLanguageTag;	// G=0x326aa205; S=0x326aa231; 
@property(copy, nonatomic) NSString *languageCode;	// G=0x326aa1b9; S=0x326aa1e5; 
@property(assign, nonatomic) int naturalTimeScale;	// G=0x326aa13d; S=0x326aa169; 
@property(assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x326aa251; S=0x326aa27d; 
@property(assign, nonatomic) float preferredVolume;	// G=0x326aa2e5; S=0x326aa311; 
@property(copy, nonatomic) NSArray *segments;	// G=0x326a93d1; S=0x326a93fd; 
- (void)_setTrackReaderPropertyValue:(void *)value forKey:(CFStringRef)key;	// 0x326aa0e9
// declared property getter: - (id)extendedLanguageTag;	// 0x326aa205
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x326a9b7d
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofTrack:(id)track atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x326a95a1
- (BOOL)insertTimeRanges:(id)ranges ofTracks:(id)tracks atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x326a972d
// declared property getter: - (id)languageCode;	// 0x326aa1b9
// declared property getter: - (int)naturalTimeScale;	// 0x326aa13d
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x326aa251
// declared property getter: - (float)preferredVolume;	// 0x326aa2e5
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x326a9c49
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x326a9d15
// declared property getter: - (id)segments;	// 0x326a93d1
// declared property setter: - (void)setExtendedLanguageTag:(id)tag;	// 0x326aa231
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x326aa1e5
// declared property setter: - (void)setNaturalTimeScale:(int)scale;	// 0x326aa169
// declared property setter: - (void)setPreferredTransform:(CGAffineTransform)transform;	// 0x326aa27d
// declared property setter: - (void)setPreferredVolume:(float)volume;	// 0x326aa311
// declared property setter: - (void)setSegments:(id)segments;	// 0x326a93fd
- (BOOL)validateTrackSegments:(id)segments error:(id *)error;	// 0x326a9e01
@end

