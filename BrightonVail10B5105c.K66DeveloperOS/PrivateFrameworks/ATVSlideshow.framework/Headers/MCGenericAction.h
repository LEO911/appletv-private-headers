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
@property(copy) NSDictionary *attributes;	// G=0x3250a2e9; S=0x3250a2fd; @synthesize=_attributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x32509fe1
- (id)initWithImprint:(id)imprint;	// 0x3250a055
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3250a199
// declared property getter: - (id)attributes;	// 0x3250a2e9
- (void)demolish;	// 0x3250a0e9
- (id)description;	// 0x3250a291
- (id)imprint;	// 0x3250a139
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3250a2fd
@end
