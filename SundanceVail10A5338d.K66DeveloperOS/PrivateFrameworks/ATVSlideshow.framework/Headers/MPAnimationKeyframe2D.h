/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"


@interface MPAnimationKeyframe2D : MPAnimationKeyframe {
	CGPoint _point;	// 44 = 0x2c
}
@property(assign, nonatomic) CGPoint point;	// G=0x3335969d; S=0x333596b5; @synthesize=_point
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;	// 0x33359235
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x33359285
- (id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x333592d5
- (id)initWithCoder:(id)coder;	// 0x33359451
- (id)copyWithZone:(NSZone *)zone;	// 0x33359341
- (id)description;	// 0x33359559
- (void)encodeWithCoder:(id)coder;	// 0x33359399
- (id)keyframe;	// 0x3335b489
// declared property getter: - (CGPoint)point;	// 0x3335969d
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x333596b5
@end

