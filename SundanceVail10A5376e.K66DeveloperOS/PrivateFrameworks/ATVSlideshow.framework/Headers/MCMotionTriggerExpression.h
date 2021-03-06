/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {
	NSString *_expression;	// 32 = 0x20
	NSDictionary *_attributes;	// 36 = 0x24
}
@property(copy) NSDictionary *attributes;	// G=0x362fc84d; S=0x362fc861; @synthesize=_attributes
@property(copy) NSString *expression;	// G=0x362fc829; S=0x362fc83d; @synthesize=_expression
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andExpression:(id)expression;	// 0x362fc55d
- (id)initWithImprint:(id)imprint;	// 0x362fc5a5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x362fc74d
// declared property getter: - (id)attributes;	// 0x362fc84d
- (void)demolish;	// 0x362fc649
- (id)description;	// 0x362fc7c1
// declared property getter: - (id)expression;	// 0x362fc829
- (id)imprint;	// 0x362fc6c1
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x362fc861
// declared property setter: - (void)setExpression:(id)expression;	// 0x362fc83d
@end

