/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionLayerInstructionInternal *_layerInstruction;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x35e3be5d; 
+ (void)initialize;	// 0x35e3b93d
- (id)init;	// 0x35e3b97d
- (id)initWithCoder:(id)coder;	// 0x35e3ba15
- (void)_setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range selector:(SEL)selector;	// 0x35e3caf9
- (void)_setOpacityRamps:(id)ramps;	// 0x35e3befd
- (void)_setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range selector:(SEL)selector;	// 0x35e3bf5d
- (void)_setTransformRamps:(id)ramps;	// 0x35e3be9d
- (void)_setValuesFromDictionary:(id)dictionary timeRange:(XXStruct_yD8eWC)range;	// 0x35e3f4dd
- (id)copyWithZone:(NSZone *)zone;	// 0x35e3bbe1
- (void)dealloc;	// 0x35e3bd91
- (id)dictionaryRepresentationWithTimeRange:(XXStruct_yD8eWC)timeRange;	// 0x35e3d63d
- (void)encodeWithCoder:(id)coder;	// 0x35e3bb29
- (void)finalize;	// 0x35e3be19
- (BOOL)getOpacityRampForTime:(XXStruct_pwHToB)time startOpacity:(float *)opacity endOpacity:(float *)opacity3 timeRange:(XXStruct_yD8eWC *)range;	// 0x35e3d155
- (BOOL)getTransformRampForTime:(XXStruct_pwHToB)time startTransform:(CGAffineTransform *)transform endTransform:(CGAffineTransform *)transform3 timeRange:(XXStruct_yD8eWC *)range;	// 0x35e3c5f1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e3bcdd
- (void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;	// 0x35e3cf65
- (void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;	// 0x35e3d079
- (void)setTrackID:(int)anId;	// 0x35e3be7d
- (void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;	// 0x35e3c3a5
- (void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;	// 0x35e3c4d1
// declared property getter: - (int)trackID;	// 0x35e3be5d
@end
