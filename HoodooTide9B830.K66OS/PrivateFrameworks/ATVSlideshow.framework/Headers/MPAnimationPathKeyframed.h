/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationPath.h"

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {
@private
	NSMutableSet *_keyframes;	// 16 = 0x10
}
@property(readonly, retain) NSMutableSet *keyframes;	// G=0x32018059; converted property
+ (id)animationPath;	// 0x32017ce9
- (id)init;	// 0x32017d21
- (id)initWithCoder:(id)coder;	// 0x32017de1
- (void)addKeyframe:(id)keyframe;	// 0x320180ad
- (void)addKeyframes:(id)keyframes;	// 0x320180e9
- (void)cleanup;	// 0x3201a261
- (void)copyKeyframes:(id)keyframes;	// 0x3201a16d
- (id)copyWithZone:(NSZone *)zone;	// 0x32017f61
- (id)createKeyframeWithFunction:(id)function atTime:(double)time forDuration:(double)duration;	// 0x3201905d
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetType:(int)type forDuration:(double)duration;	// 0x320190a9
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x32018f31
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x32018f79
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x32018e99
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x32018edd
- (id)createKeyframeWithVector:(id)vector atTime:(double)time;	// 0x32018fc5
- (id)createKeyframeWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x32019009
- (void)dealloc;	// 0x32017f01
- (id)description;	// 0x32017fb5
- (void)dump;	// 0x320197d5
- (void)encodeWithCoder:(id)coder;	// 0x32017d85
- (id)fullDebugLog;	// 0x320197fd
// converted property getter: - (id)keyframes;	// 0x32018059
- (id)orderedKeyframes;	// 0x32018069
- (id)parent;	// 0x320190fd
- (double)parentMainDuration;	// 0x32019581
- (double)parentPhaseInDuration;	// 0x32019249
- (double)parentPhaseOutDuration;	// 0x320193e5
- (double)relativeTimeForKeyframe:(id)keyframe;	// 0x3201910d
- (void)removeAllKeyframes;	// 0x32018dcd
- (void)removeKeyframe:(id)keyframe;	// 0x32018ae1
- (void)removeKeyframes:(id)keyframes;	// 0x32018d31
- (void)setAnimationPath:(id)path;	// 0x3201a271
@end

