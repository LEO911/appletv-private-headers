/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"

@class NSDictionary, NSString;

@interface MCMotionTriggerExpression : MCMotionTrigger {
@private
	NSString *_expression;	// 32 = 0x20
	NSDictionary *_attributes;	// 36 = 0x24
}
@property(copy) NSDictionary *attributes;	// G=0x365305c5; S=0x365305d9; @synthesize=_attributes
@property(copy) NSString *expression;	// G=0x3653058d; S=0x365305a1; @synthesize=_expression
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andExpression:(id)expression;	// 0x365302c1
- (id)initWithImprint:(id)imprint;	// 0x36530309
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x365304b1
// declared property getter: - (id)attributes;	// 0x365305c5
- (void)demolish;	// 0x365303ad
- (id)description;	// 0x36530525
// declared property getter: - (id)expression;	// 0x3653058d
- (id)imprint;	// 0x36530425
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x365305d9
// declared property setter: - (void)setExpression:(id)expression;	// 0x365305a1
@end

