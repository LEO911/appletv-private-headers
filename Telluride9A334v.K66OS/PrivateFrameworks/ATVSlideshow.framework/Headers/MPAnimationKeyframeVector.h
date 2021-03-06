/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe {
@private
	MPVector *_vector;	// 20 = 0x14
}
@property(copy, nonatomic) MPVector *vector;	// G=0x32e4598d; S=0x32e457e9; @synthesize=_vector
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time;	// 0x32e45405
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x32e45451
- (id)initKeyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x32e4549d
- (id)initWithCoder:(id)coder;	// 0x32e45671
- (id)copyWithZone:(NSZone *)zone;	// 0x32e45545
- (void)dealloc;	// 0x32e455bd
- (id)description;	// 0x32e456e9
- (void)encodeWithCoder:(id)coder;	// 0x32e45609
- (id)keyframe;	// 0x32e46b3d
// declared property setter: - (void)setVector:(id)vector;	// 0x32e457e9
// declared property getter: - (id)vector;	// 0x32e4598d
@end

