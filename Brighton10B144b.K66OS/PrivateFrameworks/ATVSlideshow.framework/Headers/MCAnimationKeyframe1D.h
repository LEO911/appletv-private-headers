/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe1D : MCAnimationKeyframe {
	float mValue;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x33246d4d; S=0x33246bfd; @synthesize=mValue
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time;	// 0x33246a61
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x33246a85
- (id)initWithImprint:(id)imprint;	// 0x33246b11
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33246d01
- (id)description;	// 0x33246c85
- (id)imprint;	// 0x33246b81
// declared property setter: - (void)setValue:(float)value;	// 0x33246bfd
// declared property getter: - (float)value;	// 0x33246d4d
@end

