/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {
	NSMutableDictionary *_attributes;	// 12 = 0xc
}
@property(copy) NSDictionary *attributes;	// G=0x3613bf01; S=0x3613bf15; @synthesize=_attributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x3613bbf9
- (id)initWithImprint:(id)imprint;	// 0x3613bc6d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3613bdb1
// declared property getter: - (id)attributes;	// 0x3613bf01
- (void)demolish;	// 0x3613bd01
- (id)description;	// 0x3613bea9
- (id)imprint;	// 0x3613bd51
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3613bf15
@end

