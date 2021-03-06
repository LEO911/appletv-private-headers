/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCStateOperation.h"


@interface MCStateOperationScalarSet : MCStateOperation {
	float _scalar;	// 16 = 0x10
}
@property(assign, nonatomic) float scalar;	// G=0x332450b9; S=0x332450c9; @synthesize=_scalar
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andScalar:(float)scalar;	// 0x33244ed1
- (id)initWithImprint:(id)imprint;	// 0x33244f0d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33245009
- (id)description;	// 0x33245055
- (id)imprint;	// 0x33244f7d
// declared property getter: - (float)scalar;	// 0x332450b9
// declared property setter: - (void)setScalar:(float)scalar;	// 0x332450c9
@end

