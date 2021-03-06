/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCContainerEffect, MCPlug, NSString;

@interface MCAction : MCObject {
@private
	NSString *mTargetObjectID;	// 12 = 0xc
	MCContainerEffect *mContainerIfEffectAction;	// 16 = 0x10
	MCPlug *mPlugIfPlugAction;	// 20 = 0x14
}
@property(assign) MCContainerEffect *containerIfEffectAction;	// G=0x33317a75; S=0x33317a85; @synthesize=mContainerIfEffectAction
@property(assign) MCPlug *plugIfPlugAction;	// G=0x33317a95; S=0x33317aa5; @synthesize=mPlugIfPlugAction
@property(copy) NSString *targetObjectID;	// G=0x33317a31; S=0x33317a49; @synthesize=mTargetObjectID
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x333178e9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33317a09
// declared property getter: - (id)containerIfEffectAction;	// 0x33317a75
- (void)demolish;	// 0x33317959
- (id)imprint;	// 0x333179ad
// declared property getter: - (id)plugIfPlugAction;	// 0x33317a95
// declared property setter: - (void)setContainerIfEffectAction:(id)action;	// 0x33317a85
// declared property setter: - (void)setPlugIfPlugAction:(id)action;	// 0x33317aa5
// declared property setter: - (void)setTargetObjectID:(id)anId;	// 0x33317a49
// declared property getter: - (id)targetObjectID;	// 0x33317a31
@end

