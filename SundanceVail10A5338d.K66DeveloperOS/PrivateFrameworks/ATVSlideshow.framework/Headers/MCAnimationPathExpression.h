/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"

@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath {
	NSString *mExpression;	// 12 = 0xc
}
@property(copy) NSString *expression;	// G=0x334b9235; S=0x334b9249; @synthesize=mExpression
+ (id)animationPathWithKey:(id)key andExpression:(id)expression;	// 0x334b9085
- (id)initWithImprint:(id)imprint;	// 0x334b90c1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b91e1
- (void)demolish;	// 0x334b9131
// declared property getter: - (id)expression;	// 0x334b9235
- (id)imprint;	// 0x334b9181
// declared property setter: - (void)setExpression:(id)expression;	// 0x334b9249
@end

