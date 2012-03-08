/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSMutableCopying.h"
#import "AVAsset.h"

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
@private
	AVCompositionInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x30e89275; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x30e89265; 
+ (void)initialize;	// 0x30e883c1
- (id)init;	// 0x30e89151
- (id)_assetInspector;	// 0x30e89165
- (long)_createEmptyMutableCompositionIfNeeded;	// 0x30e8840d
- (OpaqueFigFormatReader *)_formatReader;	// 0x30e89429
- (id)_initWithComposition:(id)composition;	// 0x30e895e5
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x30e883c5
- (id)_mutableTracks;	// 0x30e89309
- (id)_newTrackForIndex:(long)index;	// 0x30e89229
- (void)_setNaturalSize:(CGSize)size;	// 0x30e883e5
- (void)dealloc;	// 0x30e89529
- (void)finalize;	// 0x30e894a9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30e891f1
// declared property getter: - (CGSize)naturalSize;	// 0x30e89275
// declared property getter: - (id)tracks;	// 0x30e89265
@end
